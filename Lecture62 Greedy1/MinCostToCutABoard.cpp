/*
Problem 1: Minimum Cost to Cut a Board into Squares

Problem Statement:
You are given a board of length M and width N. The task is to break this board into M * N squares such that the cost of breaking is minimized. The cutting cost for each edge will be provided in two arrays X[] and Y[].

- X[] represents the cutting costs for vertical edges.
- Y[] represents the cutting costs for horizontal edges.

You need to choose a sequence of cuts such that the total cost is minimized. Your goal is to return the minimized cost.

Input:
- M = 6  // Length of the board
- N = 4  // Width of the board
- int X[] = {2, 1, 3, 1, 4};  // Cutting costs for vertical edges
- int Y[] = {4, 1, 2};        // Cutting costs for horizontal edges

Output:
- 42

Example:
Given the inputs:
- M = 6
- N = 4
- int X[] = {2, 1, 3, 1, 4};
- int Y[] = {4, 1, 2};

The minimum cost to cut the board into squares is 42.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;
bool cmp(int x, int y)
{
    return x > y;
}

ll mincosttocut(int n, int m, vector<ll> &hor, vector<ll> ver)
{
    sort(hor.begin(), hor.end(), cmp);
    sort(ver.begin(), ver.end(), cmp);

    int hz = 1;
    int vr = 1;
    int h = 0;
    int v = 0;
    ll ans = 0;
    while (h < hor.size() && v < ver.size())
    {
        if (ver[v] > hor[h])
        {
            ans += ver[v] * vr;
            hz++;

            v++;
        }
        else
        {
            ans += hor[h] * hz;
            vr++;

            h++;
        }
    }

    while (h < hor.size())
    {
        ans += hor[h] * hz;
        vr++;

        h++;
    }

    while (v < ver.size())
    {
        ans += ver[v] * vr;
        hz++;

        v++;
    }
    return ans;
}

int main()
{
    int n, m;
    vector<ll> vertical, horizontal;
    cout << "ENTER THE VALUE OF m:";
    cin >> m;
    cout << "ENTER THE VALUE OF n:";
    cin >> n;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        vertical.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        horizontal.push_back(x);
    }


    cout<<mincosttocut(n,m,horizontal,vertical)<<endl;;

    return 0;
}