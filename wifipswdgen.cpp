#include<iostream>
#include<string>
#include<algorithm>
#include<random>

using namespace std;

int main(){
    string uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string lowercase = "abcdefghijklmnopqrstuvwxyz";
    string digits = "0123456789";
    string symbols = "!@#$%^&*()-_=+[]{}<>?";

    string allChars = uppercase + lowercase + digits + symbols;
    
    cout<<"Wifi Password Generator";
    int length;
    cout << "Enter password length: ";
    cin >> length;
    if (length < 8 || length > 32) {
        cout << "Password length should be between 8 and 32." << endl;
        return 1;
    }
    return 0;
}