// Write a program that asks the user for a positive integer value. The program should use a loop
//to get the sum of all the integers from 1 up to the number entered. For example, if the user
//enters 50, the loop will find the sum of 1, 2, 3, 4, ... 50.

#include <iostream>
#include <iomanip>
#include <list>
#include <string>
#include <map>

using namespace std;

map<int, string> divisionScale = { {0,"Northeast"}, 
                                    {1,"Southeast"},
                                    {2,"Northwest"},
                                    {3,"Southwest"}
};

double getSales(int division){
    double x;
    cout << "How much did " << divisionScale[division] << " make this quarter? :" << endl;
    cin >> x;
    if (x > 0){
        return x;
    }
    else
    {
        cout << "Sales have to be more than 0$"  << endl;
        return getSales(division);
    }
    
}

void findHighest(map<string, float> metrics ){
    string highest = ""; 
  for ( map<string, float>::iterator it = metrics.begin(); it != metrics.end(); it++){
      auto& key = it ->first;
      auto& value = it ->second;
          if (highest != ""){
          if(value > metrics[highest]){
              highest = key;
          }
      }
      else
      {
          highest = key;
      }
      
      


      }
      
    cout << "The division with the highest sales " << highest << ", brought in $" << metrics[highest];

}


int main()
{
    map<string, float> infoMap;
    infoMap[divisionScale[0]] = getSales(0);
    infoMap[divisionScale[1]] = getSales(1);
    infoMap[divisionScale[2]] = getSales(2);
    infoMap[divisionScale[3]] = getSales(3);
    findHighest(infoMap);


    
}
