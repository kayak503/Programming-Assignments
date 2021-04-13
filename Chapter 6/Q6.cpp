// Write a program that asks the user for a positive integer value. The program should use a loop
//to get the sum of all the integers from 1 up to the number entered. For example, if the user
//enters 50, the loop will find the sum of 1, 2, 3, 4, ... 50.

#include <iostream>
#include <iomanip>
#include <list>
#include <string>
#include <map>

using namespace std;


double celsius(double f){
    return ((.55555555555555)*(f-32));
}

int main(){
    float i,v;

    for (int i = 0; i < 20; i++){
        cout << "At " << i <<" degrees Fahrenheit, The temperature for Celsius would be "  << celsius(i) << endl ;
    }
    
}



