#include<iostream>
using namespace std;


class Solution{   
public:
    void segregate0and1(int arr[], int n) {
       int i=0;
       int j=n-1;
       while(i<j){
           if(arr[i]<arr[j]){
               i++;
           }
           else if(arr[i]>arr[j]){
               swap(arr[i],arr[j]);
               j--;
               i++;
           }
           else if(arr[i] ==0 && arr[j]==0){
                i++;
           }
           else if(arr[i] ==1 && arr[j]==1){
                j--;
           }
           
       }
    }
};