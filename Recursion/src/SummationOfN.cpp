#include <bits/stdc++.h>
using namespace std;

void summation(int i, int sum){
    //! base case
    if ( i < 1 ){
        cout << sum;
        return;
    }
    summation(--i, sum+i);
}

int main(){
    summation(5, 0);
    return 0;
}