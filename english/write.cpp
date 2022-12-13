#include <bits/stdc++.h>
#include "write.h"
using namespace std;

class Print
{
    public :

        void print(int nums , int tp) ;
    private : 
        void word_print(int tp) ;
        void chinese_print(int tp) ;
};

int main()
{
    string q = "0" ;
    ifstream ifs ;
    ifs.open("Eng.txt") ;
    vector<string> words ;
    if(ifs.is_open()){
        char t[100] ;
        while(ifs.getline(t , 100)){
            // cout << t << '\n' ;
            q.clear() ;
            for(int i = 0 ; i < strlen(t) ; i ++){
                if(t[i] == ' ')     break ;
                q += t[i] ;
            }
            words.push_back(t) ;
            // cout << q << ' ' ;
        }
    }

    int t = 0 ;
    for(int i = 0 ; i < q.size() ; i ++){
        t = t * 10 + q[i] - '0' ;
    }
    t ++ ;

    srand(time(0)) ;
    int tp = rand() * 15341234 ; 
    tp = tp % t + 1 ;
    
}