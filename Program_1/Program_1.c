/*
 * CALCULATE SURFACE AREA AND VOLUME OF A SPHERE
 *
 * Author: Divyanshu Dhruw
 * Email: divyanshudhruwcsit@gmail.com
 * Date: 04 May 2018
 *
 * @ A very basic program for teaching coding
 * @program prompts for the radius of the sphere
 * @returns volume and surface area in separate lines
 */
#include<stdio.h>

#define PI 3.14159265

int main(void){
	float radius=0, volume=0, surfaceArea = 0;
	printf("Enter the radius of the Sphere in centimeters: ");
	scanf("%f", &radius);

	volume = (4 * PI * radius * radius * radius ) / 3;
	surfaceArea = ( 4 * PI * radius * radius );

	printf("Thank You,\nThe volume of the Sphere is : %f\nThe surface area of the Sphere is: %f\n", volume, surfaceArea);
}
