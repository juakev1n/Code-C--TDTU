# thanh-
#include<stdio.h>

int main(){
	int seri;
	int x;
    printf("Nhap so seri :");
    scanf("%d",&seri);
    
    if(seri<1000000 && seri>9999999)
    {
    	printf("Nhap sai");
	}else{
		x=(seri%1000000)/100000;
		switch(x)
		{
		case 3:
			printf("iPhone 14");
			break;
		
		case 4:
			printf("Iphone 14 plus");
			break;
		case 5:
			printf("Iphone 14 pro");
			break;
		case 6:
			printf("Iphone 14 pro max");
			break;
		case 1:
		case 2:
		case 7:
		case 8:
		case 9:
			printf("Dien thoai chua san xuat");
			break;

}
}
}
