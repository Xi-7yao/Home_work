#include <iostream>
#include <random>
#include <bits/stdc++.h>
using namespace std;
 
int main( ){
    default_random_engine e;
    uniform_int_distribution<unsigned> u(0, 100000000);
    int n = 100;
    vector<int> nums(n) ;
    ofstream fout ;
    fout.open("date.txt" , ios::binary | ios::app | ios::in | ios::out) ;
    for(int i = 0 ; i < n ; ++i){
        nums[i] = u(e) ;
        // cout<<u(e)<< ' ';
    }
    sort(begin(nums) , end(nums)) ;
    for(int i = 0 ; i  < n ; i ++){
        cout << nums[i] << " " ;
        fout << nums[i] << " " ;
    }
    fout.close() ;
    return 0;
}
