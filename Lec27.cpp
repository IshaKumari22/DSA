#include<iostream>
#include<vector>
#include<list>
using namespace std;
// int main(){
//     vector<int>vec;
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     vec.push_back(5);
//     vec.emplace_back(6);

//     vec.pop_back();
//     for (int val:vec){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     cout<<"val at idx 2 "<<vec[2]<<" or "<<vec.at(2)<<endl;
//     cout<<"front "<<vec.front()<<endl;
//     cout<<"back "<<vec.back()<<endl;
//     return 0;


//     // cout<<vec.size()<<endl;
//     // cout<<vec.capacity()<<endl;

//     return 0;
// }



// int main(){
//        vector<int>vec={1,2,3,4,5};

//        for(int val:vec){
//         cout<<val<<" ";
//        }
//        cout<<endl;
//        return 0;
// }


// int main(){
//     vector<int>vec(10,-1);
//     for(int val:vec){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


// int main(){
//     vector<int>vec1={1,2,3,4,5};
//     vector<int>vec2(vec1);

//     for(int val : vec2){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// int main(){
    // vector<int>vec={1,2,3,4,5};
    // vec.erase(vec.begin()+2);
    // vec.erase(vec.begin()+1,vec.begin()+3);
    // vec.insert(vec.begin()+2,100);
    // vec.clear();
//     for(int val : vec){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     cout<<"is empty :"<<vec.empty()<<endl;
//     cout<<"size :"<<vec.size()<<endl;
//     cout<<"capacity :"<<vec.capacity()<<endl;

//     return 0;
// }







//Iterators

// int main(){
//     vector<int>vec={1,2,3,4,5};
//     cout<<"vec.begin :"<<*(vec.begin())<<endl;
//     cout<<"vec.end :"<<*(vec.end())<<endl;

// }


// int main(){
//     vector<int>vec={1,2,3,4,5};
//     vector<int>::iterator it;
//     for(it=vec.begin();it !=vec.end();it++){
//         cout<<*(it)<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

 

//For reversing vector

// int main(){
//     vector<int>vec={1,2,3,4,5};
//     for(auto it=vec.rbegin();it!=vec.rend();it++){
//         cout<<*(it)<<" ";
//     }
//     cout<<endl;
//     return 0;
// }







// LIST

// int main(){
//     list<int>l;
//     l.emplace_back(1);
//     l.push_back(2);
//     l.emplace_front(3);
//     l.push_front(5);
//     l.pop_back();
//     l.pop_front();
//     for(int val:l){
//         cout<<val<<" ";
//     }
//     cout<<endl;

//     return 0;
// }







//DEQUE
// #include<deque>
// int main(){
//     deque<int>d={1,2,3,4,5};
//     for(int val :d){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     cout<<d[2]<<endl;
//     return 0;
// }




// PAIR OF PAIR


// int main(){
//     pair<int,pair<char,int>>p={1,{'a',3}};
    

//     cout<<p.first<<endl;
//     cout<<p.second.second<<endl;

//     return 0;
// }


// VECTOR OF PAIR

// int main(){
//     vector<pair<int,int>>vec={{1,2},{2,3},{3,4}};
//     vec.push_back({4,5});
//     vec.emplace_back(4,5);
//     for(auto p:vec){
//         cout<<p.first<<" "<<p.second<<endl;
//     }
//     return 0;
    

// }




//STACK

#include<stack>

// int main(){
//     stack<int>s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     // cout<<"top = "<<s.top()<<endl;
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     cout<<endl;
//     return 0;
// }




// int main(){
//     stack<int>s;
//     s.push(1);
//     s.push(2);
//     s.push(3);

//     stack<int>s2;
//     cout<<"s size before "<<s.size()<<endl;
//     cout<<"s2 size before "<<s2.size()<<endl;

//     s2.swap(s);
//     cout<<"s size after "<<s.size()<<endl;
//     cout<<"s2 size after "<<s2.size()<<endl;

// }





// QUEUE

// #include<queue>
// int main(){
//     queue<int>q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
//     cout<<endl;
// }




//PRIORITY_QUEUE

// #include<queue>
// int main(){
//     priority_queue<int>q;
//     q.push(5);
//     q.push(3);
//     q.push(10);
//     q.push(4);
//     while(!q.empty()){
//         cout<<q.top()<<" ";
//         q.pop();
//     }
//     cout<<endl;
//     return 0;

// }


// #include<queue>
// int main(){
//     priority_queue<int,vector<int>,greater<int>>q;
//     q.push(5);
//     q.push(3);
//     q.push(10);
//     q.push(4);
//     while(!q.empty()){
//         cout<<q.top()<<" ";
//         q.pop();
//     }
//     cout<<endl;
//     return 0;

// }




//MAP

// #include<map>
// int main(){
//     map<string,int>m;
//     m["tv"]=100;
//     m["laptop"]=100;
//     m["headphones"]=50;
//     m["tablets"]=120;
//     m["watch"]=50;
//     s.insert({"camera",260});
//     s.emplace("abcd",260);
//     s.erase("tv");

//     for(auto p:m){
//         cout<<p.first<<" "<<p.second<<endl;
//     }
//     cout<<"Count ="<<s.count("laptop")<<endl;
//     cout<<"Value of laptop "<<m["laptop"]<<endl;

//     if(s.find("camera")!=s.end()){
//         cout<<"Found\n";
//     }
//     else{
//         cout<<"Not found\n";
//     }
//     return 0;
// }




//MULTI MAP
// #include<map>
// int main(){
//     multimap<string,int>m;
//     s.emplace("tv",111);
//     s.emplace("tv",111);
//     s.emplace("tv",111);
//     s.emplace("tv",111);
//     s.erase(s.find("tv"));
//     for(auto p:m){
//         cout<<p.first<<" "<<p.second<<endl;
//     }
//     return 0;

// }



//UNORDERED MAP
// #include<unordered_map>
// int main(){
//     unordered_map<string,int>m;
//     s.emplace("tv",111);
//     s.emplace("laptop",111);
//     s.emplace("fridge",111);
//     s.emplace("watch",111);
//     for(auto p:m){
//         cout<<p.first<<" "<<p.second<<endl;
//     }
//     return 0;

// }



//SET

// #include<set>
// int main(){
//     set<int>s;
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.insert(5);

//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     cout<<s.size()<<endl;
//     for(auto p:s){
//         cout<<p<<" ";
//     }
//     return 0;

// }



//LOWER BOUND


// #include<set>
// int main(){
//     set<int>s;
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.insert(5);
//     s.insert(6);


   
//     cout<<"lower bound="<<*(s.lower_bound(4))<<endl;
//     cout<<"upper bound="<<*(s.upper_bound(4))<<endl;

//     for(auto p:s){
//         cout<<p<<" ";
//     }
//     return 0;

// }




//MULTI_SET

// #include<set>
// int main(){
//     multiset<int>s;
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.insert(5);
//     s.insert(6);

//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
   
   
//     for(auto p:s){
//         cout<<p<<" ";
//     }
//     return 0;

// }




//UNORDERED_SET

// #include<unordered_set>
// int main(){
//     unordered_set<int>s;
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.insert(5);
//     s.insert(6);

//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
   
   
//     for(auto p:s){
//         cout<<p<<" ";
//     }
//     return 0;

// }






//SORTING ALGORITHM
#include<algorithm>
#include<vector>
// int main(){
//      vector<pair<int,int>>vec={{3,1},{2,1},{7,1},{5,2}};
//     sort(vec.begin(),vec.end());
//     // vector<int>vec={3,5,1,8,2};
//     //for descending
//     // sort(vec.begin(),vec.end(),greater<int>());


//     //for ascending
//     // int arr[5]={3,5,1,8,2};
//     // sort(arr,arr+5);
//     // for(int val: vec){
//     //      cout<<val<<" ";
//     // }

//     for(auto p: vec){
//          cout<<p.first<<" "<<p.second<<" "<<endl;
//     }
//     cout<<endl;
//     return 0;
// }


// For comparing 2nd element

// bool comparator(pair<int,int>p1,pair<int,int>p2){
//     if(p1.second<p2.second) return true;
//     if(p1.second>p2.second) return false;

//     if(p1.first<p2.first) return true;
//     else return false;
// }
// int main(){
//     vector<pair<int,int>>vec={{3,1},{2,1},{7,1},{5,2}};
//     sort(vec.begin(),vec.end(),comparator);
    
//     for(auto p: vec){
//          cout<<p.first<<" "<<p.second<<" "<<endl;
//     }
//     cout<<endl;
//     return 0;

// }






//REVERSE

// int main(){
//     vector<int>vec={1,2,3,4,5};
//     reverse(vec.begin()+1,vec.begin()+3);
//     for(int val:vec){
//         cout<<val<<endl;
//     }

// }



//NEXT PERMUTATION

// int main(){
//     string s="bca";
//     next_permutation(s.begin(),s.end());
//     prev_permutation(s.begin(),s.end());
//     cout<<s<<endl;
//     return 0;
// }


//MIN MAX

// int main(){
//     cout<<max(4,5)<<" "<<min(6,10)<<endl;
// }


//SWAP

// int main(){
//     int a=5,b=10;
//     swap(a,b);
//     cout<<"a="<<a<<" "<<"b="<<b<<" ";
// }



// Max element and Min element

// int main(){
//     vector<int>vec={1,2,3,4,5};
//     cout<<*(max_element(vec.begin(),vec.end()))<<endl;
//     cout<<*(min_element(vec.begin(),vec.end()))<<endl;

// }



// Binary Search
//  int main(){
//     vector<int>vec={1,2,3,4,5};
//     cout<<binary_search(vec.begin(),vec.end(),8);
// }

 

//COUNT SET BITS

int main(){
    int n=15;
    long int n2=15;
    long long int n3=15;
    cout<< __builtin_popcount(n)<<endl;
    cout<< __builtin_popcountl(n2)<<endl;
    cout<< __builtin_popcountll(n3)<<endl;

   


}
