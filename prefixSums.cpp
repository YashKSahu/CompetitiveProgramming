// C++ Program 
#include <bits/stdc++.h>
#include <fstream>

using namespace std;

typedef long long int		ll;
typedef unsigned long long  ull;
typedef list<int>			li;
typedef vector<int> 		vi;
typedef vector<double> 		vd;
#define PI 					3.14159265
#define M					1000000007
#define REP(i,a,b) 			for(int i = a; i < b; i++)
#define PB 					push_back
#define ar					array

void prefixSum(int a[], int size, int prefix[]){
	prefix[1] = a[0];
	for(int i=2; i<=size; ++i)
		prefix[i] = prefix[i-1] + a[i-1];
	
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	
	int a[n];
	for(int i=0; i<n; ++i) cin>>a[i];
	
	int prefix[n+1]={0};
	prefixSum(a,n,prefix);
}
