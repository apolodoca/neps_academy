#include <iostream>
#include <iomanip>
#include <math.h>



using namespace std;

int main()
{
    float base, expoente;
    cin >> base >> expoente;
    cout << fixed << setprecision(4) << pow(base, expoente);
}
