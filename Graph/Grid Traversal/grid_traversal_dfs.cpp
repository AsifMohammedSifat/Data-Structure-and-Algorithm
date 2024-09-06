/**
 * All Praise to Allah
 * ---------------------
 * Author: Asif Mohammed Sifat
 * Created: 2024-09-06   16:40:20
 * Source:
 */
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int grid[100][100];
int vis[100][100];
int dist[100][100];
int row, col;

vector<pair<int, int>> child = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j)
{
    return i < row && i >= 0 && j < col && j >= 0;
}

void dfs(int si, int sj)
{
    cout << grid[si][sj] << nl;
    vis[si][sj] = 1;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + child[i].first;
        int cj = sj + child[i].second;

        if (vis[ci][cj] == 0 && valid(ci, cj))
        {
            dfs(ci,cj);

        }
    }
}

int main()
{
    memset(vis, 0, sizeof(vis));
    memset(dist, 0, sizeof(dist));

    cin >> row >> col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> grid[i][j];
        }
    }
    dfs(0, 0);
    return 0;
}
