/*
* @Author: bear
* @Date:   2018-12-09 20:59:41
* @Last Modified by:   bear
* @Last Modified time: 2018-12-09 21:07:03
*/


#include <stdio.h>


int main(void)
{
	/* code */

	int a = 110;

	int b =  119;

	const int * const p1 = &a;

	*p1 = 120;	//read-only variable is not assignable

	printf("%d\n", *p1);

	return 0;
}
