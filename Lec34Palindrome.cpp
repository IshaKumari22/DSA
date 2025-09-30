#include<iostream>
using namespace std;
bool palindrome(int n){
    int original=n;int sum=0;
    while(n!=0){
        int lastdigit=n%10;
        sum=sum*10+lastdigit;
        cout<<lastdigit;
        n/=10;
    }
    return (sum==original);
}
int main(){
    int n;
    cin>>n;
    if(palindrome(n)){
        cout<<"Palindrome\n";
    }
    else{
        cout<<"Not a palindrome\n";
    }
    return 0;
}