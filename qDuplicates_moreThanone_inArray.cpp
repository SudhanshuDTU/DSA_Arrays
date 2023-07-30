#include<iostream>
using namespace std;

class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
      vector<int>ans;
      sort(arr,arr+n);
      
       for(int i=0;i<n-1;i++){
          if(arr[i]==arr[i+1]){
              ans.push_back(arr[i]);
          }
       }
       if(ans.size()==0){
             ans.push_back(-1);
       }
       
       return ans;
    }
};
