//Write a program that asks the user to enter the month (letting the user enter an integer in the range of
//1 through 12) and the year. The program should then display the number of days in that month. Use the
//following criteria to identify leap years:
//1. Determine whether the year is divisible by 100. If it is, then it is a leap year if and only if it is
//divisible by 400. For example, 2000 is a leap year but 2100 is not.
//2. If the year is not divisible by 100, then it is a leap year if and if only it is divisible by 4. For
//example, 2008 is a leap year but 2009 is not.

#include <iostream>
#include <iomanip>
#include <list>
#include <string>

using namespace std;

 
 int main()
{
    int month, year; 

    cout << "enter A Month and Year in the folowing format [MM] [YYYY] : ";
    cin >> month >> year;
    if ( (0 > month > 12) ||  (year < 1000)){
        cout << "Please use the directed format ie [7] [1955] : ";
        main();
    }
    else
    {
        switch (month)
        {
        case 2:
            if ((year % 100) == 0) {
                if (year % 400 == 0){ cout << "29 days are in this month ";}
                else
                {
                    cout << "28 days are in this month ";
                }
                
            }
            else
            {
                if(year % 4 == 0){ cout << "29 days are in this month ";}
                else
                {
                    cout << "28 days are in this month ";
                }
            }
            
            break;
            
        case 1:
            cout << "31 days are in this month ";
            break;
        case 3:
            cout << "31 days are in this month ";
            break;
        case 4:
            cout << "30 days are in this month ";
            break;
        case 5:
            cout << "31 days are in this month ";
            break;
        case 6:
            cout << "30 days are in this month ";
            break;
        case 7:
            cout << "31 days are in this month ";
            break;
        case 8:
            cout << "31 days are in this month ";
            break;
        case 9:
            cout << "30 days are in this month ";
            break;
        case 10:
            cout << "31 days are in this month ";
            break;
        case 11:
            cout << "30 days are in this month ";
            break;
        case 12:
            cout << "31 days are in this month ";
            break;
        
        


        default:
            break;
        }
        




    }

    
    
}
