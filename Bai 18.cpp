#include<stdio.h>

int main(){
	int lc, nt;
	int x,y;
	printf("Nhap lua chon:");
	scanf("%d",&lc);
	printf("Nhap tien:");
	scanf("%d",&nt);
	switch(lc)
	{
	case 1:
		if(nt<9000)
		{
			printf("thieu tien");
		}else{
		x=nt/9000;
		y=nt-9000;	
		printf("Tra xanh C2- %d chai- Tien du: %d",x,y);
	         }break;
	case 2:  
	if(nt<11000)
		{
			printf("thieu tien");
		}else{
		x=nt/11000;
		y=nt-11000;	
		printf("Sting- %d chai- Tien du: %d",x,y);
	         }break;     
	case 3:
	if(nt<10000)
		{
			printf("thieu tien");
		}else{
		x=nt/10000;
		y=nt-10000;	
		printf("Pepsi- %d chai- Tien du: %d",x,y);
	         }break;		  
	case 4:
	if(nt<13000)
		{
			printf("thieu tien");
		}else{
		x=nt/13000;
		y=nt%13000;	
		printf("Warrior- %d chai- Tien du: %d",x,y);
	         }break;
	case 5:
	if(nt<5000)
		{
			printf("thieu tien");
		}else{
		x=nt/5000;
		y=nt-5000;	
		printf("Nuoc suoi- %d chai- Tien du: %d",x,y);
	         }break;
	case 6:         
	if(nt<8000)
		{
			printf("thieu tien");
		}else{
		x=nt/8000;
		y=nt-8000;	
		printf("Sua tuoi- %d chai- Tien du: %d",x,y);
	         }break;
	default: printf("Nhap sai");
}
	         
			 
}
