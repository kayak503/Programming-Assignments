//The date June 10, 1960 is special because when we write it in the following format, the
// month times the day equals the year.

#include <iostream>
#include <iomanip>
#include <list>
#include <string>

using namespace std;

 
 int main()
{
    int month, day, year; 

    cout << "enter A date in the folowing format [MM] [DD] [YYYY] : ";
    cin >> month >> day >> year;
    if ((0 < month < 12) && (0 < day < 31) && (year > 1000)){
        
        year = year % 100 ;
         if (month == 6 && day == 10 && year == 60){
            cout << "the date 6/10/60 is magic.";
        }
        else
        {
            cout << "the date "<< month << "/" << day << "/" << year << " is not magic.";
        }
        
    }
    else
    {
        cout << "Please use the directed format ie [01] [25] [1955]" << endl;
        main();
        




    }

    
    
}
