#include<iostream>
using namespace std;
class Solution{   
public:
    int findMissing(int arr[], int n) {
      int common_diff = (arr[n - 1] - arr[0]) / n;
    int missing_element;

    for (int i = 1; i < n; i++) {
        if (arr[i] - arr[i - 1] != common_diff) {
            missing_element = arr[i - 1] + common_diff;
            break;
        }
    }

    return missing_element;
    }
};