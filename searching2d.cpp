#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int element;
    cin>>element;
    bool flag = false;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (arr[i][j]==element){
                flag=true;
                cout<<"element found at index "<<i<<" "<<j<<endl;
                break;
            }
        }
        if (flag==true){
            break;
        }
    }

    return 0;
}