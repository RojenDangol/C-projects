#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main(){

    int arr[] = {3, 4, 1, 12, 44, 23};
    // sort(arr, arr +6); // Default sort in ascending order
    sort(arr, arr +6, greater<int>()); // Sort in descending order using function object
    for(int i=0 ; i < 6; i++){
        cout << arr[i] << " ";
    }
    return 0; 
}