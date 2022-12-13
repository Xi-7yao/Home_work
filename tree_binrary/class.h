#ifndef CLASS_H
#define CLASS_H

#include <bits/stdc++.h>
#include "type.h"
using namespace std;

class NODE
{
    public :
        Node* init(void) ;
        Node* init(date x) ;
        Node* insert(Node *head , date x) ;
        void print_first(Node *h) ;
        void print_second(Node *h) ;
        void print_thrid(Node *head) ;
        Node* head = nullptr ;
};

Node* NODE::init(void){
    Node *t = new (Node) ;
    t->l = t->r = nullptr ;
    return t ;
}

Node* NODE::init(date x){
    Node *t = new (Node) ;
    t->l = t->r = nullptr ;
    t->val = x ;
    return t ;
}

Node* NODE::insert(Node *head , date x){
    if(!head){
        head = init(x) ;
    }
    else{
        if(x.val < head->val.val)
            head->l = insert(head->l , x) ;
        else if(x.val > head->val.val)
            head->r = insert(head->r , x) ;
    }
    return head ;
}

void NODE::print_first(Node *head) {
    if(!head)   return ;
    cout << head->val.val << " " ;
    print_first(head->l) ;
    print_first(head->r) ;
}
void NODE::print_second(Node *head) {
    if(!head)   return ;
    print_first(head->l) ;
    cout << head->val.val << " " ;
    print_first(head->r) ;
}
void NODE::print_thrid(Node *head) {
    if(!head)   return ;
    print_first(head->l) ;
    print_first(head->r) ;
    cout << head->val.val << " " ;
}

#endif