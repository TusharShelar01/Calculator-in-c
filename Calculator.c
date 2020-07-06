#include<stdio.h>

float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);

int main()
{
	int choice;
	float a, b, res;
	while (1)
	{
		printf("1.ADD \n");
		printf("2.SUBTRACT \n");
		printf("3.MULTIPLY \n");
		printf("4.DIVIDE \n");
		printf("5.QUIT \n");

		printf("Enter your choice : ");
		scanf("%d", &choice);

		if (choice >= 1 && choice <= 4)
		{
			printf("Enter 2 numbers :\n");
			scanf("%f%f", &a, &b);
		}
		switch (choice)
		{
		case 1: res = add(a, b);
			printf("Result is : %f \n", res);
			break;

		case 2: res = subtract(a, b);
			printf("Result is : %f \n", res);
			break;

		case 3: res = multiply(a, b);
			printf("Result is : %f \n", res);
			break;

		case 4: res = divide(a, b);
			printf("Result is : %f \n", res);
			break;

		case 5: exit(1);
		default: printf("Invalid choice \n");
		}
	}
	return 0;
}

float add(float a, float b)
{
	return a + b;
}
float subtract(float a, float b)
{
	return a - b;
}
float multiply(float a, float b)
{
	return a*b;
}
float divide(float a, float b)
{
	return a / b;
}