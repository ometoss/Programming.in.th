#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    for(int i=0; i<str.size(); i++){
        if(i==0){
            cout << "..#..";
        }
        else if((i+1)%3==0){
            cout << ".*..";
        }
        else{
            cout << ".#..";
        }
    }
    cout << endl;
    for(int i=0; i<str.size(); i++){
        if(i==0){
            cout << ".#.#.";
        }
        else if((i+1)%3==0){
            cout << "*.*.";
        }
        else{
            cout << "#.#.";
        }
    }
    cout << endl;
    for(int i=0; i<str.size(); i++){
        if(i==0){
            cout << "#." << str[i] << ".#";
        }
        else if((i+1)%3==0){
            cout <<  "*." << str[i] << ".*";
        }
        else if(i%3==0){
            cout <<  "." << str[i] << ".#";
        }
        else {
            cout <<  "." << str[i] << ".";
            if(i+1==str.size()) cout << "#";
        }
    }
    cout << endl;
    for(int i=0; i<str.size(); i++){
        if(i==0){
            cout << ".#.#.";
        }
        else if((i+1)%3==0){
            cout << "*.*.";
        }
        else{
            cout << "#.#.";
        }
    }
    cout << endl;
    for(int i=0; i<str.size(); i++){
        if(i==0){
            cout << "..#..";
        }
        else if((i+1)%3==0){
            cout << ".*..";
        }
        else{
            cout << ".#..";
        }
    }
}