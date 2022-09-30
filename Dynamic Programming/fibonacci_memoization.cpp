//A C++ program to implement top-down approach of DP
//Memoization
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

vector<long long int> fib_dp(100000000,-1);

long long int fibonacci_logic(long long int n){
    if(fib_dp[n]==-1){
        fib_dp[n] = fibonacci_logic(n-1)+fibonacci_logic(n-2); 
    }
    return fib_dp[n];
}

void fibonacci(long long int n){
    auto starts = high_resolution_clock::now();

    cout<<n<<"th fibonacci number = "<<fibonacci_logic(n)<<"\n";
    
    auto stops = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stops - starts);
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
}

int main(){
    // unsync the I/O of C and C++.
    ios_base::sync_with_stdio(false);

    // for(long long int i=0; i<100000000; i++)
    //     fib_dp[i]=-1;

    cout<<"*** Nth Fibonacci Number - DP - Memoization ***\n";
    cout<<"Enter N: ";
    long long int n;
    cin>>n;
    fib_dp[0]=0;
    fib_dp[1]=1;

    fibonacci(n);
}
