#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string fileName = "libri.txt";
    string input;

    ofstream outFile(fileName); // Create ofstream object for writing
    if (!outFile.is_open()) {
        cerr << "Error: Unable to open file for writing!" << endl;
        return 1;
    }

    getline(cin,input);
    cout << input << endl;
    return 0;
}