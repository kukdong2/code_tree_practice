#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string a = "apple";
    string b = "banana";
    string c = "grape";
    string d = "bluberry";
    string e = "orange";

    char word;
    cin >> word;
    int count = 0;
    string array[5] = { a,b,c,d,e };
    
    for (string k : array) {
        if (k.find(word) != string::npos) {
            cout << k << endl;
            count++;
        }
    }
    cout << count;
    return 0;
}