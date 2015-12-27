#include <stdio.h>

struct xyz{
	int a, b, result;
};

void add(struct xyz *p)
{
	p->result = p->a + p->b;
}

void sub(struct xyz *p)
{
	p->result = p->a - p->b;
}
