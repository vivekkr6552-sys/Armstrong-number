#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    cout<<"enter the number";
    cin>>num;
    int  digit;
    int result=0;
    int count=0;
    while(num>0){
        count++;
        num/=10;
    }
    
    while(num>0){
        digit=num%10;
        result+=(int)pow(digit,count);
        num/=10;

    }
    if(num==result){
        cout<<"number is"<<num<<"armstrong";
    }
    else{
        cout<<"not armstrong";
    }
    return 0;
}