#include <iostream>
#include <list>
using namespace std;


void display(list<int> &lst){
    list<int> :: iterator it;
    for(it = lst.begin(); it!=lst.end(); it++){
        cout << *it << " "; // Dereferencing the iterator to get the value
    }
    cout << endl;
}

int main(){
    list<int> list1; // Creating an empty list of integers
    list1.push_back(1); // Adding an element to the end of list1
    list1.push_back(5);
    list1.push_back(3);
    list1.push_back(6);
    list1.push_back(46);
    list1.push_back(22);
    display(list1); // Displaying the elements of list1

    // list1.pop_back(); // Removing the last element from list1
    // list1.pop_front();
    // list1.remove(5); // Removing the first occurrence of 5 from list1
    // display(list1); // Displaying the elements of list1 after pop_back
    
    list<int> list2(3); // Creating a list of 7 integers initialized to 0
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 22;
    iter++;
    *iter = 15;
    iter++;
    *iter = 18;
    iter++;

    display(list2); // Displaying the elements of list2
    list1.merge(list2); // Merging list2 into list1
    list1.sort(); // Sorting the merged list1
    cout << "list1 after merging: ";  
    display(list1); // Displaying the elements of list1 after merging

    
    return 0;
}