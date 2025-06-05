#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    // connecting our file with hout stream
    ofstream hout("sample.txt");

    // creating a name string and filling it with user input
    cout << "Enter your name:";
    string name;
    getline(cin, name);

    // writing the name to the file
    hout << "My name is " << name << endl;

    hout.close(); // closing the file

    ifstream hin("sample.txt"); // opening the file for reading
    string content;
    getline( hin, content ); // reading the content of the file
    cout << "Content of the file: " << content << endl;
    hin.close(); // closing the file after reading
    return 0;
}