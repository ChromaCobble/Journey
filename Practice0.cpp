#include <iostream>

int outFcnInput(int x)
{
    
    std::cout << "The value entered is: " << x << '\n';

    return x;

}

int getUserInput()
{
    int x{ };

    std::cout << "Enter an integer: " << '\n';
    std::cin >> x; 
    
    return x;

}

int main()
{
    int num0{ getUserInput() };

    outFcnInput(num0);

    return 0;

}
