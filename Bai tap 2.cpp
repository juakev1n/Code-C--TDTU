#include<stdio.h>

int main(){
	float r,h,c;
	int hinh;
	printf("Nhap so tuong ung voi chuong trinh tinh ban muon chon\n The tich khoi tru : 1 \n Dien tich xung quanh hinh tru: 2 \n Dien tich toan phan hinh tru:3  ");
	scanf("%d",&hinh);
	switch(hinh)
	{
		case 1:
			{
				printf("Nhap r ban kinh:");
				scanf("%f",&r);
				printf("Nhap h chieu cao:");
				scanf("%f",&h);
				c=3.14*r*r*h;
				printf("The tich khoi tru la : %f",c);
			};break;
		case 2:
		{
			printf("Nhap r ban kinh:");
			scanf("%f",&r);
			printf("Nhap h chieu cao :");
			scanf("%f",&h);
			c=2*3.14*r*h;
			printf("Dien tich xung quanh hinh tru la :%f",c);
			
	    };break;
	    case 3:
	    {
	    	printf("Nhap ban kinh :");
	    	scanf("%f",&r);
	    	printf("Nhap chieu cao h:");
	    	scanf("%f",&h);
	    	c=2*3.14*r*h+2*3.14*r*r;
	    	printf("Dien tich toan phan cua hinh tru la :%f",c);
		};break;
		default:printf("Nhap lai");
	}
}
