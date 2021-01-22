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
    
    int MPH, travelHours;
    cout << "What is the speed of the vehicle in mph? " ;
    cin >> MPH;
    if (MPH < 1){
        main();
    } 
    cout << "How many hours has it traveled? " ;
    cin >> travelHours;
    if (travelHours < 2){
            main();
    } 

    cout << endl << "Hour Distance Traveled" << endl << "--------------------------------" << endl;
    
    for(int i=1; i < travelHours+1; i++){
        cout << setw(2) << left << i << "   " << setw(8) << left << i*MPH << endl;

    }
    
}
