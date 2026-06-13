#include<iostream>
#include<vector>
using namespace std;

void dfs(int start,vector<bool>& visited,vector<vector<int>>& isConnected){
    int v=isConnected.size();
    visited[start]=true;
    for(int k=0;k<v;k++){
        if(isConnected[start][k]==1&&!visited[k]){
            dfs(k,visited,isConnected);
        }
    }
}

int findCircleNum(vector<vector<int>>& isConnected) {
        int v = isConnected.size();

        vector<bool> visited(v,false);

        int numProvince = 0;

        for(int i=0;i<v;i++){
            if(!visited[i]){
                dfs(i,visited,isConnected);
            numProvince +=1;
            }
        }

        return numProvince;


    }