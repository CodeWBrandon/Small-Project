#include <stdio.h>

double Operator(double& x, double& y, double (*func)(double&, double&));
double Add(double& x, double& y);
double Multiply(double& x, double& y);
double Division(double& x, double& y);
double Subtract(double& x, double& y);

int main(void)
{
	double x = 0;
	double y = 0;
	char op;
	
	// Enter user Input
	printf("Enter X: ");
	scanf("%lf", &x); getchar();
	printf("Enter Y: ");
	scanf("%lf", &y); getchar();
	printf("Enter Operator +-*/ : ");
	scanf("%c", &op); getchar();
	
	// Calculate Based on the operator input 
	switch(op)
	{
		case '+':
			printf("Your value is: %lf", Operator(x, y, Add));
			break;
		case '-':
			printf("Your value is: %lf", Operator(x, y, Subtract));
			break;
		case '*':
			printf("Your value is: %lf", Operator(x, y, Multiply));
			break;
		case '/':
			printf("Your value is: %lf", Operator(x, y, Division));
			break;
	}
	
	return 0;
}

double Add(double& x, double& y)
{
	return x + y;
}

double Multiply(double& x, double& y)
{
	return x * y;
}

double Division(double& x, double& y)
{
	return x / y;
}

double Subtract(double& x, double& y)
{
	return x - y;
}

double Operator(double& x, double& y, double (*func)(double&, double&))
{
	return func(x, y);
}