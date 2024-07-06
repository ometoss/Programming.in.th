#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int arr[] = {1,0,0};
    for(char a:s){
        switch (a)
        {
        case 'A':
            if(arr[0]==1){
                arr[0]=0;
                arr[1]=1;
            }
            else if(arr[1]==1) {
                arr[0]=1;
                arr[1]=0;
            }
            break;
        case 'B':
            if(arr[1]==1){
                arr[1]=0;
                arr[2]=1;
            }
            else if(arr[2]==1){
                arr[1]=1;
                arr[2]=0;
            }
            break;
        default:
            if(arr[0]==1){
                arr[0]=0;
                arr[2]=1;
            }
            else if(arr[2]==1){
                arr[0]=1;
                arr[2]=0;
            }
            break;
        }
    }
    for(int i=0; i < 3;i++){
        if(arr[i]==1) cout << i+1;
    }
}