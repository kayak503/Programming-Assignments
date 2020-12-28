#include <iostream>
#include <iomanip>
#include <list>
#include <string>

using namespace std;


 
 int main()
{
    list<string> Names; 
    float Amount = 0;
    bool Notdone = true;
    
    cout << "Average Rainfall \n this program will calculate the average Rainfall of inputted mouths. \n to start input the name of the month folowed by the rain fall amount [in cm] repeat this step until all data points are entered. \n when you are finished type Done and hit enter \n";

    while (Notdone)
    {
        string month; 
        float rainAmt; 

        cout << "Month Name: ";
        cin >> month ;
        if( month == "done" || month == "Done" || month == "DOne" || month == "DONe" || month == "DONE" || month == "donE" || month == "doOE" || month == "dONE"){
            Notdone = false;
            break;
        }
        cout << "Rain Amount: ";
        cin >> rainAmt;
        cout << "Month [" << month <<"] Added with [" << rainAmt << "] cm of rain";
        Names.push_back(month);
        Amount = Amount + rainAmt ;

    }
    
  
   Amount =  Amount/Names.size();

  string tex = "The average rainfall for " + Names.front();
  Names.pop_front();
  int k = Names.size() -1 ;
  for (int i = 0; i <k ; i++){
      tex = tex +", " + Names.front();
      Names.pop_front();
  }
  tex = tex + " and " + Names.front();

  

  cout.precision(1);
  cout.setf( std::ios::fixed, std:: ios::floatfield );
  cout << tex << " is " << Amount << " cm" ;

}
