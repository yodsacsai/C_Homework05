#include"stdio.h"

main(){
	int x=10;
	double y=5.5,z;
	int *a;
	double *b;
	//a =&y; wrong
	a = &x;
	z = *a + 5 * x;
	b = &z;
	printf("Value is %lf", x + z + (*a + *b));
		
	getch();
}
