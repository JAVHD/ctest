/*
* @Author: bear
* @Date:   2018-11-26 13:56:44
* @Last Modified by:   bear
* @Last Modified time: 2018-11-26 14:07:28
*/

#include <stdio.h>


int main()
{
	/* code */

	int array[5] = {1, 2, 3, 4 , 5};

	//array = {1, 2, 3, 4 , 5};


	printf("%p\n", array);

	for (int i = 0; i < 5; ++i)
	{
		/* code */
		printf("%p\n", &array[i]);
	}


	return 0;
}