#include <stdio.h>
#include <math.h>

int main(){
	int i,n;
	    printf("nhap vao mot so nguyen: ");
	    scanf("%d",&n);
    for(i = 2; i <= sqrt(n) ; i++ ){
    	if(n % i == 0){
    		printf("%d khong phai la so nguyen to",n);
    		break;
		}else{
			printf("%d la mot so nguyen tu", n);
			break;
		}
		
	}	
	
return 0;	
}
