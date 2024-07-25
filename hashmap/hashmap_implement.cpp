#include <iostream>
#include<unordered_map>   
using namespace std;

int main() {
    unordered_map< string , int> hash;

// easy way to make pair and insert 
    hash["apple"] = 4;
    hash["mango"] = 1;
    hash["orange"] = 14;
    hash["banana"] = 5;

// second way to make pair
    pair<string,int> p =  make_pair("nimbu",200);
    hash.insert(p);

//third way to make pair
    pair<string,int> r("narial",5);
    hash.insert(r);

// loop  to print value
    for(auto item : hash){
        cout<<item.first<<":" <<item.second <<endl;
    }

// size of hash map
cout<< hash.size()<<endl;

// to check occurance
cout<< hash.count("banana");

//erase data from hash
hash.erase("banana");
cout<< endl;
cout<<hash.count("banana");


    return 0;
}