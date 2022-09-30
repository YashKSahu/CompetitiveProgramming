#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;


long long int gridTraveler_logic(long long int r, long long int c){
    if (r == 1 and c == 1) return 1;
    if (r == 0 or c == 0) return 0;
    return gridTraveler_logic(r-1,c) + gridTraveler_logic(r,c-1);
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
    gridTraveler(r,c);
}

//  *Time Complexity
// No. of levels = rows + column - 1 ~ r+c
// Height of the tree = r+c
// No. of calls = 2^(r+c)
// Time Complexity = O(2^(r+c))

//  *Space Complexity
// Maximum Total No. of stacks at an instant
// Depth of the tree = r+c levels = Height of the tree
// Space Complexity = O(r+c)
