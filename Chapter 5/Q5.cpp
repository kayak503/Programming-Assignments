// Write a program that asks the user for a positive integer value. The program should use a loop
//to get the sum of all the integers from 1 up to the number entered. For example, if the user
//enters 50, the loop will find the sum of 1, 2, 3, 4, ... 50.

#include <iostream>
#include <iomanip>
#include <list>
#include <string>

using namespace std;

 
 int main()
{
    
    
    cout << setw(5) << "Year " << setw(10) <<"Membership Cost" << endl;
    float levels = 2500;
    for(int year=2021; year < 2027; year++){
        cout << setw(4) << year << setw(10) << levels <<"$" << endl;
        levels += levels*0.04;
    }
    
}
