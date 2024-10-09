#include<iostream>
using namespace std;

int main(){
    //declear
    // int number[15]; array declared
    // cout<<"Hello  prince";
    // int arr[5]={1,2,3,4,5};
    // int arr[6]={1,2,3};// It automatically take the array size no need to mention first
    // if we take a size size and give element only 3 then rest of the element would be 0 or randoom values 1 2 3 0 0 0
    // how to initialize all elements as zero 
    // int arr[5]={0};


//how to take this from user 
    //  int arr[6];
    //  for(int i=0;i<6;i++){
    //     cin>>arr[i];
    //  } 


    // for(int i= 0;i<6;i++)
    // cout<<arr[i]<<" ";

// how to find a size of array
int arr[5]={1,2,3,4,5};
cout<<sizeof(arr)/sizeof(arr[0]);// it will calculate number of elements
    return 0;
}