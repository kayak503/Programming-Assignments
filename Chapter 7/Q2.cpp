#include <iostream>
#include <iomanip>
#include <list>
#include <string>

using namespace std;



int main()
{
    double avg = 0;
    double data[12];
    int len = sizeof(data)/sizeof(data[0]);
    for (int i = 0; i < len; i++)
    // a linked list would be better in this situation since inserts and in the middle of the array and sequential reads are not the big calc  
    {
        cout  << "enter the total rainfall for month " << i+1 << ":";
        int x;
        cin >> x;
        if (x < 0)
        {
           i--;
            cout <<  "Rainfall cannot be a negative number ";
        }
        else
        {
            avg = avg + x;
            if(i == 0){
                data[i] = x;
            }

            else{
                int y = i-1;

                // cout << "Y BF While " << y << endl;

                while (x < data[y])
                {
                    y --;
                }
                
            // cout  << "Y AF While " << y << endl;

                if (x >= data[i-1]){
                    data[i] = x;
                }
                else{
                    for (int j = len-2; j > y; j--)
                    {
                        data[j+1] = data[j];
                    }
                    data[y+1] =x;
                }
            } 
        }
    }
        
    cout <<"Total : " << avg << endl <<"AVG : " << avg/12 << endl <<"lowest : " << data[0] << endl <<"highest : " << data[11] << endl;

    
    

}
