//taking user input

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    for(int j=0;j<n;j++){
        cout<<array[j];
    }

    return 0;
}