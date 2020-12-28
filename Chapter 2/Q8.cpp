#include <iostream>
#include <string>
#include <vector>
#include <math.h> 
#include <iomanip>
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
   double items[5] = {15.95, 24.95, 6.95, 12.95, 3.95};
   double total = 0;
    cout <<setw(9) << "--items--" << endl;

    for (double item: items){
        cout <<setw(7) << setprecision(4) << item << endl;
        total += item;
    }
    
    cout << "-subtotal-" << endl;
    cout <<setw(7) << total << endl;
    cout << "---tax---" << endl;
    cout <<setw(7)  << setprecision(3) << total*.07 << endl;
    cout << "--total--" << endl;
    cout <<setw(7) << setprecision(4) << total*.07+ total << endl;
    //cout << line1 << endl << format(line2, vector<float>{round(MPG)})<< endl << line3 ;
}
