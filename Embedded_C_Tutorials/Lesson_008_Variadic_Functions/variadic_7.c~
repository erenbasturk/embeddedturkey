#include <stdio.h>
#include <stdarg.h>
int add(int x,...);

int add(int x,...)
{
	int data;
	va_list opt;
	va_start(opt,x);
	data = va_arg(opt,int);
	printf("\n %d \n",data);
	data = va_arg(opt,int);
	printf("\n %d \n",data);

}


int main()
{
	int result;
	add(10,20,30,40);
	add(10,20,30,40,20,40,60);
}
