#include <iostream>

double getvalues(double& value1, double& value2) {
	std::cout << "Enter first value: ";
	std::cin >> value1;
	std::cout << "Enter second value: ";
	std::cin >> value2;
	return value1, value2;
	}

double addition(double& value1, double& value2) {
	return value1 + value2;
}

double subtraction(double& value1, double& value2) {
	return value1 - value2;
}

double multipliction(double& value1, double& value2) {
	return value1 * value2;
}

double division(double& value1, double& value2) {
	if (value2 == 0) {
		throw std::runtime_error("Error: cannot divide by zero");
	}
	return value1 / value2;
}

void printcalculation(double& value1, double& value2) {
	std::cout << "Addition = " << value1 << " + " << value2 << " = " << addition(value1, value2) << std::endl;
	std::cout << "Subtraction = " << value1 << " - " << value2 << " = " << subtraction(value1, value2) << std::endl;
	std::cout << "Multiplication = " << value1 << " x " << value2 << " = " << multipliction(value1, value2) << std::endl;
	try
	{
		std::cout << "Division = " << value1 << " / " << value2 << " = " << division(value1, value2) << std::endl;
	}
	catch (const std::exception& error)
	{
		std::cout << error.what() << std::endl;
	}
}