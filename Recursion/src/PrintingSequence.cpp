#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
using namespace std;

/*
    @param
    index -> current index
    ds -> will hold the subsequence being formed
    n -> size of the orignal array
*/
void printSequence(int index, vector<int> &ds, int arr[], int n){
    if (index >= n){
        // Print the subsequence
        cout << "{";
        for(auto i : ds){
            cout << "" << i << ",";
        }
        cout << "}" << endl;
        return;
    }

    // Add the element to the ds to form the subsequence
    ds.push_back(arr[index]);
    printSequence(index + 1, ds, arr, n);

    // Remove the element from the ds
    ds.pop_back();
    printSequence(index + 1, ds, arr, n);

}

int main(){
    vector<int> ds;
    int arr[3] = {3, 1, 2};
    printSequence(0, ds, arr, 3);
    
}
