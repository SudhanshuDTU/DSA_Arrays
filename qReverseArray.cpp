#include<iostream>
using namespace std;
void reverseArray(int arr[],int start,int end,int size){
 while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
 }
 for (int i = 0; i < size; i++)
 {
    cout<<arr[i]<<" ";
 }
 
}
int main(){
    int arr[4] = {1,2,3,4};
    int start = 0;
    int end = 4-1;
    reverseArray(arr,start,end,4);
}