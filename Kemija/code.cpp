#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    string str;
    getline(cin,str);
    for(int i=0; i < str.size(); i++) {
        cout << str[i];
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            i += 2;
        }
    }
}