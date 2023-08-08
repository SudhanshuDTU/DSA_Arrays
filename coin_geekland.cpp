#include<iostream>
using namespace std;

int Maximum_Sum(vector<vector<int>> &mat,int N,int K){
        int p[N+1][N+1];
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                p[0][j]=0;
                p[i][0]=0;
            }
        }//first row and col me zero aagya
        int ans = INT_MIN;
        for(int i=1;i<=N;i++){
            for(int j=1;j<=N;j++){
                p[i][j] = mat[i-1][j-1]+p[i-1][j]+p[i][j-1]-p[i-1][j-1];
                if(i>=K && j>=K){
                    ans = max(ans,p[i][j]-p[i-K][j]-p[i][j-K]+p[i-K][j-K]);
                }
            }
        }
        
        return ans;
        