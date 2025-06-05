#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ofstream out;
    out.open("sample.txt"); // opening the file for writing
    out << "This is me.\n";
    out << "This is me also.";
    out.close();

    ifstream in; // opening the file for reading
    string s1,s2;
    in.open("sample.txt");
    // in >> s1 >> s2;
    // cout << s1 << s2;
    while(in.eof() == 0){
        getline(in, s1);
        cout << s1 << endl;
    }
    in.close();

    return 0;
}