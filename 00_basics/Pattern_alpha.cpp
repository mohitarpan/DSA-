#include <iostream>
using namespace std;
// int main() {
//     int row,col;
//     char name='a';
//     for(row =1;row<=5;row=row+1){
//         for(col=1;col<=5;col=col+1){
//             cout<<name<<" ";
//         }
//         name=name+1;
//         cout<<endl;
//     }
// }
// a a a a a 
// b b b b b 
// c c c c c 
// d d d d d 
// e e e e e 


// int main() {
//     // int row,col;
//     // char name='a';
//     for(int row =1;row<=5;row=row+1){
//         for(char col='a';col<='e';col=col+1){
//             cout<<col<<" ";
//         }
//         // name=name+1;
//         cout<<endl;
//     }
// }
// a b c d e 
// a b c d e 
// a b c d e 
// a b c d e 
// a b c d e 

// int main() {
//     // int row,col;
//     int name=1;
//     for(int row =1;row<=5;row=row+1){
//         for(int col=1;col<=5;col=col+1){
//             cout<<name<<" ";
//              name=name+1;
//         }
       
//         cout<<endl;
//     }
// }
// 1 2 3 4 5 
// 6 7 8 9 10 
// 11 12 13 14 15 
// 16 17 18 19 20 
// 21 22 23 24 25 
// int main() {
//     // int row,col;
//     // int name=1;
//     for(int row =1;row<=5;row=row+1){
//         for(int col=1;col<=5;col=col+1){
//             cout<<(row-1)*5+col<<" ";
//             //  name=name+1;
//         }
       
//         cout<<endl;
//     }
// }
// 1 2 3 4 5 
// 6 7 8 9 10 
// 11 12 13 14 15 
// 16 17 18 19 20 
// 21 22 23 24 25  without third variable 

// int main() {
//     int row,col;
//     for(row =1;row<=5;row=row+1){
//         for(col=1;col<=row;col=col+1){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// int main() {
//     int row,col;
//     // int count=1;
//     for(row =1;row<=5;row=row+1){
//         for(col=1;col<=row;col=col+1){
//             cout<<col<<" ";
            
//         }
//         cout<<endl;
//     }
// }
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
int main() {
    int row,col;
    // int count=1;
    for(row =1;row<=5;row=row+1){
        for(col=1;col<=row;col=col+1){
            cout<<col<<" ";
            
        }
        cout<<endl;
    }
}
