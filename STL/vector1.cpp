#include <iostream>
#include <vector>

using namespace std;

template <class T>
void display(vector<T> &v){
    cout << "Displaying vector elements: " << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
        // cout << v.at(i) << " "; // Alternative way to access elements
    }
    cout << endl;
}

int main(){
    // Ways to create a vector
    vector<int> vec1; 
    int element, size=5;
    // cout << "Enter the size of the vector: ";
    // cin >> size;
    // for(int i=0; i< size; i++){
    //     cout << "Enter an element to add to the vector: ";
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back(); // Remove the last element
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // // vec1.insert(iter+1, 55);
    // vec1.insert(iter+1,5 , 55);
    // display(vec1);
    vector<char> vec2(4); // 4 element char vector initialized with default values (0 for char)
    vector<char> vec3(vec2); // 4 element char vector initialized with vec2
    vector<int> vec4(5, 10); // 5 element int vector initialized with 10

    display(vec4);
   

    return 0;
}