#include <stdio.h>

struct xyz{
	int a, b, result;
	void (*add) (struct xyz *);
	void (*sub) (struct xyz *);
};

void add(struct xyz *p)
{
	p->result = p->a + p->b;
}

void sub(struct xyz *p)
{
	p->result = p->a - p->b;
}

main()
{
	struct xyz obj={10,20,0,&add,&sub};
	
	obj.add(&obj);
	printf("\n %d + %d = %d\n",obj.a, obj.b, obj.result);
}
