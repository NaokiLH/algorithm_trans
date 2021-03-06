#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>
#include <map>
#include <unordered_map>
#include <cmath>
#include <cstdio>
#include <vector>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int INF = 1e9;
typedef pair<int,int> pii;
const int N = 1e5 + 50;
int c[N];
int n;
int a[N];
int lowbit(int x)
{
    return x & -x;
}

void add(int x,int v)
{
    for (int i = x; i <= N;i+=lowbit(i))
        c[i] += v;
}

int query(int x)
{
    int res = 0;
    for (int i = x; i;i-=lowbit(i))
        res += c[i];
    return res;
}


int main()
{
    cin >> n;

    for (int i = 1; i <= n;i++)
        cin >> a[i];
    ll ans = 0;
    for (int i = 1; i <= n;i++){
        ans += query(N) - query(a[i]);
        add(a[i], 1);
    }
    cout << ans << endl;
}