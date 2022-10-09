// A C++ Program
// Dice Combinations, CSES Problem Set
// https://cses.fi/problemset/task/1633
 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int		ll;
typedef unsigned long long  ull;
typedef vector<int> 		vi;
typedef vector<double> 		vd;
 
#define PI 				3.14159265
#define M				1000000007
#define M2				998244353
#define REP(i,a,b) 		for(int i = a; i < b; i++)
#define PB 				push_back

int dp[10000000];
// vector<ll> dp(10000000,-1);
int dice_combinations(int n, int numbers[], int size_numbers){
    if(dp[n]!=-1) return dp[n];
    if(n == 0) return 1;
    int count=0;
    for(int i=0; i<size_numbers; ++i){
        int target_sum = n-numbers[i];
        if(target_sum >= 0){
            (count += dice_combinations(target_sum, numbers, size_numbers)) %= M;
            count = count % M;
        }
    }
    dp[n]=count;
    return count;
}

 
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int numbers[6]={1,2,3,4,5,6};
    memset(dp, -1, sizeof(dp));
    int size_numbers=sizeof(numbers)/sizeof(numbers[0]);

    cout<<dice_combinations(n,numbers,size_numbers)<<"\n";

    return 0;
}
