// #include<iostream>
// using namespace std;
// int main(){
//     int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     int rows=4;
//     int cols=3;
//     matrix[2][1]=18;
//     cout<<matrix[2][1]<<endl;
//     return 0;

// }



// For loops in matrix

//  #include<iostream>
// using namespace std;
// int main(){
//     int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     int rows=4;
//     int cols=3;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;

// }



// Taking input in matrix

// #include<iostream>
// using namespace std;
// int main(){
//     int matrix[4][3];
//     int rows=4;
//     int cols=3;
    
//     //input
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cin>>matrix[i][j];
//         }
//     }

//     //output
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout<<matrix[i][j]<<" ";

//         }
//         cout<<endl;
//     }
//     return 0;
// }







// Linear search in 2D array

#include<iostream>
using namespace std;
// bool linearsearch(int matrix[4][3],int rows,int cols,int key){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             if(matrix[i][j]==key){
//                 return true;
//             }
//         }
//     }
//     return false;

// }

// pair<int,int> find(int matrix[4][3],int rows,int cols,int key){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             if(matrix[i][j]==key){
//                 return {i,j};
//             }
//         }
//     }
//     return {-1,-1};
// }


// int main(){
//     int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     int rows=4;
//     int cols=3;
//     pair<int,int> p = find(matrix,rows,cols,89);
//     if(p.first!=-1 && p.second!=-1){

//         cout<<"element found at index pair:" <<p.first <<","<<p.second;
//     }

    
//     else{
//         cout<<"element not found :-1,-1"<<endl;
//     }
    
//     return 0;
// }







// Maximum row sum


// #include<iostream>
// using namespace std;
// int getMaxSum(int mat[3][3],int rows,int cols){
//     int maxRowSum=INT_MIN;
//     for(int i=0;i<rows;i++){
//         int rowSumI=0;
//         for(int j=0;j<cols;j++){
//             rowSumI+=mat[i][j];
//         }
//         maxRowSum=max(maxRowSum,rowSumI);
//     }
//     return maxRowSum;
// }
// int main(){
//     int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int rows=3;
//     int cols=3;
//     cout<<getMaxSum(matrix,rows,cols);
// }


// Maximum column sum


// #include<iostream>
// using namespace std;
// int colmaxsum(int mat[3][4],int rows,int cols){
//     int maxSum=INT_MIN;
//     for(int i=0;i<cols;i++){
//         int colSumI=0;
//         for(int j=0;j<rows;j++){
//             colSumI+=mat[j][i];
//         }
//         maxSum=max(maxSum,colSumI);
//     }
//     return maxSum;
// }
// int main(){
//     int matrix[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//     int rows=3;
//     int cols=4;
//     cout<<colmaxsum(matrix,rows,cols);
// }







// Diagonal Sum

// #include<iostream>
// using namespace std;
// int diagonalSum(int mat[4][4],int n)  //O(n^2)
// {
    // int sum=0;    O(n^2)
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++){
    //         if(i==j){
    //             sum+=mat[i][j];
    //         }
    //         else if(j==n-1-i){
    //             sum+=mat[i][j];
    //         }

    //     }
    // }
    // return sum;


    // O(n)

//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=mat[i][i];

//         if(i!=n-1-i){
//             sum+=mat[i][n-1-i];
//         }
//     }
//     return sum;
// }
// int main(){
//     int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//     int n=4;
//     cout<<diagonalSum(matrix,n);
// }




// 2D Vector

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>mat={{1,2,3},{4,5,6,10,11},{7,8,9}};


    // rows=>mat.size();
    // cols=>mat[i].size();

    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}