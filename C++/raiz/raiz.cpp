#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int N;
    cin >> N;
    float* base = new float[N];
    
    for (int i = 0; i < N; i++)
    {
        cin >> base[i];
    }
     for (int i = 0; i < N; i++)
    {
        cout << fixed  << setprecision(4) << sqrt(base[i]);
    }
}