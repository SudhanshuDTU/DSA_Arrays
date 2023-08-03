#include<iostream>
using namespace std;

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<int> A, vector<int> B, int N) {
       sort(A.begin(), A.end());
       sort(B.begin(), B.end());
       for(int i=0;i<N;i++){
           if(A[i]!=B[i]){
               return false;
           }
       }
       return true;
    }
};