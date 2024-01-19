#include <iostream>
using namespace std;

int summation(int n){
    if( n > 1 )
        return (summation(n-1) + n);
    else
        return n;
}

int main(){
    cout << summation(5);
    return 0;
}