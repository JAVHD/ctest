/*
* @Author: bear
* @Date:   2019-03-18 23:32:24
* @Last Modified by:   bear
* @Last Modified time: 2019-03-18 23:55:25
*/

#include <stdio.h>

#define LEN 30


struct person {
	char name[LEN];
	int age;
	double salary;
	double jobAge;
};


int caculateSalary(struct person * param) {

	param->age = 18;

	return 0;
}


int main(void)
{

	struct person bear = {
		"bear",
		28,
		8000.00,
		1.5
	};


	caculateSalary(&bear);

	printf("%d\n", bear.age);

	return 0;
}