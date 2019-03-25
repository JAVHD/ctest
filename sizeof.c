/*
* @Author: bear
* @Date:   2019-03-24 20:48:31
* @Last Modified by:   bear
* @Last Modified time: 2019-03-24 21:37:34
*/

#include <stdio.h>

#define LEN 10

int main()
{

	struct person
	{
		char name[LEN];
		int age;
		double salary;
	};

	//sizeof(struct person);

	printf("%zu\n", sizeof(struct person)); //24 = 10 + 8



	return 0;
}