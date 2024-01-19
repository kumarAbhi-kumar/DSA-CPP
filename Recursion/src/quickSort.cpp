#include <iostream>
#include <vector>
using namespace std;

void qs(vector<int> &arr, int low, int high) {
    // * Base condition
    if (low >= high){
        return;
    }
    
    int pivot = arr[low];

    // * i looks for the greater value in the array forwards
    int i = low;

    // * j looks for the smaller value in the array backwards
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i < high) i++;
        while (arr[j] > pivot && j > low) j--;

        if(i < j){
            swap(arr[i], arr[j]);
        }
    }

    // * Now j crosses the i loop breaks and j is at the right full position of the pivot
    swap(arr[low], arr[j]);
    
    for(auto z : arr) {
        cout << z << " ";
    }
    cout << endl;

    qs(arr, low, j-1);
    qs(arr, j+1, high);

}

int main(){

    vector<int> arr = {6, 5, 4, 3, 2, 1};

    qs(arr, 0, 5);
    for(auto i : arr){
        cout << i << " ";
    }
}