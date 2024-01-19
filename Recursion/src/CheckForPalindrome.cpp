# include <iostream>
using namespace std;

bool palindromChecker(string word, int ci){
    if ( ci < word.length()/2 - 1 ){
        if(!palindromChecker(word, ci+1)){
            return false;
        }
    }

    if(word[ci] == word[word.length() - ci - 1])
        return true;
    else
        return false;

}

int main(){
    string word  = "teaet";
    (palindromChecker(word, 0)) ? cout << "True" : cout << "False";
    return 0;
}