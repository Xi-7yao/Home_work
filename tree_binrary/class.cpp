// #include "class.h"
// #include "type.h"

// Node* NODE::init(void){
//     Node *t = new (Node) ;
//     t->l = t->r = nullptr ;
//     return t ;
// }

// Node* NODE::init(date x){
//     Node *t = new (Node) ;
//     t->l = t->r = nullptr ;
//     t->val = x ;
//     return t ;
// }

// Node* NODE::insert(Node *head , date x){
//     if(!head){
//         head = init(x) ;
//     }
//     else{
//         if(x.val < head->val.val)
//             head->l = insert(head->l , x) ;
//         else if(x.val > head->val.val)
//             head->r = insert(head->r , x) ;
//     }
//     return head ;
// }