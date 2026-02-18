#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 bool canAttendMeetings(vector<vector<int>>& intervals) {
      
    sort(intervals.begin(), intervals.end());
  
    for(int i = 1; i < intervals.size(); i++){
        if(intervals[i-1][1] > intervals[i][0]){
            return false;  // overlapping
        }
    }
    return true;  // no overlapping
 }

    int main(){
        vector<vector<int>> intervals = {{0,8},{9,15}};
       bool result = canAttendMeetings(intervals);
         cout << (result ? "true" : "false") << endl;

        return 0;
    }
    //correct logic