#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int numRescueBoats(vector<int> &people, int limit)
{
    sort(people.begin(),people.end());
    int i=0;
    int j=people.size()-1;
    int boat = 0;
    while(i<=j){
        // if(i==j){ boat+=1; return boat;}
        // else if(people[i]+people[j]<= limit){
        //     boat+=1;
        //     i++,j--;
        // }
        // else{
        //     if(people[i]>people[j]){
        //         if(people[i]<=limit){
        //             boat+=1;
        //             i++;
        //         }
        //     }
        //     else{
        //         if(people[j]<=limit){
        //             boat+=1;
        //             j--;
        //         }
        //     }
        // }

           if (people[i] + people[j] <= limit) {
            i++;   // lightest goes with heaviest
        }
        j--;       // heaviest always goes
        boat++; //More Optimized and cleaner code
    }
    return boat;
}

int main()
{
    vector<int> arr = {3, 2, 2, 1};
    int limit = 3;
    cout << numRescueBoats(arr, limit);
    return 0;
}