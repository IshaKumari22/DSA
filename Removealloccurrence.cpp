// 21st sep 2025
#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
     string removeOccurrences(string s,string part){
        while(s.length()>0 && s.find(part)<s.length()){
            s.erase(s.find(part),part.length());
        }
        return s;
     }
};
int main(){
    Solution sol;
    string s ,part;
    cout<<"Enter the string :";
    getline(cin,s);
    cout<<"Enter the part to remove :";
    getline(cin,part);
    string result=sol.removeOccurrences(s,part);
    cout<<"Result :"<<result<<endl;
    return 0;

}