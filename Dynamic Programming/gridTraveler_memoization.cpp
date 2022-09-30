#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

long long int dp[1000][1000];

long long int gridTraveler_logic(long long int r, long long int c){

    if(dp[r][c] != -1) return dp[r][c];
    if (r == 1 && c == 1) return 1;
    if (r == 0 || c == 0) return 0;

    dp[r][c] = gridTraveler_logic(r-1,c) + gridTraveler_logic(r,c-1);

    // symmetric property of this particular problem
    // optional, line 17 can be commented out
    // does not affect the correctness, just little optimization
    dp[c][r] = dp[r][c];
    
    return dp[r][c];

    // ***STL Map Approach***
    // string s1 = to_string(r);
    // string s2 = ",";
    // string s3 = to_string(c);
    // const string key = s1+s2+s3;
    // if (dp.find(key) != dp.end()) return dp[key];
    // if (r == 1 && c == 1) return 1;
    // if (r == 0 || c == 0) return 0;
    // dp[key] = gridTraveler_logic(r-1,c,dp) + gridTraveler_logic(r,c-1,dp);
    // return dp[key];
}

void gridTraveler(long long int r, long long int c){
    auto starts = high_resolution_clock::now();

    cout<<"Total no. of Ways = "<<gridTraveler_logic(r,c)<<"\n";
    
    auto stops = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stops - starts);
    cout << "Time taken by program: "
         << duration.count() << " microseconds" << endl;
}

int main(){
    cout<<"*** Grid Traveler ***\n";
    cout<<"Enter no. of rows and column: ";
    long long int r,c;
    cin>>r>>c;

    // vector<vector<long long int>> dp(r+1, vector<long long int>(c+1,-1));

    // map<string, long long int> dp;

    memset(dp, -1, sizeof(dp)); //initialize all to -1

    gridTraveler(r,c);
}

//  *Time Complexity
// No. of levels = rows + column - 1 ~ r+c
// Height of the tree = r+c
// No. of calls = r*c
// Time Complexity = O(r*c) // worst case

//  *Space Complexity
// Maximum Total No. of stacks at an instant
// Depth of the tree = r+c levels = Height of the tree
// Space Complexity = O(r+c)
