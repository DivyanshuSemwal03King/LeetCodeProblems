#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

string mapWordWeights(vector<string> &words, vector<int> &weights)
{
 
   string s;

    for(int i=0;i<words.size();i++){
      
          int sum = 0;
        for(char ch : words[i]){
           sum+= weights[ch-'a'];
           
        }

          int   mod=sum%26;
            
               s+=char('z' - mod);
    }

    return s;


  
}

int main(){
   
    vector<string> words = {"abcd","def","xyz"};
    vector<int> weigths = {5,3,12,14,1,2,3,2,10,6,6,9,7,8,7,10,8,9,6,9,9,8,3,7,7,2};
    string result = mapWordWeights(words,weigths);
    cout<<result<<endl;
    return 0;

}
