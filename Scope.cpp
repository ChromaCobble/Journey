#include <iostream>

int getValueFromUser()
{

    int x{ }; //Initiates x in the scope of function.
              //Define variables as close to their first use as reasonable.
    
    std::cout << "Please enter an integer: \n";

    std::cin >> x;

    return x;

}

//Main function.
int main()
{



}

//ChromaCobble 15.07.22

/*

1 2
1 4
3 4
1 2

Answers for lesson 2.5 q1, Correct
*/