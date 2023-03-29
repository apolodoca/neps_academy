#include <iostream>
using namespace std;

int main()
{
    int N;
    int minas[50], campo[50];
    minas[0] == 0;
    minas[N + 1] == 0;//assigning values for scaning later
    cin >> N;
    for (int i = 1; i < N + 1; i++)
    {
        cin >> minas[i];
    }
    for (int i = 1; i < N + 1; i++)
    {
        if (minas[i] == 1 && minas[i + 1] == 1 && minas[i-1] == 1)
        {
            campo[i - 1] = 3;
        }
        
        else if (minas[i +1] == 1 && minas [i -1] == 1  || minas[i] == 1 && minas[i-1] == 1)
        {
            campo[i - 1] = 2;
        }
        else if (minas[i] == 1 && minas[i + 1] == 1)
        {
            campo[i - 1] = 2;
        }
        
        else if (minas[i +1] == 1 || minas [i -1] == 1 || minas[i] == 1)
        {
            campo[i - 1] = 1;
        }
        else{
            campo[i - 1] = 0;
        }
 
        
        
   
    }
    for (int i = 0; i < N; i++)
    {
        cout << campo[i];
    }
    
    
    

    return 0;
}
