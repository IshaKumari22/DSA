#include<iostream>
using namespace std;

int gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a%=b;
        }
        else{
            b%=a;
        }
    }
    if(a==0){
        return b;
    }
    else{
        return a;
    }
}

int lcm(int a,int b){
     return (a*b/gcd(a,b));
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    cout<<lcm(a,b)<<endl;
    return 0;
}