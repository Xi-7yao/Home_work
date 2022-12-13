#include <bits/stdc++.h>
#include "class.h"
#include "type.h"

using namespace std;

int main()
{
    NODE tree ;
    int n ; cin >> n ;
    vector<int> nums(n) ;
    for(int i = 0 ; i < n ; i ++){
        cin >> nums[i] ;
        date x ; x.val = nums[i] ;
        tree.head = tree.insert(tree.head , x) ;
    }
    tree.print_first(tree.head) ;
    cout << '\n' ;
    tree.print_second(tree.head) ;
    cout << '\n' ;
}