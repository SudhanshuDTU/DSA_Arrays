#include<iostream>
using namespace std;

void printArray(int n,int arr[]){
     //print entire array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
    //initialise array
    
    int arr[5] = {1,2,3,4,5};

    printArray(5,arr);

}