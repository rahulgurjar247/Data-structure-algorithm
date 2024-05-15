#include<iostream>
using namespace std;

class command{
    public:
    string arr[10]  = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    void sayDigit(int num){
        if(num<=0){
            return ;
        }

        int rev = num % 10;
        num /= 10;
        sayDigit(num);
        cout<< arr[rev] <<" ";
        
    }
};

int main(){
    command obj;
    int inp;
    cout<<"enter any number:";
    cin>>inp;

    obj.sayDigit(inp);

    return 0;
}

