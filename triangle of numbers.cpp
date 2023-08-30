#include <iostream>
using namespace std;

int main()
{
    int i, j, k, N;
   
    cin >> N;
    for (i = 1; i <= N; i++) 
    {
        k = N- i;
        while (k-- > 0)
            cout << " ";
        for (j = i; j < 2 * i - 1; j++)
            cout << j;
        for (j = 2 * i - 1; j > i - 1; j--)
            cout << j;
        cout << endl;
    }
}