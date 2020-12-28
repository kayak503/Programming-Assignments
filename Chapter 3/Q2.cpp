#include <iostream>
#include <iomanip>
using namespace std;


 
 int main()
{
  int ClassASeat = 15;
  int ClassBSeat = 12;
  int ClassCSteat = 9;

  int A,B,C;
  
  cout << "How many class A, B and C seats were sold? :[A] [B] [C] \n:";
  cin >> A >> B >> C;
  float x = (A*ClassASeat + B*ClassBSeat + C*ClassCSteat);
  cout.precision(2);
  cout.setf( std::ios::fixed, std:: ios::floatfield );
  cout << "Net Cash flow $" << x ;

}
