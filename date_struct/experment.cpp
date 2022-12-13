#include <bits/stdc++.h>
using namespace std;

vector<bool> judge(1000) ;
vector<int> place(1000) ;
int res = 0 ; 

int generate(int n , int index)
{   
    if(index == n + 1){
        res ++ ;
        return res ;
    }

    for(int i = 1 ; i <= n ; i ++){
        if(judge[i])    continue ;
        
        for(int j = 1 ; j <= index ; j ++){
            if(abs(index - j) == abs(i - place[j])){
                break ;
            }
            if(j == index){
                judge[i] = true ;
                place[index] = i ;
                generate(n , index + 1) ;
                judge[i] = false ;
                place[index] = 0 ;
            }
        }
    }

    return res;
}

int main()
{
    int n ; cin >> n ;
    int ans = generate(n , 1) ;
    cout << ans << '\n' ;
}