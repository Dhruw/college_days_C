/*
 * SET UNION
 *	
 * Author: Divyanshu Dhruw
 * Email: divyanshudhruwcsit@gmail.com
 * Date: 26 July 2018
 *
 * @ A program to find out common elements between two arrays
 * @program prompts for 5 integers each for two arrays
 * @prints the numbers which are common in both arrays
 */


#include<stdio.h>

int main(void) {
	int arrayA[5];
	int arrayB[5];
	int arrayC[6];
	int ctr = 0;
	short int flag = 0;

	printf("Enter 5 number of Array A: \n");
	for(int i = 0; i < 5; i++)
		scanf("%d", &arrayA[i]);

	printf("Enter 5 number of Array B: \n");
	for(int i = 0; i < 5; i++)
		scanf("%d", &arrayB[i]);

	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			if( arrayA[i] == arrayB[j] )
			{
				arrayC[ctr++] = arrayA[i];
				break;
			}
		}
	}

	printf("The common elements are : \n");
	for(int i = 0; i < ctr; i++)
		printf("%d\n", arrayC[i]);
	
	return 0;
}