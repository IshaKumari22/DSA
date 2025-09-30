#include<iostream>
using namespace std;
bool isArmstrong(int n){
    int original=n;
    int sum=0;
    while(n!=0){

        int digits=n%10;
        int a=digits*digits*digits;
        sum+=a;
        n=n/10;
    }
    return (sum==original);
}
int main(){
    int n;
    cin>>n;
    if(isArmstrong(n)){
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<"Not an Armstrong number"<<endl;
    }

}