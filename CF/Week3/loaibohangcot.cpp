// Let a matrix of size mxn. remove the row and column with the largest sum from the matrix. If there are many rows and columns that have the same sum and are all the largest, priority is to remove the row and column with the smaller index. (Remove the row with the largest sum first, then calculate and remove the column with the largest sum later).

/*
Input:
3 5
2 5 6 3 4
7 6 4 2 5
3 4 5 3 2
*/
/* Output:
2 5 3 4
3 4 3 2
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    vector<int> sumRow(n, 0);
    vector<int> sumCol(m, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            sumRow[i] += a[i][j];
            sumCol[j] += a[i][j];
        }
    }
    int maxRow = *max_element(sumRow.begin(), sumRow.end());
    int maxCol = *max_element(sumCol.begin(), sumCol.end());
    for (int i = 0; i < n; i++)
    {
        if (sumRow[i] == maxRow)
        {
            for (int j = 0; j < m; j++)
            {
                sumCol[j] -= a[i][j];
            }
        }
    }
    for (int j = 0; j < m; j++)
    {
        if (sumCol[j] == maxCol)
        {
            for (int i = 0; i < n; i++)
            {
                sumRow[i] -= a[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (sumRow[i] != 0)
        {
            for (int j = 0; j < m; j++)
            {
                if (sumCol[j] != 0)
                {
                    cout << a[i][j] << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}