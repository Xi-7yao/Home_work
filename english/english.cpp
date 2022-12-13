#include <bits/stdc++.h>
using namespace std;

int main()
{
    string q = "0" ;
    ifstream ifs ;
    ifs.open("Eng.txt") ;
    if(ifs.is_open()){
        char t[100] ;
        while(ifs.getline(t , 100)){
            // cout << t << '\n' ;
            q.clear() ;
            for(int i = 0 ; i < strlen(t) ; i ++){
                if(t[i] == ' ')     break ;
                q += t[i] ;
            }
            // cout << q << ' ' ;
        }
    }

    int t = 0 ;
    for(int i = 0 ; i < q.size() ; i ++){
        t = t * 10 + q[i] - '0' ;
    }
    t ++ ;
    q = to_string(t) ;
    ofstream ofs ; 
    ofs.open("Eng.txt" , ios::app) ;
    string word ; cin >> word ;
    string Chinese ; cin >> Chinese ;
    ofs << "\n" << q << " " << word << "        " << Chinese ;
}