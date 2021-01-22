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
    
    
    cout << "-Year----Ocean Levels---------" << endl;
    float levels = 0;
    for(int year=2021; year < 2047; year++){
        cout << "-" << year <<"--- +" << setw(4) << levels <<" mm -------------" << endl;
        levels += 1.5;
    }
    
}
