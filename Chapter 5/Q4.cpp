// Running on a particular treadmill you burn 3.6 calories per minute. Write a program that uses a
//loop to display the number of calories burned after 5, 10, 15, 20, 25, and 30 minutes.

#include <iostream>
#include <iomanip>
#include <list>
#include <string>

using namespace std;

 
 int main()
{
    float CALORIES = 3.6;

    for(int i=5 ; i < 35; i+=5){
        cout << "you will burn "<< i* CALORIES << " calories when you run for " << i << " minutes " << endl;
    }
    
}
