#include <bits/stdc++.h>
using namespace std;

int Hash(int x , int len){
    return x % len ;
}

int asl(vector<int> &nums , int len){
    int res = 0 ;
    vector<bool> b(len) ;
    for(int i = 0 ; i < nums.size() ; i ++){
        int t = Hash(nums[i] , len) ;
        res ++ ;
        while(b[t]){
            t = (t + 1) % len ;
            res ++ ;
        }
        b[t] = true ;
    }
    return res ;
}

vector<int> get_ans(vector<int> &nums , int len){
    vector<int> New(len) ;
    vector<bool> b(len) ;
    for(int i = 0 ; i < nums.size() ; i ++){
        int t = Hash(nums[i] , len) ;
        while(b[t]){
            t = (t + 1) % len ;
        }
        b[t] = true ;
        New[t] = nums[i] ;
    }
    return New ;
}

int search_hash(vector<int> nums , int len , int x){
    int t = Hash(x , len) ;
    while(nums[t] != x){
        t = (t + 1) % len ;
    }
    cout << t << "\n" ;
    return t ;
}

int main()
{
    int n ; cin >> n ; 
    vector<int> nums(n) ;
    for(auto &x : nums) cin >> x ;
    vector<int> ans ;
    int len ;
    for(int i = n ; ; i ++){
        int t = asl(nums , i) ;
        if(t < 2 * n){
            ans = get_ans(nums , i) ;
            len = i ;
            // cout << i << '\n' ;
            break ;
        }
    }
    for(int i = 0 ; i < nums.size() ; i ++){
        // cout << nums[i] << " " ;
        search_hash(ans , len , nums[i]) ; 
    }
}