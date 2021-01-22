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
    int num1;
    float num2;

    cout << "enter a positive integer :";
    cin >> num1;
    if (num1 < 1){
        main();
        }
    num2 = (num1+1) * (num1/2);
    cout << "The sum of numbers befor "<< num1 << " is " << num2;
    
    // with loop 
    /*
    num2 = 0;
    for(int i=0; i < num1+1; i++){
       num2 =+ i; 
    }
    */
}
