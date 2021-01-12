// Write a program that asks the user to enter two numbers. The program should use the
// conditional operator to determine which number is the smaller and which is the larger.

#include <iostream>
#include <iomanip>
#include <list>
#include <string>

using namespace std;

 
 int main()
{
    float num1, num2;

    cout << "enter two numbers :";
    cin >> num1 >> num2; 
    if(num1 > num2){
        cout << num1 << " is larger then "<< num2 ;
    }
    else
    {
        cout << num2 << " is larger or equal to "<< num1 ;
    }
    
}
