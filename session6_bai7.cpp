#include <stdio.h>

int main(){
    int n;
    	printf("nhap vao mot so nguyen: ");
    	scanf("%d",&n);
    for(int i = 1 ; i < n ; i++){
		if(n % i == 0){
			printf("%d ",i);	
		}
		
	}
 return 0;      	
}