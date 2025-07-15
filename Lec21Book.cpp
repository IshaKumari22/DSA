// #include<iostream>
// #include<vector>
// using namespace std;
// bool isValid( vector<int> &arr,int n,int m,int AllocatedValue){
//     int student=1;int pages=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>AllocatedValue){
//             return false;
//         }
//         if(pages+arr[i]<=AllocatedValue){
//             pages+=arr[i];
//         }else{
//             student++;
//             pages=arr[i];
//         }
//     }
//    return student>m?false:true;
// }
// int pagesAllocated(vector<int> &arr,int n,int m){
//     if(m>n){
//         return -1;
//     }
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     int ans=-1;
//     int st=0,end=sum;
//     while(st<=end){
//         int mid=st +(end-st)/2;
//         if(isValid(arr,n,m,mid))
//         {
//           ans=mid;
//           end=mid-1;
//         }else{

//             st=mid+1;
//         }
//     }
// }
// int main(){
//     vector<int>arr={15,17,20};
//     int n=3;
//     int m=3;
//     cout<<pagesAllocated(arr,n,m);
//     return 0;

// }





#include<iostream>
#include<vector>
using namespace std;
bool isValid(vector<int> &arr,int n,int m,int maxAllocated){
    int students=1;int pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxAllocated){
            return false;
        }
        if(pages+arr[i]<=maxAllocated){
            pages+=arr[i];
        }
        else{
            students++;
            pages=arr[i];
        }
    }
   return students>m?false:true;

}

int AllocatedBooks(vector<int> &arr,int n,int m){
    if(m>n){
        return -1;
    
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum +=arr[i];
    }
    int ans=-1;
    int st=0,end=sum;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isValid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }

    }
}
int main(){
    vector<int>arr={5,7,8,2};
    int n=4;
    int m=3;
    cout<<AllocatedBooks(arr,n,m);
    return 0;
    
}

