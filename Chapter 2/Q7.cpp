#include <iostream>
#include <string>
#include <vector>
#include <math.h> 
using namespace std;

string format(string notFormatedString, vector<string> fillers){
     for (string word : fillers){
        for (int i = 0; i < notFormatedString.length(); i++){
            if (notFormatedString[i] =='{' && notFormatedString.length() >= i+1 ){
                if (notFormatedString[i+1] =='}') {
                    notFormatedString = notFormatedString.substr(0, i) + word + notFormatedString.substr(i+2);
                    break;
                }
            }

        }
        
    }
    return notFormatedString;
}
string format(string notFormatedString, vector<int> numbers){
    vector<string> fillers;
    for (int num : numbers){
        fillers.push_back( to_string(num) );
    }
     for (string word : fillers){
        for (int i = 0; i < notFormatedString.length(); i++){
            if (notFormatedString[i] =='{' && notFormatedString.length() >= i+1 ){
                if (notFormatedString[i+1] =='}') {
                    notFormatedString = notFormatedString.substr(0, i) + word + notFormatedString.substr(i+2);
                    break;
                }
            }

        }
        
    }
    return notFormatedString;
}
string format(string notFormatedString, vector<float> numbers){
    vector<string> temp;
    vector<string> fillers;
    for (float num : numbers){
        temp.push_back( to_string(num) );
    }
    for (string num : temp){
        bool desPass = false;
        int lastSeenDigit = num.length();
        for (int i = 0; i < num.length(); i++){
            if (num[i] == '.'){
                desPass = true;
                lastSeenDigit = i-1;
            }
            else if (num[i] != '0' && desPass == true){
                lastSeenDigit = i;
            }

        }
        fillers.push_back(num.substr(0,lastSeenDigit+1));
    }
     for (string word : fillers){
        for (int i = 0; i < notFormatedString.length(); i++){
            if (notFormatedString[i] =='{' && notFormatedString.length() >= i+1 ){
                if (notFormatedString[i+1] =='}') {
                    notFormatedString = notFormatedString.substr(0, i) + word + notFormatedString.substr(i+2);
                    break;
                }
            }

        }
        
    }
    return notFormatedString;
}
string format(string notFormatedString, vector<double> numbers){
    vector<string> fillers;
    for (float num : numbers){
        fillers.push_back( to_string(num) );
    }
     for (string word : fillers){
        for (int i = 0; i < notFormatedString.length(); i++){
            if (notFormatedString[i] =='{' && notFormatedString.length() >= i+1 ){
                if (notFormatedString[i+1] =='}') {
                    notFormatedString = notFormatedString.substr(0, i) + word + notFormatedString.substr(i+2);
                    break;
                }
            }

        }
        
    }
    return notFormatedString;
}

float round(float num, int place){
    if (place != 0){
        return  (floor((num * pow(10, place)) + 0.5))* pow(10, place*-1);
    } 
    return floor(num + .5);
}

int main()
{
   int a ,b, c, d, e, sum;
   a = 28;
   b = 32;
   c = 37;
   d = 24;
   e = 33;
   sum = a + b + c + d + e;

   cout << format("the average of {}, {}, {}, {}, and {} is {}", vector<int>{a, b, c, d, e, sum/5});


    
    //cout << line1 << endl << format(line2, vector<float>{round(MPG)})<< endl << line3 ;
}
