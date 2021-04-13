#include <iostream>
#include <iomanip>
#include <list>
#include <string>

using namespace std;



int main()
{
    
    int data[10];
    int len = sizeof(data)/sizeof(data[0]);
    for (int i = 0; i < len; i++)
    // a linked list would be better in this situation since inserts and in the middle of the array and sequential reads are not the big calc  
    {
        cout << endl << "Enter an intiger:";
        if(i == 0){
            cin >> data[i];
        }

        else{
            int x;
            cin >> x;

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
        
    cout<<"Your largest and smallest intergers respectfully, are " << data[len-1] << ", and " <<  data[0];

    
    

}
