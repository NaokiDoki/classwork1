#include<stdio.h>
#define pi 3.14

int main(){
	float r, h, vol;
	printf("enter the radius of the cylinder: ");
	scanf("%f", &r);
	printf("enter the height of the cylinder: ");
	scanf("%f", &h);
	vol = pi * r * r * h;
	printf("The volume of the Cylinder is %f", vol);
	return 0;
}
