#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    
    int price , max_price=0,profit=0 ;
    for(int i=0,j=1;j<prices.size();j++,i++){
        price =min(prices[i],prices[j]);
        if(price<prices[j]){
            profit=prices[j]-price;
            
            max_price+=profit;
        }
    
    }
    return max_price; //This is my first my First medium level problem and i have solved it by myself without any help, I am very happy and feeling Confident.

    }

    int main(){
          vector<int> prices={7,1,5,3,6,4};
        cout<<maxProfit(prices);
        return 0;
    }