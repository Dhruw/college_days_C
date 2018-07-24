/*
 * REVERSE A GIVEN INTEGER
 *	
 * Author: Divyanshu Dhruw
 * Email: divyanshudhruwcsit@gmail.com
 * Date: 24 July 2018
 *
 * @ A very basic program for teaching coding
 * @program prompts for an integer
 * @returns the reverse of the number
 */


#include<stdio.h>

int sum = 0;

int reverse(int num) {
	int unitPlace = num % 10;
	int fraction = num/ 10;
	int recursReturn;
	if( fraction > 0)
	{
		sum = sum * 10 + unitPlace;
		recursReturn = reverse( fraction );
	}
	else
		return sum * 10 + unitPlace;

	return recursReturn;

}

int main(void) 
{
	int num;
	printf("Enter an integer: ");
	scanf("%d", &num);

	printf("The reverse of the number is : %d\n", reverse(num));
	return 0;
}
