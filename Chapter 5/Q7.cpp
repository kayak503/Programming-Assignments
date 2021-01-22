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
    
    int days;
    cout << "How many days of work?  " ;
    cin >> days;
    if (days < 1){
        main();
    } 


    double money = 0.01;
    for(int i=1; i < days+1; i++){
        cout << "Day " << setw(4) << left << i << "   Money Made : $" <<  setw(2) << left << setprecision(2) << fixed << money << endl;
        money *=2;

    }
    
}
