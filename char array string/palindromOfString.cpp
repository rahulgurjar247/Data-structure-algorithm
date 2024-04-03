char Tolower(char str){
    if(str >= 'a' || str <= 'z'){
        return str;
    }
    else{
        return str-'A'+'a';
    }
}

bool apha(char r){
    bool alphanumeric = ( (r >= 'a'&& r <='z') || (r >= 'A' && r<='Z') || (r>='0' && r<='9') );
    if(alphanumeric){
        return !alphanumeric;
    }
    return true;
}
    // else{
    //     return false;
    // }
class Solution {
public:
    bool isPalindrome(string s) {
        int first =0;
        int last=s.size()-1;
        while(first<last){
            if(apha(s[first])){
                first++;
                continue;
            }
            if(apha(s[last])){
                last--;
                continue;
            }
            if(Tolower(s[first]) != Tolower(s[last])){
                return false;
            }else{
                first++;
                last--;
            }
        }
        return true;
    }
};

function hellorahul(){
    cout<<"hello rahul";
}