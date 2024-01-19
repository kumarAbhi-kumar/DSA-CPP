#include <iostream>
using namespace std;

int checkPaildrome(int *arr, int sizeOfArray){
    int flag = 0;
    // * if flag changes anytime it means theres a number that's not prime
    int m, r, rev = 0;
    // * r => remainder, rev => reverse of the number
    for(int i = 0; i < sizeOfArray; i++){
        // * Outer for loop for iteration within the array
        m = arr[i];
        // * Taking a copy of the number
        while(m >= 1){
            r = m % 10;
            rev = rev * 10 + r;
            m /= 10;
        }

        // * Checking for palidrome
        if(rev != arr[i]){ // * 203 =! 302
            // * if not then updaing the flag and breaking the loop
            flag = 1;
            break;
        }

        // * Resetting the necessary variables
        rev = 0;
    }

    if (flag == 0)
        return 1;
    else
        return 0;
}

int main(){
    int arr[5] = {121, 302, 232, 505, 707};
    cout << checkPaildrome(arr, 5);
}