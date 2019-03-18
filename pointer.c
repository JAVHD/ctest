/*
* @Author: bear
* @Date:   2018-11-22 23:00:46
* @Last Modified by:   bear
* @Last Modified time: 2018-11-25 01:10:03
*/


#include <stdio.h>

int foo(int * a);

int main(void)
{
	/* code */
	int a, b;

	a = 10;

	b = 20;

	printf("a:%d,&a:%p\n", a, &a);
	printf("b:%d,&b:%p\n", b, &b);

	foo(&a);

	printf("a:%d,&a:%p\n", a, &a);
	printf("b:%d,&b:%p\n", b, &b);

	return 0;
}


int foo(int * a) {

	int b = 30;

	a = &b;

	*a = 30;

	// printf("a:%d,&a:%p\n", a, &a);
	// printf("b:%d,&b:%p\n", b, &b);

	return 0;

}