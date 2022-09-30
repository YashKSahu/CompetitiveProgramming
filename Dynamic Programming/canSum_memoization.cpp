#include <bits/stdc++.h>
using namespace std;

// vector<bool> dp(10000,false);
// vector<int> check(10000,0);
// - **segmentation fault**

bool dp[1000000];
int check[1000000];

bool canSum(long long int targetSum, long long int numbers[], long long int n){
    if(check[targetSum]) return dp[targetSum];
    if(targetSum == 0) return true;
    if(targetSum < 0) return false;

    for(int i=0; i<n; ++i){
        long long int new_targetSum = targetSum - numbers[i];
        if(canSum(new_targetSum, numbers, n) == true){ 
            dp[targetSum] = true;
            check[targetSum] = 1;
            
            return true;
        }
    }
    dp[targetSum] = false;
    check[targetSum] = 1;
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

    memset(dp, false, sizeof(dp));
    memset(check, 0, sizeof(check));

    if(canSum(targetSum, numbers, n)) cout<<"true\n";
    else cout<<"false\n";
}

//  *Time Complexity
// m = target sum
// n = length of number array
// No. of levels = targetSum
// Height of the tree = targetSum = m
// No. of calls = n*m
// Time Complexity = O(n*m)

//  *Space Complexity
// Maximum Total No. of stacks at an instant
// Depth of the tree = Height of the tree
// Space Complexity = O(m)