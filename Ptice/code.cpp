#include <iostream>
#include <string>
using namespace std;

int main() {
    int N,cA=0,cB=0,cG=0;
    string str;
    string Adrian = "ABC" , Bruno = "BABC" , Goran = "CCAABB";
    cin >> N; cin >> str;
    for(int i=0; i<N; i++) {
        if(str[i]==Adrian[i%3]) cA++;
        if(str[i]==Bruno[i%4]) cB++;
        if(str[i]==Goran[i%6]) cG++;
    }
    if(cA > cB && cA > cG) {
        cout << cA << "\n" << "Adrian";
    }
    else if(cB > cA && cB > cG) {
        cout << cB << "\n" << "Bruno";
    }
    else if(cG > cB && cG > cA) {
        cout << cG << "\n" << "Goran";
    }
    else {
        cout << cA << "\n";
        cout << "Adrian" << endl;
        cout << "Bruno" << endl;
        cout << "Goran" << endl;
    }
}