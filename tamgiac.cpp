#include<stdio.h>
#include <math.h>
int main()
{
	float a,b,c,p,s;
	printf("Nhap do dai canh thu nhat : ");
	scanf("%f",&a);
	printf("\nNhap do dai canh thu hai : ");
	scanf("%f",&b);
	printf("\nNhap do dai canh thu ba : ");
	scanf("%f",&c);
	if((a+b>c) && (a+c>b) && (b+c>a) && (a>b-c) && (b>a-c) && (c>a-b))
	{
        printf("\nDay la ba canh cua tam giac");
        p = (a+b+c)/2;
        s = sqrt(p*(p-a)*(p-b)*(p-c));
        printf("\ndien tich cua tam giac la %.2f", s);
    }
    else
	{
    	printf("\nBa canh tam giac khong hop le !!!");
	}
	
	return 0;
}

