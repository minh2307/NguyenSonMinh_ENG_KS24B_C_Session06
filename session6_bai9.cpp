#include <stdio.h>

int main(){
	int n,num1,num2,num3,sum;
	printf("nhung so amtrong co 3 chu so\n ");
	for(n = 100 ; n < 1000 ; n++ ){
		num1 = n / 100;
		num2 = (n / 10) % 10;
		num3 = n % 10;
	    sum = num1*num1*num1+num2*num2*num2+num3*num3*num3;
		if(sum == n){
			printf("%d\n",n);
		}
	}
	
	
return 0;
}
