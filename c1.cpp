#include<iostream>
using namespace std;

class Solution {
    public :
    int evalRPN(vector<string>& tokens){
       stack<long>st;
       for (int s:tokens) 
       if (s == "+"||s == "-"||s == "*" ||s == "/"){
        long a = st.top();st.pop();
        long b = st.top();st.pop();
        if (s=="+")
        a= b + a;
        if (s=="_")
        a= b - a;
        if (s=="*")
        a= b * a;
        if (s=="/")
        a= b / a;
        st.push(a);
       }
       else st.push(stoi(s));
       return st.pop();
    }

};
//time complexity O(n)