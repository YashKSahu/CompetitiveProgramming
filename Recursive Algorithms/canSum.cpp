#include <bits/stdc++.h>
using namespace std;

bool canSum(long long int targetSum, long long int numbers[], long long int n){
    if(targetSum == 0) return true;
    if(targetSum < 0) return false;
    for(int i=0; i<n; ++i){
        long long int new_targetSum = targetSum - numbers[i];
        if(canSum(new_targetSum, numbers, n) == true) return true;
    }
    return false;
}

int main(){
    cout<<"*** Can Sum ***\n";
    cout<<"Enter Target Sum: ";
    long long int targetSum;
    cin>>targetSum;
    cout<<"Enter no. of numbers available: ";
    long long int n;
    cin>>n;
    cout<<"Enter list of available numbers: ";
    long long int numbers[n];
    for(int i=0; i<n; ++i) cin>>numbers[i];

    if(canSum(targetSum, numbers, n)) cout<<"true\n";
    else cout<<"fasle\n";
}

//  *Time Complexity
// m = target sum
// n = length of number array
// No. of levels = targetSum
// Height of the tree = targetSum = m
// No. of calls = n^m
// Time Complexity = O(n^m)

//  *Space Complexity
// Maximum Total No. of stacks at an instant
// Depth of the tree = Height of the tree
// Space Complexity = O(m)