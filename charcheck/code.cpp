#include <iostream>
using namespace std;

int main(){
    string str;
    bool upper = false;
    bool lower = false;
    cin >> str;
    for(char c : str){
        if(isupper(c)) upper = true;
        else lower = true;
    
    }
    if(upper==true & lower==true) cout << "Mix";
    else{
        if(upper) cout << "All Capital Letter";
        else cout << "All Small Letter";
    }
}