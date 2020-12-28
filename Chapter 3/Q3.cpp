#include <iostream>
#include <iomanip>
using namespace std;


 
 int main()
{


  float A,B,C,D,E;
  
  cout << "Please input 5 test scores :99.9 74.3.... \n:";
  cin >> A >> B >> C >> D >> E;
  float x = (A+B+C+D+E)/5;
  cout.precision(1);
  cout.setf( std::ios::fixed, std:: ios::floatfield );
  cout << "The Average Test Score is :" << x << "%" ;

}
