//program to calculate area of a circle

#include <stdio.h>
int main()
{
	int r;
	float area;
	printf("Enter a Radius - ");
	scanf("%d", &r);
	
	area = 3.14*(r*r);
	
	printf("\nArea of the Circle is - %f", area);
	
	return(0);
}