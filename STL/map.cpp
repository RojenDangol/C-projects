#include <iostream>
#include <map>
#include <string>
using namespace std;

// Map is an associative array
int main(){
    map<string, int> marksMap;
    marksMap["Rojen"] = 98;
    marksMap["John"] = 60;
    marksMap["Rohit"] = 50;
    marksMap.insert({{"Rahul", 70},{"Alish", 78}});
    map<string, int> :: iterator itr;
    for(itr = marksMap.begin(); itr !=marksMap.end(); itr++){
        // cout << (*itr).first << " : " << (*itr).second << endl;
        cout << itr->first << " : " << itr->second << endl; // Accessing key and value using iterator
    }
    cout << "Size of map: " << marksMap.size() << endl; // Size of the map  
    cout << "Max Size of map: " << marksMap.max_size() << endl;  
    cout << "Empty value: " << marksMap.empty() << endl; 
    

    return 0;
}