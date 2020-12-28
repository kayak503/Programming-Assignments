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
            if (num[i] != '0' && desPass == true){
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
    float totalSales = 8.6;
    float eastCostSales =  totalSales* .58;

    string line1 = "---------------------------------";
    string line2 = " Total Sales: {} million";
    string line3 = " East Coast sale: {} million";
    string line4 = "---------------------------------";
    
    cout << line1 << endl << format(line2, vector<float>{totalSales})<< endl << format(line3, vector<float>{eastCostSales})<< endl << line4;


}
