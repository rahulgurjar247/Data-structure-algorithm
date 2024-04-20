#include<iostream>
using namespace std;

int main(){
    int arr[4][4];
    int count =16;

    int fRow = 0;
    int fCol =0;
    int lCol = 3;
    int lRow =3;

    while(count<16){

        for(int index=fCol;count<16 && index<lCol;index++){
            cout<<arr[fRow][index]<<" ";
            count++;
        }
        fRow++;

        for(int index=fRow;count<16 && index<lRow;index++){
            cout<<arr[index][lCol]<<" ";
            count++;
        }
        lCol--;

        for(int index=lCol;count<16 && index<fCol;index++){
            cout<<arr[lRow][index]<<" ";
            count++;
        }
        lRow--;
        for(int index=lRow;count<16 && index<fRow;index++){
            cout<<arr[index][fCol]<<" ";
            count++;
        }
        fCol++;


    }
}
