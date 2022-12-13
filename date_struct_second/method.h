#ifndef METHOD_H
#define METHOD_H

#include <iostream>
#include "type.h"
#include <vector>
#include <queue> 

typedef edge<int , double> Edge ;

namespace COUT{
    template <class T> void print(T &nums){
        for(int i = 0 ; i < nums.size() ; i ++){
            std::cout << nums[i].from << " " << nums[i].to << " " << nums[i].w << "\n" ;
        }
    }
}

namespace INPUT{
    template <class T , class TP> void input(T &n , T &m , TP &road){
        std::cout << "请输入该地区有多少个城镇\n" ;
        std::cin >> n ;
        std::cout << "请输入该地区有多少条道路\n" ;
        std::cin >> m ;
        std::cout << "请依次输入每条道路连接的两个城镇和建造花费成本\n" ;
        for(int i = 0 ; i < m ; i ++){
            struct edge<int , double> t ;
            std::cin >> t.from >> t.to >> t.w ;
            road.push_back(t) ;
        }
    }
}

namespace FIND_SET{
    std::vector<int> init(int n){
        std::vector<int> fa(n + 1) ;
        for(int i = 0 ; i <= n ; i ++)   fa[i] = i ;
        return fa ;
    }
    int find(int x , std::vector<int> &fa){
        if(x == fa[x]) return x ;
        return fa[x] = find(fa[x] , fa) ;
    }
}

namespace DISPOSE{
    template <class T> struct cmp{
        bool operator()(T a , T b){
            return a.w > b.w ;
        }
    };
    template <class ANS , class T , class TP> ANS dispose(std::vector<T> &road , TP &fa){
        ANS res = 0 ;
        std::priority_queue<T , std::vector<T> , cmp<T> > Q ;
        for(int i = 0 ; i < road.size() ; i ++)
            Q.push(road[i]) ;
        while(!Q.empty()){
            T t = Q.top() ;
            Q.pop() ;
            if(FIND_SET::find(t.from , fa) == FIND_SET::find(t.to , fa)){
                continue ;
            }
            else{
                fa[FIND_SET::find(t.from ,fa)] = FIND_SET::find(t.to ,fa) ;
                res += t.w ;
            }
        }
        return res ;
    }
}

#endif