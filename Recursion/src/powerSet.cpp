#include <iostream>
#include <cmath>
using namespace std;

void printSubsets(int *arr, int size){
    // * Power Set 
    // * -> a. Calculate number of subsets present in the set (2^n)
    // * -> b. As per the set nth bit include or exclude the elements from the array

    // int numOfElements = 2 ** size; //! works in C++ 20 or later
    int numOfElements = pow(2, size);

    for (int i = 0; i < numOfElements; i++){
        // * Loop traverses from 0 to (2^n - 1)
        cout << "[";
        for(int j = 0; j < size; j++){
            // * Loop for traverseing every element of the array and
            // * and as per the set / not-set nth bit elements will be choosen to form the subsets.
            if( (i & (1<<j)) != 0){
                cout << arr[j] << ",";
            }
        }
        cout << "]" << endl;
    } 
}

int main() {
    int arr[3] = {3, 1, 2};
    printSubsets(arr, 3);
    return 0;
}