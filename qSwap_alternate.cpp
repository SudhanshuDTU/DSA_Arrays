#include<iostream>
using namespace std;

void swapAlternate(int arr[],int n){
    int a=0;
    int b=1;
    while(b<=n-1){
        swap(arr[a],arr[b]);
        a=a+2;
        b=b+2;
    }

    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    
}


int main(){
    int arr[5] = {1,2,3,4,5};
    swapAlternate(arr,5);

}