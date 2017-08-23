//Pushed in Git
#include<iostream>

using namespace std;
 
int MatrixChainMultiplication(int p[], int n)
{
 
    int m[n][n];
 
    int i, j, k, L, mi;
 
    for (i=1; i<n; i++)
        m[i][i] = 0;
 
    for (L=2; L<n; L++)
    {
        for (i=1; i<n-L+1; i++)
        {
            j = i+L-1;
            m[i][j] = INT_MAX;
            for (k=i; k<=j-1; k++)
            {
                mi = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
                if (mi < m[i][j])
                    m[i][j] = mi;
            }
        }
    }
 
    return m[1][n-1];
}
 
int main()
{
	int arr[] = {950, 10, 20, 15, 35, 15, 5, 10, 20, 25630, 35, 15, 5, 10, 20, 25};
    
    int size = sizeof(arr)/sizeof(arr[0]);
 
    cout << "Minimum number of multiplications is: " << MatrixChainMultiplication(arr, size) << endl;
 
    return 0;
}
