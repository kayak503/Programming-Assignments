// Write a program that asks the user for a positive integer value. The program should use a loop
//to get the sum of all the integers from 1 up to the number entered. For example, if the user
//enters 50, the loop will find the sum of 1, 2, 3, 4, ... 50.

#include <iostream>
#include <iomanip>
#include <list>
#include <string>
#include <map>

using namespace std;


float kineticEnergy(float mass, float velocity){
    return .5*(mass*(velocity*velocity));
}

int main(){
    float i,v;

    cout << "enter your objects mass and velocity :" << endl ;
    cin >> i >> v;
    cout << "your objects kineticEnergy is " << kineticEnergy(i,v) << " newtons.";
    
}



