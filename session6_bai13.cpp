#include <stdio.h>

int main(){
	int day,month,year;
	    printf("nhap vao ngay sinh: ");
	    scanf("%d",&day);
	    printf("nhap vao thang sinh: ");
	    scanf("%d",&month);
	    printf("nhap vao nam sinh: ");
	    scanf("%d",&year);
	
		switch(month){
			case 1:
				if(1 <= day && day <= 19){
				printf("ma ket");
				} 
				if(20 <= day && day <= 31){
				printf("bao binh");
				}
			break; 
			case 2:
				if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
					if(1 <= day && day <= 18){
					printf("bao binh");
				} 
					if(19 <= day && day <= 29){
					printf("ma ket");
				} 
				else{
					if(1 <= day && day <= 18){
					printf("bao binh");
				} 
					if(19 <= day && day <= 28){
					printf("song ngu");
				} 
				}
			break;
			case 3:
				if(1 <= day && day <= 20){
					printf("song ngu");
				}
				if(21 <= day && day <= 31){
					printf("bach duong");
				}
			break;
			case 4:
				if(1 <= day && day <= 20){
					printf("bach duong");
				}
				if(21 <= day && day <= 30){
					printf("kim nguu");
				}
			break;
			case 5:
				if(1 <= day && day <= 20){
					printf("kim nguu");
				}
				if(21 <= day && day <= 31){
					printf("song tu");
				}
			break;
			case 6:
				if(1 <= day && day <= 21){
					printf("song tu");
				}
				if(22 <= day && day <= 30){
					printf("cu giai");
				}
			break;
			case 7: 
				if(1 <= day && day <= 22){
					printf("cu giai");
				}
				if(23 <= day && day <= 31){
					printf("su tu");
				}
			break;
			case 8:
				if(1 <= day && day <= 22){
					printf("su tu");
				}
				if(22 <= day && day <= 31){
					printf("xu nu");
				}
			break;
			case 9:
			    if(1 <= day && day <= 22){
					printf("xu nu");
				}
				if(23 <= day && day <= 30){
					printf("thien binh");
				}
			break;
			case 10:
			   if(1 <= day && day <= 23){
					printf("thien binh");
				}
				if(24 <= day && day <= 31){
					printf("bo cap");
				}
			break;
			case 11:
				if(1 <= day && day <= 22){
					printf("bo cap");
				}
				if(23 <= day && day <= 30){
					printf("nhan ma");
				}	
			break;
			case 12:
				if(1 <= day && day <= 21){
					printf("nhan ma");
				}
				if(22 <= day && day <= 31){
					printf("ma ket");
				}
			default:
			    return 0;	
				
				
			}
		}

return 0;
}
