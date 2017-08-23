//Pushed in Git

#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int lcs(string X, string Y, int m, int n )
{
   int i, j, l;
   int L[m+1][n+1];
   
   for (i=0; i<=m; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;
  
       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;
  
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
   l = L[m][n];
   i = m, j = n;
   char lcstring[l];
   while (i > 0 && j > 0)
   {
      if (X[i-1] == Y[j-1])
      {
          lcstring[l-1] = X[i-1];
          i--; j--; l--;    
      }
      else if (L[i-1][j] > L[i][j-1])
         i--;
      else
         j--;
   }
   cout << "LCS of " << X << " and " << Y << " is: " << lcstring << endl;
   return L[m][n];
}


  
int main()
{
  string X = "";
  string Y = "";
  cin >> X;
  cin >> Y;
  
  int m = X.length();
  int n = Y.length();
  cout << "Length of LCS: "<< lcs(X, Y, m, n) << endl;
  
 
  return 0;
}
