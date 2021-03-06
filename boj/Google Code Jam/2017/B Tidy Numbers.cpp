#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

typedef long long ll;

#define rep(i,a,b) for(int i=a;i<b;i++)

int t;
ll n, ans;

ll proc() {
    ll pos = 1;
    int a, b;

    while (pos < n) {
        a = n / pos % 100 / 10;
        b = n / pos % 10;
        if (a > b) {
            n -= (1 + n % (pos * 10)); // 뒷자리를 99999로 맞춘다.
        }
        pos *= 10;
    }
    return n;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie;
#ifdef _CONSOLE
    freopen("B-large.in", "r", stdin);
    freopen("B-large.out", "w", stdout);
#endif

    cin >> t;
    rep(tc, 1, t + 1) {
        cin >> n;
        printf("Case #%d: %lld\n", tc, proc());
    }
    return 0;
}
