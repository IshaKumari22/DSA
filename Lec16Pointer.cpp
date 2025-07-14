#include<iostream>
#include<vector>
using namespace std;


    // int a =10;
    // cout<<&a<<endl;


    // int a=10;
    // int *ptr=&a;
    // cout<<ptr<<endl;
    // cout<<&a<<endl;
    // cout<<&ptr<<endl;

    // float price=100.25f;
    // float*ptr=&price;

    // cout<<ptr<<endl;
    // cout<<&price<<endl;
    
    // int** parPtr=&ptr;
    // cout<<&ptr<<endl;
    // cout<<parPtr<<endl;
    
    // int a=10;
    // int* ptr=&a;
    // int** parPtr=&ptr;

    //Dereference operator

    //  int a=10;
    //  int *ptr=&a;
    //  cout<<*(&a)<<endl;
    //  cout<<*(ptr)<<endl;
    //  cout<<*(parPtr)<<endl;
    //  cout<<**(parPtr)<<endl;

    //  cout<<(ptr)<<endl;


    //Null Pointer

    // int** ptr=NULL;
    // cout<<ptr<<endl;

    // int a=5;
    // int* p=&a;
    // int **q=&p;

    // cout<<*p<<endl;
    // cout<<**q<<endl;
    // cout<<p<<endl;
    // cout<<*q<<endl;


// void changeA(int *ptr)  //pass by reference using alias
// {
//     *ptr=20;

// }
// int main(){
//     int a=10;
//     changeA(&a);
//     cout<<"Inside main fnx:"<<a<<endl;
//     return 0;



// void changeA(int &b){      //pass by reference using alias
//     b=20;

// }

// int main()
// {
//  int a=10;
//  changeA(a);
//  cout<<"Inside main fnx :"<<a<<endl;
//  return 0;
// int main(){
//     int arr[]={1,2,3,4,5};
//     cout<<*arr<<endl;  //pointer
//     return 0;

// int main(){
// int a=10;
//  int *ptr=&a;
//  cout<<ptr<<endl;
// //  ptr++;
// ptr--;
//  cout<<ptr<<endl;
// }


// int main(){
//     int a=10;
//     int *ptr=&a;
//     cout<<ptr<<endl;
//     ptr=ptr+2;
//     cout<<ptr<<endl;
//     return 0;
// }


// int main(){
//     int arr[]={1,2,3,4,5};
//     cout<<*arr<<endl;
//     cout<<*(arr+1)<<endl;
//     cout<<*(arr+2)<<endl;
//     cout<<*(arr+3)<<endl;
//     cout<<*(arr+4)<<endl;

//     return 0;
// }


// int main(){
//     int arr[]={1,2,3,4,5};

//     int* ptr2; //100
//     int* ptr1=ptr2 +3; //112
//     cout<<ptr1-ptr2<<endl;
//     return 0;
// }

// int main(){
//     int* ptr1;
//     int* ptr2;
//     cout<<ptr1<<endl;
//     cout<<ptr2<<endl;
//     cout<<(ptr1>ptr2)<<endl;
//     return 0;
// }

//QUIZ
// Q1
int main(){

    int arr[]={10,20,30,40};
    int* ptr=arr;
    cout<<*(ptr +1)<<endl;
    cout<<*(ptr +3)<<endl;
    ptr++;
    cout<<*ptr<<endl;

    return 0;
}
