#include <iostream>
#include <string>
#include <vector>
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

int main()
{
    float purchase = 95.00;
    float stateTax =  .04;
    float countyTax =  .02;
    float tax = purchase * (stateTax + countyTax);


    string line1 = "-----------------";
    string line2 = "Sale: ${}";
    string line3 = "Tax: ${} ";
    string line4 = "total: ${} ";
    string line5 = "-----------------";
    
    cout << line1 << endl << format(line2, vector<float>{purchase})<< endl << format(line3, vector<float>{tax})<< endl << format(line4, vector<float>{purchase + tax})<< endl << line5;


}
