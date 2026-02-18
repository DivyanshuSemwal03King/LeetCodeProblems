#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>

using namespace std;

int calPoints(vector<string>& Operations){
    stack<int> points ;
   for(string opr:Operations){

     if(opr=="C"){
        points.pop();
     }
    else if(opr=="D"){
        points.push(2*points.top());
     }
    else if(opr=="+"){
        int top1=points.top(); 
        points.pop();
        int top2=points.top();
        points.push(top1);            
        points.push(top1+top2);
     }
     else{
        points.push(stoi(opr));       
     }
   }
   int sum =0;
   while(!points.empty()){
    sum+=points.top();
    points.pop();
   }
    return sum;
}

int main(){
    vector<string> Operations = {"5","2","C","D","+"};
    cout<<calPoints(Operations);
    return 0;
}


