//Calculate sum, difference, product, division of two user defined floating point values

#include<stdio.h>

int main(){
	float a,b,sum,diff,pro,div;
	printf("Enter any two numbers: ");
	scanf("%f %f", &a, &b);
	sum = a + b;
	diff = a - b;
	pro = a * b;
	div = a / b;
	printf("The sum of the numbers is %f\nDifference is %f\nProduct is %f\n Division is %f", sum, diff, pro, div);
	return 0;
}
