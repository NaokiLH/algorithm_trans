/*
  Problem Name:旅行问题
  algorithm tag:单调队列DP
*/

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <unordered_map>
#include <vector>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int INF = 1e9;
typedef pair<int, int> pii;

const int N = 2e6 + 5;

int n;
ll s[N];
int o[N], d[N];
int q[N];
bool s[N];

int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> o[i] >> d[i];
    }

    for (int i = 1; i <= n; i++) {
        s[i] = s[i + n] = o[i] - d[i];
    }
    for (int i = 1; i <= n * 2; i++)
        s[i] += s[i + 1];
}