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

    random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<> distribution(0, allChars.size() - 1);

    string password;

    // Ensure at least one character from each category
    password += uppercase[distribution(generator) % uppercase.size()];
    password += lowercase[distribution(generator) % lowercase.size()];
    password += digits[distribution(generator) % digits.size()];
    password += symbols[distribution(generator) % symbols.size()];

    // Fill the remaining characters
    while (password.length() < length) {
        password += allChars[distribution(generator)];
    }

    // Shuffle the password
    shuffle(password.begin(), password.end(), generator);

    cout << "\nGenerated Wi-Fi Password:\n";
    cout << password << endl;
    
    return 0;
}