#include <iostream>
using namespace std;
int main(){
    int bandeijas, latas, copos;
    int quebrados = 0;
    cin >> bandeijas;
    for (int i = 1; i <= bandeijas; i++)
    {
        cin>> latas >> copos;
      
        if (latas > copos)
        {
      
            quebrados += copos;
        }
        
    }
    cout << quebrados;


}