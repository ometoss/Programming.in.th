#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main(){
    int R;
    cin >> R;
    double T = M_PI*R*R;
    double  E = 2*R*R;
    cout << fixed << setprecision(6) << T << endl << E;
}