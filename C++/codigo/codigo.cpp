#include <iostream>

using namespace std;
int main(){
    int N, NFinal = 0;
    cin >> N;
    int *bin = new int[N];
  

    for (int i = 0; i < N; i++)
    {
        cin >> bin[i];
        
    }
    for (int i = 0; i < N - 2; i++)
    {
        if (bin[i] == 1 && bin[i + 1] == 0 && bin[i + 2] == 0)
        {
            NFinal++;
            
        }
        
    }
    
    cout << NFinal;
}