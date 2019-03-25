/*
* @Author: bear
* @Date:   2018-11-19 11:21:01
* @Last Modified by:   bear
* @Last Modified time: 2019-03-25 11:02:19
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */

	printf("argc value is %d\n", argc);

	if (argc != 0) {
		for (int i = 0; i < argc; i++)
		{
			/* code */
			printf("the argv is %s\n", argv[i]);
		}
	}

	// beardeMacBook-Pro:c bear$ ./main
	// argc value is 1
	// the argv is ./main


	return 0;
}
