# include <cstdio>
# include <iostream>
# include <iterator>
# include <stack>
# include <queue>
# include <map>
using namespace std;
//数字直接进后缀队列(FIFO)，符号进符号栈
struct node{
    double num;
    char op;
    bool flag;
    // if flag == 1 num, if flag ==0 op;
};

string str;
queue <node> q;
stack <node> s;
map <char,int> op;

void change(){
    node temp;
    for(int i = 0 ;i < str.length();){
        if(str[i] >= '0' && str[i] <= '9'){
            temp.flag = true;
            temp.num = str[i++] - '0';//char to int
            while(i < str.length() && str[i] >= '0' && str[i] <= '9'){    
                temp.num = temp.num * 10 + (str[i] - '0');
                i++;
            }
            //cout<<temp.num<<endl;
            q.push(temp);
        }else{
            temp.flag = false;
            while(!s.empty() && op[str[i]] <= op[s.top().op]){
                q.push(s.top());
                s.pop();
            }
            temp.op = str[i];
            //cout<<temp.op<<endl;
            s.push(temp);
            i++;
        }
    }
            //last
        while(!s.empty()){
            q.push(s.top());
            s.pop();
        }
}
double cal(){
    node cur,temp; // cur is for quene, temp is for 4 calculate
    double temp1,temp2;
    while(!q.empty()){
        cur = q.front();
        q.pop();
        if(cur.flag == true){
            s.push(cur); //num in
        }else {
            temp2 = s.top().num;
            s.pop();
            temp1 = s.top().num;
            s.pop();
            temp.flag = true;
            //cout<<temp1<<temp2<<endl;
            if(cur.op == '+') temp.num = temp1 + temp2;
            else if(cur.op == '-') temp.num = temp1 - temp2;
            else if(cur.op == '*') temp.num = temp1 * temp2;
            else temp.num = temp1 / temp2;
            s.push(temp);
        }
    }
    return s.top().num;
}


int main(){
	op['+'] = op['-'] = 1;//设定操作符的优先级 
	op['*'] = op['/'] = 2;
	while(getline(cin,str),str != "0"){
		for(string::iterator it = str.end();it != str.begin();it--){
			if(*it == ' ') str.erase(it);//把表达式中的空格全部去掉 
		}
		while(!s.empty()) s.pop();//初始化栈 
		change();//将中缀表达式转换为后缀表达式 
		printf("%.2f\n",cal()); //计算后缀表达式 
	}
	return 0;
}