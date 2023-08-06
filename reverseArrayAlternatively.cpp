#include<iostream>
using namespace std;

class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    
    //Function to rearrange  the array elements alternately.
  
    void rearrange(long long *arr, int n) 
    { 
       int minIndex = 0;
       int maxIndex = n-1;
       
       int maxElement = arr[n-1] + 1;
        
    	for(int i=0;i<n;i++){
    	   if(i%2==0){
    	       arr[i] = (arr[maxIndex]%maxElement) * maxElement + arr[i];
    	       maxIndex--;
    	   }
    	   else{
    	        arr[i] = (arr[minIndex]%maxElement) * maxElement + arr[i];
    	        minIndex++;
    	   }
    	}
    	for(int i=0;i<n;i++){
    	   arr[i] = arr[i]/maxElement;
    	}
    	
   
    	 
    }
};
