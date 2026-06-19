#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 int largestAltitude(vector<int>& gain) {
        int max_Altitude = 0;
        int n = gain.size();
        vector<int> prefix(n+1);
        prefix[0]=0;
        for(int i=1;i<n+1;i++){
            prefix[i]=prefix[i-1]+gain[i-1];
            max_Altitude =max(max_Altitude,prefix[i]);
        }

        return max_Altitude;
    }

    int main(){
        vector<int> gain = {-5,1,5,0,-7};
        cout<<largestAltitude(gain);

        return 0;
    }