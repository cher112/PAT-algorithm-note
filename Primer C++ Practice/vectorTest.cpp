#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using std::cout;using std::endl;using std::string;using std::vector;

class bookstore {
    public:
    bookstore(): bookno{1,2,3},title("test book"){}
    bookstore(vector<int> a,string b):bookno(a),title(b) {}

    vector<int> isbn() const{return bookno;}
    vector<int> bookno;
    string title;
};

int main(){
    //initialization
    int a=1,b=2,c=3,d=4;
    vector<int> array{1,2,3,4};
    cout<<array.size()<<endl;
    for(auto it = array.begin();it!=array.end()&&!array.empty();it++){
        if(*it==3){*it=9; break;}
    }
    cout<<array[2]<<endl;
    /*use getter method and operate std::vector*/
    bookstore bts1;
    cout<<bts1.isbn()[2]<<endl;
    bts1.bookno.push_back(5);
    for(auto it2 = bts1.bookno.begin();it2!=bts1.bookno.end();it2++){
        cout<<*it2<<endl;
    }

    //operate the std::string
    cout<<bts1.title<<endl;
    string &t1 = bts1.title;
    t1.append(" test &");
    cout<<t1<<endl;
    return 0;
}
