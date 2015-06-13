#include <stdio.h>
#include <stdarg.h>
int add(int x,...);

int add(int x,...)
{
	va_list opt;

}


int main()
{
	int result;
	add(10,20,30,40);
	add(10,20,30,40,20,40,60);
}
