#include <bits/stdc++.h>
#include "write.h"
using namespace std;

int main()
{
    int cnt = 0 ;
    ifstream ifs ;
    ifs.open("Eng.txt") ;
    vector<string> words ;
    vector<string> chinese ;
    if(ifs.is_open()){
        string t ;
        while(!ifs.eof()){
            cnt ++ ;
            ifs >> t ; ifs >> t ;
            words.push_back(t) ;
            ifs >> t ;
            chinese.push_back(t) ;
        }
    }

    // for(int i = 0 ; i < cnt ; i ++){
    //     cout << chinese[i] << '\n' ; 
    // }

    cout << cnt << '\n' ;

    srand(time(0)) ;
    int tp = rand() * 153479 ; 
    cout << tp << '\n' ; 
    tp = tp % cnt ;
    cout << tp << '\n' ;

    cout << "choose English or Chinese\n" ;
    string t ;
    while(cin >> t){
        if(t == "E"){
            cout << words[tp] << '\n' ;
            string tmp ;
            while(cin >> tmp){
                if(tmp == "answer"){
                    cout << chinese[cnt] << '\n' ;
                    break ;
                }
                else if(tmp == chinese[cnt]){
                    cout << "true\n" ;
                    break ;
                }
                else{
                    cout << "´íÎó\n" ;
                }
            }
        }
        else if(t == "C"){
            cout << chinese[tp] << '\n' ;
            string tmp ;
            while(cin >> tmp){
                if(tmp == "answer"){
                    cout << words[cnt] << '\n' ;
                    break ;
                }
                else if(tmp == words[cnt]){
                    cout << "true\n" ;
                    break ;
                }
                else{
                    cout << "´íÎó\n" ;
                }
            }
        }
        else if(t == "end"){
            return 0 ;
        }
    }
}