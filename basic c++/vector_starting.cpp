#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> rahul;
    rahul.push_back(23);
    rahul.push_back(99);
    rahul.push_back(40);

    cout<< rahul.size()<<endl;

    rahul.pop_back();
    cout<< rahul.size()<<endl;

}
