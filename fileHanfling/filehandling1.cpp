#include <iostream>
#include <fstream>

using namespace std;



int main(){
    string st = "Rojen Dangol. Hello, this is a sample text file.\n";
    string st2;;
    // opening file using constructor and writing to  it
    ofstream out("sample.txt"); //write operation
    out << st; // writing to the file

    // opening file using constructor and reading it
    // ifstream in("sample.txt"); // read operation
    // // in>>st2;
    // getline(in, st2);
    // cout << st2 << endl;
    return 0;
}