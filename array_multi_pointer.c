/*
* @Author: bear
* @Date:   2018-12-10 00:29:34
* @Last Modified by:   bear
* @Last Modified time: 2018-12-10 00:45:34
*/


#include <stdio.h>

int main(void)
{
	/* code */

	int zippo[2][4];

	//zippo &zippo[0]
	//zippo[0] &zippo[0][0]

	//*zippo zippo[0]

	//**zippo zippo[0][0]
	printf("pointer...\n");
	printf("zippo:%p\n", zippo);
	printf("&zippo[0]:%p\n", &zippo[0]);
	printf("zippo[0]:%p\n", zippo[0]);
	printf("&zippo[0][0]%p\n", &zippo[0][0]);

	printf("value...\n");

	printf("zippo[0][0]:%d\n", zippo[0][0]);
	printf("**zippo:%d\n", **zippo);

	return 0;
}