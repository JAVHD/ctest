/*
* @Author: bear
* @Date:   2018-12-06 08:38:14
* @Last Modified by:   bear
* @Last Modified time: 2018-12-06 09:09:45
*/

#include <stdio.h>


void add(double ar[], int n, double val) {


	for (int i = 0; i < n; ++i)
	{

		ar[i] += val;

	}
}


int main(void)
{
	double arr[3] = {1.0, 2.0, 3.0};

	add(arr, 3, 1.1);


	for (int i = 0; i < 3; ++i)
	{
		/* code */
		printf("%f\n", arr[i]);
	}

	return 0;
}