#include<iostream>
using namespace std;

void printMaximum(int arr[],int n){
  int max = arr[0];
  for(int i=1;i<=n-1;i++){
    if(arr[i]>max){
        max = arr[i];
    }
  }
  cout<<max;
}

void printMinimum(int arr[],int n){
 int min = arr[0];
  for(int i=1;i<=n-1;i++){
    if(arr[i]<min){
        min = arr[i];
    }
  }
  cout<<min;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];   
    }

    printMaximum(arr,n);
    cout<<endl;
    printMinimum(arr,n);
}