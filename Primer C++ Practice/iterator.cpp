#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

int main(){
    string n("iterator");
    for(auto it = n.begin();it!=n.end();it++){
        *it = toupper(*it);
    }
    for(int i=0;i<n.size();i++){
        cout<<n[i];
    }
    return 0;
}