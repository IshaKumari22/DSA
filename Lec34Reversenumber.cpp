#include<iostream>
using namespace std;
int reversenum(int n){
    int reversednumber=0;
    while(n!=0){
        int lastdigit=n%10;
        reversednumber=reversednumber*10+lastdigit;
        n=n/10;
    }
    return reversednumber;
}
int main(){
    int n;
    cin>>n;
    reversenum(n);
    cout<<reversenum(n)<<endl;
}