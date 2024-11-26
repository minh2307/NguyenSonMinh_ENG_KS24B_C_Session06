#include <stdio.h>

int main(){
	int month,day,year;
	    printf("nhap vao so thang: ");
	    scanf("%d",&month);
	    printf("nhap vao so nam: ");
	    scanf("%d",&year);
	if( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ){
	
			printf("nam %d thang %d co 31 ngay",year,month);
	
	}
	else if( month == 4 || month == 6 || month == 9 || month == 11 ){
			printf("nam %d thang %d co 30 ngay",year,month);
	}
	else if( month == 2 ){
        if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0){
		  
		  	printf("nam %d thang %d co 29 ngay",year,month);
		}
		else{
			printf("nam %d thang %d co 28 ngay",year,month);
	    }
	    
    }
   

    
return 0;
}
