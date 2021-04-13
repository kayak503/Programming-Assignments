// Write a program that asks the user for a positive integer value. The program should use a loop
//to get the sum of all the integers from 1 up to the number entered. For example, if the user
//enters 50, the loop will find the sum of 1, 2, 3, 4, ... 50.

#include <iostream>
#include <iomanip>
#include <list>
#include <string>
#include <map>
#include <ctime>

using namespace std;


bool coinToss(int seed){
    srand(seed);
    return (rand() % 2);

}

int main(){


srand((int)time(0));
	
    float limit;
    cout << "How many simulations?:" << endl;
    cin >> limit;

    int heads, tails = 0;

    for (int i = 0; i < limit; i++){
        if (coinToss(i*time(0)) ){
            cout << "Heads" << endl;
            heads++;
        }else{
            cout << "Tails" << endl;
             tails++;
        }
    }
    cout << "-- End Line Stats --" << endl;
    cout << "Heads count: " << heads << endl << "Tails count: " << tails << endl << "P of Heads: " << heads/limit << endl;
    
}



