#include <iostream> //Includes libraries required for printing and input.

int getValueFromUser() //Function defined to gather input from user.
{
	std::cout << "Please enter an integer :\n";
	int input{ }; //Initiates function.
	std::cin >> input; 
	return input; //Returns the value to be used inside main()

}

int main()
{

	int num{ getValueFromUser() }; //Calls user input function and assigns num the value returned.

	std::cout << "The value you have entered is: " << num << '\n'; 

	std::cout << "Double the value is: " << num * 2 << '\n';

	return 0; //Finished succesfully.

}