// Write a program that asks the user to enter a number within the range of 1 through
// 10. Use a switch statement to display the Roman numeral version of that number.

#include <iostream>
#include <iomanip>
#include <list>
#include <string>

using namespace std;

 
 int main()
{
    int x; 

    cout << "enter a intiger betwean 1-10  :";
    cin >> x;

    switch (x)
    {
    case 1:
        cout << x << " is I in Roman numerals " << endl;
        break;
    case 2:
        cout << x << " is II in Roman numerals " << endl;
        break;
    case 3:
        cout << x << " is III in Roman numerals " << endl;
        break;
    case 4:
        cout << x << " is IV in Roman numerals " << endl;
        break;
    case 5:
        cout << x << " is V in Roman numerals " << endl;
        break;
    case 6:
        cout << x << " is VI in Roman numerals " << endl;
        break;
    case 7:
        cout << x << " is VII in Roman numerals " << endl;
        break;
    case 8:
        cout << x << " is IIX in Roman numerals " << endl;
        break;
    case 9:
        cout << x << " is IX in Roman numerals " << endl;
        break;
    case 10:
        cout << x << " is X in Roman numerals " << endl;
        break;
        
    
    default:
        cout << x << " is not an intiger betwean 1-10 " << endl;
        main();
        break; 
    }
    
}
