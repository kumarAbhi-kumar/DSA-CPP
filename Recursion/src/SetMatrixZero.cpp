#include <iostream>
#include <vector>
using namespace std;

void setMatrixZero(vector<vector<int>>& matrix){
    int col0 = matrix[0][0];
    for (int row = 0; row < matrix.size(); ++row){
        for (int col = 0; col < matrix[row].size(); ++col){
            if (matrix[row][col] == 0){
                if(col == 0){
                    // * Corresponding Extra created Column
                    col0 = 0;
                    // * Correspondign Row
                    matrix[row][0] = 0;
                }
                else{
                    // * Corresponding Column
                    matrix[0][col] = 0;
                    // * Correspoinding Row
                    matrix[row][0] = 0;
                }
            }
        }
    }

    for(int row = 1; row < matrix.size(); ++row){
        for(int col = 1; col < matrix[row].size(); ++col){
            if(matrix[row][0] == 0 || matrix[0][col] == 0 ){
                matrix[row][col] = 0;
            }
        }
    }

    if(matrix[0][0] == 0){
        for(int col = 1; col <= matrix[0].size(); ++col){
            if(matrix[0][col] == 0) continue;
            else matrix[0][col] = 0;
        }
    }

    /** //* Replacement for Above
        for (col = 1; col < matrix[0].size(); ++col){
            if(matrix[0][col] == 0) continue;
            else if(matrix[0][0] == 0) matrix[0][col] = 0;
        }
    */
    if(col0 == 0){
        for(int row = 0; row < matrix.size(); ++row){
            if(matrix[row][0] == 0) continue;
            else matrix[row][0] = 0; 
        }
    }
    
}

int main(){
    vector<vector<int>> matrix = {
        {0, 1, 2, 0},
        {3, 4, 5, 2},
        {1, 3, 1, 5}
    };

    for (const auto &row : matrix){
        for (auto elemensts : row){
            cout << elemensts << " ";
        }
        cout << endl;
    }
    cout << endl;

    setMatrixZero(matrix);

    for (const auto &row : matrix){
        for (auto elemensts : row){
            cout << elemensts << " ";
        }
        cout << endl;
    }
}