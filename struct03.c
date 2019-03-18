/*
* @Author: bear
* @Date:   2019-03-18 15:21:54
* @Last Modified by:   bear
* @Last Modified time: 2019-03-18 20:30:00
*/

#include <stdio.h>

#define LEN 50

struct funds
{
	char bank[LEN];
	double bankfund;
	char savebank[LEN];
	double savefund;

};

float sum(double x, double y) {

	return x + y;
};



int main(void)
{

	struct funds one = { //一基金

		"CBB bank",
		100.00,
		"ABC bank",
		88.00

	};

	printf("%.2f\n", sum(one.bankfund, one.savefund));

	return 0;
}