#include <iostream>

int main()
{
	int num{ };
	int num2{ };

	std::cout << "Please enter an integer :\n";

	std::cin >> num;

	std::cout << "Please enter a second integer :\n";

	std::cin >> num2;


	std::cout << num << " + " << num2 << " is : " << num + num2 << '\n';

	std::cout << num << " - " << num2 << " is : " << num - num2 << '\n';

	return 0;	

	

}