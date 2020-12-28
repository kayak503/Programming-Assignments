#include <iostream>
#include <string>
using namespace std;

int main()
{
    int length = 5;
    int width = 7;
    int area = length*width;
    int perimiter = length*2 + width*2;

    string msg = "The area and perimiter of a rectangle that has the width of " + to_string(width) + " and the length of " + to_string(length) + " is " + to_string(area) + ", " + to_string(perimiter);

    
    cout << msg;

}