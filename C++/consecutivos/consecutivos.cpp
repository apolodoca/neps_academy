#include <iostream>

using namespace std;
int main(){
    int N, consecutivos = 0, maior = 0;//variavel consecutivos
    cin >> N;
    int *numero = new int[N];
    int *cons = new int[N];//array consecutivos

  

    for (int i = 0; i < N; i++)//input
    {
        cin >> numero[i];
        
    }
    for (int i = 0; i < N - 1; i++)//leitura
    {
        if (numero[i] == numero[i + 1] )
        {
            consecutivos++;
            cons[i] = consecutivos;
        }
        else
        {
            consecutivos = 0;
        }
        
        
    }
    for (int i = 0; i < N; i++)
    {
        if (cons[i] > maior)
        {
            maior = cons[i];

        }
        
    }
    
    maior++;
    cout << maior;
}