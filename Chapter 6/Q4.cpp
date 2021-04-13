// Write a program that asks the user for a positive integer value. The program should use a loop
//to get the sum of all the integers from 1 up to the number entered. For example, if the user
//enters 50, the loop will find the sum of 1, 2, 3, 4, ... 50.

#include <iostream>
#include <iomanip>
#include <list>
#include <string>
#include <map>

using namespace std;

const float G =9.8;

float fallingDistance(float time){
    return .5*(G*(time*time));
}

int main(){
    for (int i = 1; i < 11; i++){
        cout << "At " << i <<" second(s), an object would have fallen "  << fallingDistance(i) << "m." << endl ;
    }
    
}



