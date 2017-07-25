#include<stdio.h>
#include<string.h>
typedef struct MyComplex
{
	double real;
	double img;
}mc;
mc Plus(mc a,mc b)
{
	mc result;
	result.real = a.real + b.real;
	result.img = a.img + b.img;
	return result;
}
mc Sub(mc a,mc b)
{
	mc result;
	result.real = a.real - b.real;
	result.img = a.img - b.img;
	return result;
}
void Show(mc a)
{
	if(a.real == 0 && a.img == 0)
		printf("0.000\n");
	else if(a.real == 0)
		printf("%.4fi\n",a.img);
	else if(a.img == 0)
		printf("%.4f\n",a.real);
	else
	{
		if(a.img < 0)
			printf("%lg %lg\n",a.real,a.img);
		else
			printf("%lg %lg\n",a.real,a.img);
	}
}
int main()
{
	mc a,b;
	scanf("%lf%lf",&a.real,&a.img);
	getchar();
	scanf("%lf%lf",&b.real,&b.img);
	Show(Plus(a,b));
	Show(Sub(a,b));
}
