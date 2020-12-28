#include <iostream>
#include <iomanip>
#include <list>
#include <string>

using namespace std;


 
 int main()
{
    float PalletWeigh;
    float WidgetWeigh = 12.5;
    float totalWeigh;
    float totalWidgets;

    cout << "How much dose the pallet weigh? (LB) :";
    cin >> PalletWeigh;
    cout << "What is the total weight? (LB) :";
    cin >> totalWeigh;

    totalWidgets = (totalWeigh - PalletWeigh)/ WidgetWeigh;

    cout << "there are " << totalWidgets << " widgets on a pallet ";

}
