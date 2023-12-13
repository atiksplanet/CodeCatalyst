//
//  867. Transpose Matrix.cpp
//  SymbioteSyntax
//
//  Created by Atikul Gazi on 11/12/23.
//

#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> result;
        result.resize(matrix.front().size());
        for (int r = 0; r < matrix.size(); r++) {
            for (int c = 0; c < matrix[r].size(); c++) {
                result[c].push_back(matrix[r][c]);
            }
        }
        return result;
    }
};

int main() {
    cout << "Hello, 867. Transpose Matrix.cpp!\n";
    
    Solution sl;
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    
    for (int r = 0; r < matrix.size(); r++) {
        for (int c = 0; c < matrix[r].size(); c++) {
            cout << matrix[r][c] << " ";
        }
        cout << endl;
    }
    
    auto result = sl.transpose(matrix);
    
    for (int r = 0; r < result.size(); r++) {
        for (int c = 0; c < result[r].size(); c++) {
            cout << "[" << result[r][c] << "] ";
        }
        cout << "|" << endl;
    }
    
    return 0;
}
