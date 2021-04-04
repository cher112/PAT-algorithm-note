# include <cstdio>
# include <iostream>
# include <string>
// string->char[]->sscanf->normalize string
using namespace std;
int array[100000];
string str;

struct node{
    int val;
    node *next;
};

node* create(int arr[],int len){
    node *head,*p,*pre;
    head = new node;
    head->next = NULL;
    pre = head;
    for(int i = 1; i<=len; i++){
       p = new node;
       pre->next = p;
       p->val = arr[len-i+1];
       p->next = NULL;
       pre = p; 
    }
    return head;
}

int show(node *head){
    node *p = head->next;
    if(p == NULL){
        printf("Link list is empty\n");
        return -1;
    }
    while(p!=NULL){
        cout<<p->val<<" ";
        p = p ->next;
    }
    printf("\n");
    return 0;
}

int del(node *head,int a,int len){
    node *pre = head;
    node *p = head->next;
    if(a > len || p == NULL){
        printf("delete fail\n");
        return -1;
    }
    for(int i = 0; i < a-1; i++){
        pre = p;
        p = p->next;
    }
    pre->next = p->next;
    free(p);
    printf("delete OK\n");
    return 0;
}

int get(node *head,int a,int len){
    node *p = head->next;
    int pos = 1;
    if(a > len || p == NULL){
        return -1;
    }
    while(p != NULL && pos != a){
        p = p->next;
        pos++;
    }
    return p->val;

}

int insert(node *head,int a,int e,int len){
    if(a > len && len != 0){
        printf("insert fail\n");
        return -1;
    }
    node *p,*pre;
    pre = head;
    if(head->next != NULL){
        p = head->next;
        for(int i = 0; i < a-1; i++){
            pre = p;
            p = p->next;
        }
        node *q = new node;
        q->next = p;
        q->val = e;
        pre->next = q;
        printf("insert OK\n");
        return 0;
    }else{
        if(a != 1){
            printf("insert fail\n");
            return -1;
        }
        node *q = new node;
        q->next = NULL;
        q->val = e;
        pre->next = q;
        printf("insert OK\n");
        return 0;
    }
}
int main(){
    int len,siz,a,b,res;
    string str2;
    scanf("%d",&len);
    for(int i = 1; i<=len; i++){
        scanf("%d",&array[i]);
    }
    node *head = create(array,len);
    scanf("%d",&siz);
    getchar();
    for(int i = 0; i<siz; i++){
        str = " ";
        getline(cin,str);

        if(str == "show") show(head);
        else if(*(str.begin()) == 'd'){
            sscanf(str.data(),"%s %d",&str2,&a);
            res = del(head,a,len); 
            if(res == 0) len--;
            } 
        else if(*(str.begin()) == 'g'){
            sscanf(str.data(),"%s %d",&str2,&a);
            res = get(head,a,len);
            if(res == -1) printf("get fail\n");
            else printf("%d\n",res);
        }
        else {
            sscanf(str.data(),"%s %d %d",&str2,&a,&b);
            res = insert(head,a,b,len);
            if(res == 0) len++;
            }
    }
    return 0;

}