/*
* @Author: bear
* @Date:   2019-03-25 00:45:14
* @Last Modified by:   bear
* @Last Modified time: 2019-03-25 09:58:34
*/

#include <stdio.h>

#define LEN 10

int main()
{

	int a;

	int * b;

	struct person
	{
		char name[LEN];
		int age;
		double salary;
	};

	struct person * shanshan;

	printf("%zu\n", sizeof(b)); //8
	printf("%zu\n", sizeof(shanshan)); //8

	return 0;
}
