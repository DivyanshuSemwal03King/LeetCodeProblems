#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int removeCoveredIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    int answer = 0;
    for(int i=0;i<intervals.size();i++){

        int a = intervals[i][0];
        int b = intervals[i][1];
         bool checked = false;
        for(int j = 0; j < intervals.size(); j++){

            if(i==j) continue;
            
             int c = intervals[j][0];
             int d = intervals[j][1];
               
          if (c <= a && b <= d){
                checked = true;
                break;
             }

             

        }
        if(!checked){
                answer++;
                
             }

    }
    return answer;
}