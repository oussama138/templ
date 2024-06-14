
#include <iostream>
#include <string>
#include <stack>

using namespace std;

void sol(){
        stack<char> st,ss;
    int n=0;
    std::string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        st.push(s[i]);
    }
    for(int i=0;i<s.length();i++){
        if(st.top()==')'||st.top()==']'){
            ss.push(st.top());
            st.pop();
        }
    }
    // for(int i=0;i<ss.size();i++){
    //     if(ss.top()==')'){
    //         ss.pop();
    //         ss.push('(');
    //     }
    //     if(ss.top()==']'){
    //         ss.pop();
    //         ss.push('[');
    //     }
    // }
    for(int i=0;i<s.length();i++){
        if(st.top()=='[' && ss.top()==']'){
            st.pop();
            ss.pop();

        }
        else if(st.top()=='(' && ss.top()==')'){
            st.pop();
            ss.pop();

        }else if(st.size() >0 && ss.size()==0){
            n=1;
            break;
        }
        else if(ss.size() >0 && st.size()==0){
            n=1;
            break;
        }
        else{
            n=1;
            break;
        }
            std::cout << "Yes" << std::endl;
    }
    if(n==0) std::cout << "Yes" << std::endl;
    else std::cout << "No" << std::endl;

}
int main()
{
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
    sol();
// }
    return 0;
}
