#include <iostream>
#include <vector>
using namespace std;

void printSequenceSum(int currentIndex, int sum, vector<int> &arr, int n, vector<int> &ds){
    if (currentIndex > n || sum < 0){
        return;
    }

    if ( sum == 0 ){
        cout << "{";
        for (auto i : ds){
            cout << i <<", ";
        }
        cout << "}" << endl;
        return;
    }

    ds.push_back(arr[currentIndex]);
    printSequenceSum(currentIndex, sum - arr[currentIndex], arr, n, ds);

    ds.pop_back();
    printSequenceSum(currentIndex + 1, sum, arr, n, ds);

}

int main(){
    vector<int> ds;
    vector<int> arr = {2, 3, 6, 7};
    printSequenceSum(0, 18, arr, arr.size() - 1, ds);
    return 0;
}