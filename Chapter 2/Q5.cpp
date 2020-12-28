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
    float purchase =round (88.678,2);
    float tax = round((purchase * 0.0675), 2);
    float tip = round(((purchase + tax) * .2),2);
    float total = purchase + tip + tax;


    string line1 = "-----------------";
    string line2 = "Cost: ${}";
    string line3 = "Tax: ${} ";
    string line4 = "Tip: ${} ";
    string line5 = "total: ${} ";
    string line6 = "-----------------";
    
    cout << line1 << endl << format(line2, vector<float>{purchase})<< endl << format(line3, vector<float>{tax})<< endl << format(line4, vector<float>{tip})<< endl << format(line5, vector<float>{round(total,2)})<< endl << line6;
}
