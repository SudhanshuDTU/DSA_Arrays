#include<iostream>
using namespace std;
 
bool LinearSearch(int arr[],int size,int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == key){
            return true;
        }
    }

    return false;
    
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int key;
    cin>>key;
    cout<<LinearSearch(arr,5,key);
}