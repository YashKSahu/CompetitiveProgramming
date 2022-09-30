//A C++ program to implement top-down approach of DP
//Memoization
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;


long long int fibonacci_logic(int n){
    if(n<=2)
        return 1;
    else
        return fibonacci_logic(n-1)+fibonacci_logic(n-2); 
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
    cout<<"*** Nth Fibonacci Number - DP - Memoization ***\n";
    cout<<"Enter N: ";
    long long int n;
    cin>>n;
    fibonacci(n);
}
