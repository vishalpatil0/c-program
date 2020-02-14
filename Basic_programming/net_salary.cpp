#include <stdio.h>

int main() {

	float basic;
	float net_salary = 0;
	
	printf("Enter Basic Salary : ");
	scanf("%f",&basic);

	net_salary += basic;	
	net_salary += (basic * 10) / 100; //DA
	net_salary += (basic * 30) / 100; //hra
	net_salary += (basic * 20) / 100; //ma
	net_salary += (basic * 15) / 100; //ta

	printf("Net Salary is: %.02f\n",net_salary);
	
	return 0;
}
