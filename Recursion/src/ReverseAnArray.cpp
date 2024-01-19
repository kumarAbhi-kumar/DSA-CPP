#include <iostream>
using namespace std;

void reverseArray(int *a, int sp, int ep){
    if(sp < ep){
        swap(a[sp], a[ep]);
        sp++;
        ep--;
        reverseArray(a, sp, ep);
    }
    else
        return;
}

int main(){
    int arr[5] = {0,1,2,3,4};
    reverseArray(arr, 0, 4);
    for(auto i : arr){
        cout << i << " ";
    }
}