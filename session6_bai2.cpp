#include <stdio.h>

int main(){
	int a,b,c,d,e,count;
	    printf("nhap vao 5 so nguyen: ");
	    scanf ("%d %d %d %d %d",&a,&b,&c,&d,&e);
	if(a % 2 != 0){
		count++;
	}if(b % 2 != 0){
		count++;
	}if(c % 2 != 0){
		count++;
	}if(d % 2 != 0){
		count++;
	}if(e % 2 != 0){
		count++;
	}
		printf("co %d so le\n",count);
		printf("co %d so chan\n",5-count);
		
return 0;
}
