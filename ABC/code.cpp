#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int arr[3],arr2[3];
    string str;
    for(int i=0; i<3;i++){
        cin >> arr[i];
    }
    cin >> str;
    sort(arr,arr+3);
    int j=0;
    for(char a:str){
        switch (a)
        {
        case 'A':
            arr2[j]=0;
            break;
        case 'B':
            arr2[j]=1;
            break;
        default:
            arr2[j]=2;
            break;
        }
        j++;
    }
    for(int i=0; i<3;i++){  
        cout << arr[arr2[i]] <<" ";
    }
}