#include<iostream>
using namespace std;

int binarySearch(int arr[], int k, int start, int end) {
    if(start > end)
        return -1;
        
    int mid = (start + end) / 2;
    
    if(arr[mid] == k)
        return mid;
    else if(k < arr[mid])
        end = mid - 1;
    else 
        start = mid + 1;
        
    return binarySearch(arr, k, start, end);
}

int main() {
    int n, k;
    cin >> k >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
        
    cout << binarySearch(arr, k, 0, n - 1);
}
