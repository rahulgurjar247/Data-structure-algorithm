## what is hashmap
` hash map is a type of data structure with hashmap we can do inserting ,traversing , deleting in O(1) time complexity `

## `header files for hashmap`
```
#include<unordered_list>
#include<map> by using map we get order list
````

## `create hash table `
```
unordered_list(string , int) hashTableName; 
```

## `insert data in hash table`
```
//first way to insert data 
  pair<string,int> p =  make_pair("nimbu",200);
  hash.insert(p);

//second way to insert data
  pair<string,int> r("narial",5);
  hash.insert(r);

// easy way to make pair and insert 
    hash["apple"] = 4;
    hash["banana"] = 5;


```

## `how to print hashmap data`

```
     for(auto item : hash){
        cout<<item.first<<":" <<item.second <<endl;
    }
```

## `how to erase data from hashmap`
```
hash.erase("banana");
```




## `implement of hashmap`
```
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

    cout<<hash["apple"]<<endl;

    return 0;
}
 
```
