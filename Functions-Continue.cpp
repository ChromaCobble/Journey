#include <iostream>

int getValueFromUser()
{
    int input{ };
    std::cout << "Enter an integer: \n";
    std::cin >> input; 
    
    return input; //Returns the user input to the caller.

}

void calcValue(int x, int y) 
{

 std::cout << "Sum of " << x << " and " << y << " is " << x + y << '\n';

 std::cout << x << " multiplied by " << y << " equals: " << x * y << '\n';
 
 
}

int doubleInteger(int x)
{

    return x * 2;

}

int main()
{

    int num0{ getValueFromUser() }; //Calls input function and assigns it.
    int num1{ getValueFromUser() };

    calcValue(num0,num1);
    std::cout << "Doubled " << num0 << " is: " << doubleInteger(num0) << '\n';
    std::cout << "Doubled " << num0 << " is: " << doubleInteger(num1) << '\n';
    

    return 0;

}

//ChromaCobble 13.07.22