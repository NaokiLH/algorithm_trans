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

ll n;

int main()
{
    cin >> n;

    while(n){
        cout << n << " ";
        n >>= 1;
    }
    cout << endl;
}