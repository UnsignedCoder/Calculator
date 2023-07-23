#include <iostream>

double getvalues(double& value1, double& value2);

double addition(double& value1, double& value2);

double subtraction(double& value1, double& value2);

double multipliction(double& value1, double& value2);

double division(double& value1, double& value2);

void printcalculation(double& value1, double& value2);

int main() {
	double value1, value2;
	getvalues(value1, value2);
	printcalculation(value1, value2);
	std::system("pause");
	return 0;
}