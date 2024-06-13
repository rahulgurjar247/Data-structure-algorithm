#include <iostream>
#include<stack>
using namespace std;

string reverse(string str){
    stack<char> s;
    for(char c : str){
        s.push(c);
    }
    string newstring = "";
    while(!s.empty()){
        newstring += s.top();
        s.pop();
    }
    return newstring;
}

int main() {
    string name = "rahulgurjar";

    string output = reverse(name);

    cout << output;
    return 0;
}