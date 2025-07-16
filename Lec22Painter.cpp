#include<iostream>
#include<vector>
// #include<algorithm>
using namespace std;
bool minTimeToPaint(vector<int> &arr,int n,int m,int maxAllowedTime){
         int painter=1;int time=0;
        for(int i=0;i<n;i++){
          
            if(time+arr[i]<=maxAllowedTime){
                time+=arr[i];
            }
            else{
                painter++;
                time=arr[i];
            }

        }
      return  painter<=m;


}
int PainterPartition(vector<int> &arr,int n,int m){
    int sum=0,maxVal=INT16_MIN;
    // sort(arr.begin(),arr.end());   
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxVal=max(maxVal,arr[i]);
    }
    
    int ans=-1;
    int st=maxVal;int end=sum;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(minTimeToPaint(arr,n,m,mid)){  ///left
               ans=mid;
               end=mid-1;
        }
        else{ //right
            st=mid+1;
        }
    }
    
}
int main(){
    vector<int>arr={40,30,10,20};
    int n=4;
    int m=2;
    cout<<PainterPartition(arr,n,m);
}