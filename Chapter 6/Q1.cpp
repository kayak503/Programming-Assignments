// Write a program that asks the user for a positive integer value. The program should use a loop
//to get the sum of all the integers from 1 up to the number entered. For example, if the user
//enters 50, the loop will find the sum of 1, 2, 3, 4, ... 50.

#include <iostream>
#include <iomanip>
#include <list>
#include <string>

using namespace std;

 float calculateRetail(float cost, float markup){
    return cost*(1+markup);
}


int main()
{
    float num1, num2;

    cout << "enter a products cost and mark up % [30.56] [.7]  :";
    cin >> num1 >> num2;
    if (num1 <= 0 || num2 <=0){
        cout << "All numbers must be greater than 0" << endl;
        main();
        }
    
    cout << "Retail price :" << calculateRetail(num1,num2) ;
}
