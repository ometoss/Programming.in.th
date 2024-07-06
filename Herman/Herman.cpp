#include <iostream>
#include <iomanip>
#include <numbers>
#include <cmath>
using namespace std;

int main(){
    int R;
    double T,E;
    T = numbers::pi*R*R;
    E = 2*R*R;
    cout << fixed << setprecision(6) << T << endl << E;
}