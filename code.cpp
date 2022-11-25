#include <bits/stdc++.h>
using namespace std;
int max_ans = INT_MIN;
int min_ans = INT_MAX;
vector<int> vmax;
vector<int> vmin;
const int n = 5; // For creating a 10X10 matrix
void BFS(int a[n][n], int visited[n][n], int x, int y, int sum, int finalx, int finaly, vector<int> v)
{
    if (x < 0 || y < 0 || x > n - 1 || y > n - 1)
    {
        return;
    }
    sum += a[x][y];
    v.push_back(a[x][y]);
    visited[x][y] = 1;
    if (x == finalx && y == finaly)
    {
        if (sum > max_ans)
        {
            max_ans = sum;
            vmax = v;
        }
        if (sum < min_ans)
        {
            min_ans = sum;
            vmin = v;
        }
        visited[x][y] = 0;
        return;
    }
    if (visited[x + 1][y] == 0)
    {
        BFS(a, visited, x + 1, y, sum, finalx, finaly, v);
    }
    else if (visited[x][y + 1] == 0)
    {
        BFS(a, visited, x, y + 1, sum, finalx, finaly, v);
    }
    else if (visited[x - 1][y] == 0)
    {
        BFS(a, visited, x - 1, y, sum, finalx, finaly, v);
    }
    else if (visited[x][y - 1] == 0)
    {
        BFS(a, visited, x, y - 1, sum, finalx, finaly, v);
    }
    visited[x][y] = 0;
}
int main()
{
    int x = 0, y = 0;
    int finalx = 0, finaly = 0;
    int a[n][n]; // A 10x10 matrix (n is a global variable)
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int r = rand() % (25 - -25 + 1) + -25;
            a[i][j] = r;
        }
    }

    int visited[n][n]; // Initially visited matrix is initialized with 0
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }
    // Taking input from user
    cout << "Initial value of x is:";
    cin >> x;
    cout << "Initial value of y is:";
    cin >> y;
    cout << "Final value of x is:";
    cin >> finalx;
    cout << "Final value of y is:";
    cin >> finaly;
    // Calling the breadth first search function
    BFS(a, visited, x, y, 0, finalx, finaly, v);
    cout << "Maximum value:" << max_ans << endl;
    cout << "The path is as follows:";
    for (auto m : vmax)
        cout << m << "->";
    cout << endl;
    cout << "Minumum value:" << min_ans << endl;
    cout << "The path is as follows:";
    for (auto m : vmin)
        cout << m << "->";
    return 0;
}
