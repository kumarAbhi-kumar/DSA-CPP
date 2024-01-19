#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    // * Declarign an empty vector
    vector<int> temp;

    int left = low;
    int right = mid + 1;
    
    // * Inserting the elements in the temporary vector
    while(left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // * Checking if any of the sub-array exacusted first then adding all the element from the second
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while( right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // * Now adding all the elements in the orignal array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high) {
    // * Defining Base Case
    if (low >= high) return;
    int mid = (low + high) / 2;

    // * Sorting the first half
    mergeSort(arr, low, mid);
    
    // * Sorting the second half
    mergeSort(arr, mid+1, high);

    merge(arr, low, mid, high);
}

int main(){
    vector<int> arr = {3, 1, 2, 4,1, 5, 2, 6, 4};
    mergeSort(arr, 0, arr.size() - 1);

    for(auto i : arr) {
        cout << i << " " ;
    }
}