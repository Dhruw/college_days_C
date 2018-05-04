/*
 * IDENTIFY THE TYPE OF TRIANGLE
 *
 * Author: Divyanshu Dhruw
 * Email: divyanshudhruwcsit@gmail.com
 * Date: 04 May 2018
 *
 * @ A very basic program for teaching coding
 * @program prompts for three sides of triangle
 * @returns the result if triangle is equilateral, isoceles or scalene 
 */

#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int sideA, sideB, sideC;

	printf("Enter the length of three sides of triangle : \n");

	printf("Side A: ");
	scanf("%d", &sideA);

	printf("Side B: ");
	scanf("%d", &sideB);

	printf("Side C: ");
	scanf("%d", &sideC);

	if( (sideA + sideB < sideC) || (sideB + sideC < sideA ) || ( sideC + sideA < sideB) )
	{
		printf("It is not a triangle");
		exit(0);
	}

	if( sideA == sideB && sideB == sideC )
		printf("The triangle is an Equilateral Triangle\n");
	else if( (sideA == sideB || sideB == sideC || sideC == sideA ) && ( sideA != sideB || sideB != sideC || sideC != sideA ) )
		printf("The triangle is an Isoceles Triangle\n");
	else
		printf("This is a scalene triangle\n");


	return 0;
}
