# include <stdlib.h>
# include <stdio.h>
# include <iostream>
using namespace std;
struct node{
    int val;
    node *next;
};
node* create(int a[]){
    node *head,*pre,*p;
    head = new node;
    head->next = NULL;
    pre = head;
    for(int i = 0; i<5; i++){
        p = new node;
        p->val = a[i];
        p->next = NULL;
        pre->next = p;
        pre = p;
    }

    return head;

}
//创 查 插 删
int find(node* head,int x){
    //return the pos of x if x was found;
    node *p  = head->next;
    int pos = 1;
    while(p!=NULL){
        if(p->val == x) return x;
        else {
            p = p->next;
            pos++;
        }
    }
    return -1;
}

void insert(node* head ,int c,int x){
    node *p = head;
    int count = c-1;
    while(count!=0){
        count--;
        p = p->next;
    }
    node *q = new node;
    q->val = x;
    q->next = p->next;
    p->next = q;
}

int del(node *head,int c){
    int count = c-2;
    node *p = head->next->next;
    node *pre = head->next;
    while(count!=0){
        pre = p;
        p = p->next;
    }
    pre->next = p->next;
    free(p);
    p = p->next;
    return 1;

}

int main(){
    int a[5] = {1,4,5,7,9};
    node *p = create(a);
    node *q = p->next;
    insert(p,3,6);
    del(p,2);
    while(q != NULL){
        cout<<q->val<<endl;
        q = q->next;
    }
    int res = find(p,9);
    cout<<"find res"<<res<<endl;
    return 0;
}