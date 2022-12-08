#include<stdio.h>

int main(){
	int loai,sl,x;
	printf("Nhap loai hang:");
	scanf("%d",&loai);
	printf("so luong:");
	scanf("%d",&sl);
	
	if(sl<1||sl>5)
	{
		printf("Qua so luong quy dinh");
	}else{
		switch(loai)
		{
		case 1:
			x=sl*500000;
			printf("So tien phai tra:%d",x);
			break;
		case 2: 
		x=sl*460000;
		printf("So tien phai tra:%d",x);
		break;
		case 3:
			x=sl*425000;
			printf("So tien phai tra la : %d",x);
			break;
		case 4:
		x=sl*450000;
		printf("So tien phai tra la: %d",x);
		break;
		
		default : printf("Mat hang khong giam gia");	
	}
}
}
