#include <iostream>
#include <iomanip>
#include <list>
#include <string>

using namespace std;


int main()
{
    int avg = 0;
    
    float data[3][5];
    int highest[2] ={0,0};
    int lowest[2]  ={0,0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            float x;
            cout << "On day " << j+1 << " How many LBS of food did monkey "<< i+1 << " eat? :";
            cin >> x;

            if (x < 0){ 
                j--;
                cout << "ERROR: Can not be negative value";
            }
            else{
            data[i][j] = x;


            if(data[lowest[0]][lowest[1]] > x) {
                    lowest[0] = i;
                    lowest[1] = j;
                    }
                if(data[highest[0]][highest[1]] < x) {
                    highest[0] = i;
                    highest[1] = j;
                    }

                avg = avg + x;
            }
        }
    }


        
    

    cout <<"Ave Food : " << avg/15 << endl <<"Monkey "<< highest[0]+1 <<" ate the most food on day "<< highest[1]+1 << ", "<< data[highest[0]][highest[1]]  << " lbs" << endl
      <<"Monkey "<< lowest[0]+1 <<" ate the least food on day "<< lowest[1]+1 << ", "<< data[lowest[0]][lowest[1]]  << " lbs" << endl;
        
    
    

}
