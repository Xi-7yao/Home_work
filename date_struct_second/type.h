#ifndef TYPE_H
#define TYPE_H

template <class T , class TP> struct edge{
    T from , to ;
    TP w ;
    edge(T a , T b , TP c){
        this->from = a , this->to = b , this->w = c ;
    }
    edge(){} 
};

#endif 