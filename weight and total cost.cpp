#include <stdio.h>
int main()
{
	double wi1, ci1, wi2, ci2, result;
	printf("weight - item1:15");
	scanf("%lf" , &wi1);
	printf("No. of item2: ");
	scanf("%lf", &wi2);
	printf("Weight - Item2: ");
	scanf("%lf , &wi2");
	printf("No. of item2: ");
	scanf("%lf", &ci2);
	result = ((wi1 * ci1) + (wi2 * ci2)) / (ci1 + ci2);
	printf("Average Value = %f\n", result);
	return (0);
}
