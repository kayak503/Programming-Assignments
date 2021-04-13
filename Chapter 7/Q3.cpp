#include <iostream>
#include <iomanip>
#include <list>
#include <string>

using namespace std;



int main()
{
    int avg = 0;
    
    string names[5] = {"Mild", "Medium","Sweet","Hot","Zesty"};
    int data[5];
    int highest = 0;
    int lowest = 0;
    int len = sizeof(data)/sizeof(data[0]);
    for (int i = 0; i < len; i++)
    // a linked list would be better in this situation since inserts and in the middle of the array and sequential reads are not the big calc  
    {
        int x;
        cout << "How many jars of " << names[i] << " were sold this year?";
        cin >> x;

        if (x < 0){ 
            i--;
             cout << "ERROR: Can not be negative value";
        } 
        else{
            data[i] = x;
            if (i != 0){
                if(data[lowest] > x) {
                    lowest = i;
                    }
                if(data[highest] < x) {
                    highest =i;
                    }
            }
            avg = avg + x;
        }
    }

    for (int i = 0; i < len; i++)
    {
        cout << names[i] <<" : " << data[i] << endl;
    }
    

    cout <<"total sales : " << avg << endl <<"highest selling : " << names[highest] << endl <<"lowest selling: " << names[lowest] << endl;
        
    
    

}
