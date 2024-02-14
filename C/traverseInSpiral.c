/*
Given an integer matrix of size N x N. Traverse it in a spiral form.

Format:
Input:
The first line contains N, which represents the number of rows and columns of a matrix. The next N lines contain N values, each representing the values of the matrix.

Output:
A single line containing integers with space, representing the desired traversal.

Constraints: 0 < N < 500
Example 1:
Input:
3
1 2 3
4 5 6
7 8 9

Output:
1 2 3 6 9 8 7 4 5
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    int a[n][n], col=n, row=n;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
          cin>>a[i][j];
    }
    
    int k = 0, l = 0;
        
    while (k < row and l < col){
        
        for (int i = l; i < col; i++)
            cout<<a[k][i]<<" ";
        k++;
        
        for (int i = k; i < row; i++)   
            {
                cout<<a[i][n - 1]<<" ";
                cout << "index: " << n-1 << endl;
            }
        col--;
    
        if (k < row){
            for (int i = col - 1; i >= l; i--)
                cout<<a[n - 1][i]<<" ";
            row--;
        }
            
        if (l < col){
            for (int i = row - 1; i >= k; --i)
              cout<<a[i][l]<<" ";
            l++;
        }
    }
    
    return 0;
}