#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

 int maxProfit(vector<int>& prices) {
       
    //  int profit,price=0 ;
    //  int Max_profit=0;
    //  for(int i =1 ; i<prices.size();i++){
       
    //     if(price<prices[i]){
    //         price=min(price,prices[i]);
    //         profit = prices[i];
         
    //      }
    //      if(prices[i]==1){
    //         price = 1;
           
    //      }
         
    //         Max_profit = max(profit ,Max_profit);
          
          
        
    //  }
    //  return (Max_profit-price);
    // Wrong Logic and Approch

    int min_price=prices[0];
    int max_profit=0;
    for(int i=1;i<prices.size();i++){
        min_price=min(min_price,prices[i]);

        int profit = prices[i] - min_price;
        max_profit = max(max_profit,profit);

    }

    return max_profit;   //This approch is given by chat Gpt not by me but i have understand the logic and code and i am able to write it by myself without any help of chat Gpt
    
    }

    int main(){
        vector<int> prices={7,1,5,3,6,4};
        maxProfit(prices);
        return 0;
    }
