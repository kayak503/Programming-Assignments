//The date June 10, 1960 is special because when we write it in the following format, the
// month times the day equals the year.

#include <iostream>
#include <iomanip>
#include <list>
#include <string>

using namespace std;

 
 int main()
{
    float mass;

    cout << "enter the objects mass : ";
    cin >> mass; 

    float Weight = mass * 9.8;

    if(Weight > 1000){
        cout << "This object exceeds 1000 newtons! it is too heavy";
    }
    if (Weight < 10 ){
         cout << "This object is under 10 newtons! it is too light.";
    }
    cout << endl << "Object Weight: " << Weight << " newtons" ;
    
}
