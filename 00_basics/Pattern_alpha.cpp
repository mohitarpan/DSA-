#include <iostream>
using namespace std;
int main() {
    int row,col;
    char name='a';
    for(row =1;row<=5;row=row+1){
        for(col=1;col<=5;col=col+1){
            cout<<name<<" ";
        }
        name=name+1;
        cout<<endl;
    }
}
// a a a a a 
// b b b b b 
// c c c c c 
// d d d d d 
// e e e e e 