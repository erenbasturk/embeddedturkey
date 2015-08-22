#include <stdio.h>

#define MAX 10
#define MIN 20

int main()
{

	#ifdef MAX
		#if defined MIN
			#if (MAX > 0 && MIN >0)
				printf("\n Positive numbers \n");
			#else
				printf("\n Negative numbers \n");
			#endif
		#else
			printf("\n ERROR : MIN not defined \n");
		#endif
	#else
		printf(" ERROR : MAX not defined ");
	#endif		
}

