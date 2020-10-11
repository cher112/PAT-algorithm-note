#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;
using std::end;

int main(){
    string n("iterator");
    for(auto it = n.begin();it!=n.end();it++){
        *it = toupper(*it);
    }
    for(int i=0;i<n.size();i++){
        cout<<n[i]<<endl;
    }
    int a[] = {1,2,3,4,5};
    for(auto it2(a);it2!=end(a);it2++){
        if((*it2) ==5){
            cout<<*it2;
        }
    }
    return 0;
}