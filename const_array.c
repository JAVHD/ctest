/*
* @Author: bear
* @Date:   2018-12-09 19:59:33
* @Last Modified by:   bear
* @Last Modified time: 2018-12-09 20:22:48
*/


#include <stdio.h>

#define SIZE 12;

int main(void)
{

	const int array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

	/* code */

	//printf("%v\n", a);

	array[12] = 110;	//error: read-only variable is not assignable

	return 0;
}


