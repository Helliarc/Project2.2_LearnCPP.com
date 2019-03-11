#include <iostream>

int getNum()
{
	std::cout << "Enter an integer: \n";
	int num{ 0 };
	std::cin >> num;
	return num;
}

int main()
{
	int num1{getNum()};
	
	//Print the value of num * 2
	std::cout << num1 << " doubled is: " << num1 * 2 << '\n';

	return 0;
}