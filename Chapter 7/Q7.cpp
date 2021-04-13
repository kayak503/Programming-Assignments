
#include <string>
#include <iostream>
#include<array>
#include <fstream>
using namespace std;

float AVGNum(float numArray[], int len ){
    float avg = 0;
    for (int i = 0; i < len; i++)
    {
        avg = avg + numArray[i];
    }
    return avg/len;
}
float low(float numArray[], int len){
     float returnfloat = numArray[0]; 
    for (int i = 0; i < len; i++)
    {
        if (numArray[i] < returnfloat){
            returnfloat = numArray[i];
        } 
    }
    return returnfloat; 
}
float high(float numArray[], int len){

     float returnfloat = numArray[0]; 
    for (int i = 0; i < len; i++)
    {
        if (numArray[i] > returnfloat){
            returnfloat = numArray[i];
        }  
    }
    return returnfloat; 
}

int GetLen(string fileName){
    ifstream file(fileName);
    float x;
    int lines = 0;
     while (file >> x )
    {
    lines++;
    }
    return lines;
}


int main()
{
    // file read content 
    string fileName = "Numbers.txt";
    float *Array = new float[GetLen(fileName)];
   
    ifstream file(fileName);
    float line; 
    int pos = 0;
    while (file >> line )
    {
    Array[pos] = line;
    pos++;
    }

    float AVG = AVGNum(Array, pos);
    float LOW = low(Array, pos);
    float High = high(Array, pos);
    
    cout << "Array Length : " << pos << endl
    << "Highest Number : " << High << endl
    << "Lowest Number : " << LOW << endl
    << "AVG : " << AVG << endl;
    

}
