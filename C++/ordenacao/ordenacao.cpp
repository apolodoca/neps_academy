#include <iostream>

using namespace std;

int main(){
    int N, buffer;
    int arr[10000];
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];//take input
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > arr[i+1] && i < N - 1)
        {
            buffer = arr[i];
            arr[i] = arr[i+1];
            arr[i + 1] = buffer;
            i = 0;
        }
        else if (arr[i] < arr[i-1] && i > 0)
        {
            buffer = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = buffer;
            i = 0;
        }
        
    }
    
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}
