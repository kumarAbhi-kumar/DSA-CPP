#include <iostream>
using namespace std;

int fact(int n){ //! 
    // base case
    if(n > 1)
        return fact(n - 1) * n; 
    
    return n;
}