#include<bits/stdc++.h>
using namespace std;

 void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> result(matrix.size(),vector<int>(matrix.size()));
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                result[j][matrix.size()-1-i]=matrix[i][j];
            }
        }
        matrix = result;
        
    }

    int main(){
        vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
        rotate(matrix);
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
    }