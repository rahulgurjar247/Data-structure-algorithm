#include<iostream>
using namespace std;
#include<vector>
#include<string>
class Solution {
public:
    string intToRoman(int num) {
        string roman;
        int temp = num;
        int rem;
        while(temp != 0){

            if(temp>=1000){
                rem = temp/1000;
                for(int i=0;i<rem;i++){
                    roman.pushback('M')
                }
                temp = temp%1000;

            }
            else if(temp>=500){
                rem = temp/500;
                roman.pushback('M')
                temp = temp%500;
            }
            else if(temp>100){
                rem = temp/100;
                for(int i=0;i<rem;i++){
                    roman.pushback('M')
                }
                temp = temp%100;
            }
            else if(temp>50){
                rem = temp/50;
                roman.pushback('M')
                temp = temp%50;
            }
            else if(temp>10){
                rem = temp/10;
                for(int i=0;i<rem;i++){
                    roman.pushback('X')
                }
                temp = temp%10;                
            }
            else if(temp>5){
                rem = temp/5;
                roman.pushback('V')
                temp = temp%5;                
            }
            else if(temp>1){
                rem = temp/1;
                for(int i=0;i<rem;i++){
                    roman.pushback('I')
                }
                temp = temp%1;                
            }
        }
        
    }
};