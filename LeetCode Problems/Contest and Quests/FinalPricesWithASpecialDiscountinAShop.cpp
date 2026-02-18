#include<iostream>
#include<vector>
using namespace std;

vector<int> finalPrices(vector<int>& prices) {
    int n = prices.size();  
    vector<int> answer(n);
    for (int i = 0; i < n; i++) {
         answer[i]=prices[i];
     for(int j=i+1;j<n;j++){
            if(prices[j]<=prices[i]){
            answer[i]=prices[i]-prices[j];
            break;
            }
    
           
            
        }
    }
      
        return answer;
    }

int main(){

    vector<int> prices = {8,4,6,2,3};
    vector<int> result = finalPrices(prices);
    cout << "Final Prices: ";
    for(int price : result){
        cout << price << " ";
    }
    cout << endl;
    return 0;
}