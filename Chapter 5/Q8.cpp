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
    float rainfall = 0;
    int years = 0;

    cout << "How many years? " ;
    cin >> years;
    if (years < 1){
        main();
    } 
    for(int i = 0; i < years; i++){

        for (int v = 0; v < 12; v++)
        {
            float x;
         cout << "how much rain (inches) for month " << v+1 << " of year "<< i+1 <<"? ";
         cin >> x;
         if (x < 0){
             cout << "rainfall can not be less then 0" << endl;
             i--;
         }
         else
         {
             rainfall += x;
         }
        }
    }

    cout << "After "<< years*12 << " months, an Average of " << rainfall/(years*12) << " inches fell per month and a total of " << rainfall << " fell over " << years << " year(s).";


    
}
