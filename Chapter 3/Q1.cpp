//enter the number of gallons 
//the number of miles it canbe driven on a full tank.
//It should then display the number of miles that may be driven per gallon of gas
#include <iostream>

using namespace std;
 
 int main()
{
  bool maxMiles, maxGallons;

  cout << "what is your cars gas capacity in gallons? ";
  cin >> maxGallons;  
  cout << "how many miles can you drive on a full tank?";
  cin >> maxMiles;
  cout << "Your MPG is " << maxMiles/maxGallons;
}
