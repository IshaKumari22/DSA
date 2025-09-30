#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
// int main(){
//     char str[]={'a','b','c','\0'};
//     char str1[]="Hello";   //String literals
//     cout<<strlen(str1)<<endl;
//     cout<<str1[4]<<endl;
//     return 0;
// }





// int main(){
//    char str[100];
//    cout<<"Enter char array:";
//    cin>>str;
//    cout<<"Output: "<<str<<endl;
//    return 0;
// }



// int main(){
//     char str[100];
//     cout<<"enter char array:";
//     cin.getline(str,100);
//     cout<<"Output :"<<str<<endl;
// }




//Delimiters

// int main(){
//     char str[100];
//     cout<<"enter char array:";
//     cin.getline(str,100,'$');
//     cout<<"Output :"<<str<<endl;
//     return 0;
// }




//For each


// int main(){
//     char str[11];
//     cout<<"enter char array: ";
//     cin.getline(str,11);
//     for(char ch :str){
//         cout<<ch<<" ";

//     }
//     cout<<endl;
//     return 0; 
// }


//For loop

// int main(){
//     char str[]="apna college";
//     int len=0;
//     for(int i=0;i<str[i] !='\0';i++){
//         len++;
//     }
//     cout<<"Length of string :"<<len<<endl;
//     return 0;
// }



// Strings in C++

// int main(){
//     string str="apna college";
//     cout<<str<<endl;
//     str="Hello";
//     cout<<str<<endl;
    
//     return 0;
// }



//Add in string

// int main(){
//     string str1="apna";
//     string str2="college";
//     string str3=str1+str2;
//     cout<<str3;
//     return 0;
// }




//Equal in string


// int main(){
//     string str1="shradha";
//     string str2="shradha";
//     cout<<(str1==str2);
//     cout<<endl;
// }




//Greater or Lesser

//This will give 0 because k comes before s in that case s is greater means str1

// int main(){
//     string str1="shradha";
//     string str2="khapra";
//     cout<<(str1<str2);
//     cout<<endl;
// }




//Length of string

//  int main(){
//     string str1="shradha";
//     cout<<str1.length()<<endl;
// }




// Input

// int main(){
//     string str;
//     cin >>str;
//     cout<<"Output :"<<str;
//     return 0;
// }




//Getline

// int main(){
//     string str;
//     getline(cin,str);
//     cout<<"Output :"<<str;
//     return 0;
// }




// Loops in a string


//For loop
// int main(){
//     string str="apna college.";
//     for(int i=0;i<str.length();i++){
//         cout<<str[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }



//For each loop

// int main(){
//     string str="apna college.";
//     for(char ch:str)
// {
//     cout<<ch<<" ";
// }    cout<<endl;
//     return 0;
// }



//Reverse a String


int main(){
    string str="apna college.";
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    return 0;
}
