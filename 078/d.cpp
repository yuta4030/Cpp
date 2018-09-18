#include <bits/stdc++.h>
using namespace std;

/*
    https://beta.atcoder.jp/contests/abc078/tasks/arc085_b
*/

#define li long long int
#define rep(i, to) for (li i = 0; i < ((li)(to)); i++)
#define repp(i, start, to) for (li i = (li)(start); i < ((li)(to)); i++)
#define pb push_back
#define sz(v) ((li)(v).size())
#define bgn(v) ((v).begin())
#define eend(v) ((v).end())
#define allof(v) (v).begin(), (v).end()
#define dodp(v, n) memset(v, (li)n, sizeof(v))
#define bit(n) (1ll << (li)(n))
#define mp(a, b) make_pair(a, b)
#define rin rep(i, n)
#define EPS 1e-12
#define ETOL 1e-8
#define MOD 1000000007
typedef pair<li, li> PI;

#define INF bit(60)

#define DBGP 1

#define idp if (DBGP)
#define F first
#define S second
#define p2(a, b) idp cout << a << "\t" << b << endl
#define p3(a, b, c) idp cout << a << "\t" << b << "\t" << c << endl
#define p4(a, b, c, d) idp cout << a << "\t" << b << "\t" << c << "\t" << d << endl
#define p5(a, b, c, d, e) idp cout << a << "\t" << b << "\t" << c << "\t" << d << "\t" << e << endl
#define p6(a, b, c, d, e, f) idp cout << a << "\t" << b << "\t" << c << "\t" << d << "\t" << e << "\t" << f << endl
#define p7(a, b, c, d, e, f, g) idp cout << a << "\t" << b << "\t" << c << "\t" << d << "\t" << e << "\t" << f << "\t" << g << endl
#define p8(a, b, c, d, e, f, g, h) idp cout << a << "\t" << b << "\t" << c << "\t" << d << "\t" << e << "\t" << f << "\t" << g << "\t" << h << endl
#define p9(a, b, c, d, e, f, g, h, i) idp cout << a << "\t" << b << "\t" << c << "\t" << d << "\t" << e << "\t" << f << "\t" << g << "\t" << h << "\t" << i << endl
#define p10(a, b, c, d, e, f, g, h, i, j) idp cout << a << "\t" << b << "\t" << c << "\t" << d << "\t" << e << "\t" << f << "\t" << g << "\t" << h << "\t" << i << "\t" << j << endl
#define foreach(it, v) for (__typeof((v).begin()) it = (v).begin(); it != (v).end(); ++it)
#define p2p(x) idp p2((x).F, (x).S)
#define dump(x, n)                         \
    idp                                    \
    {                                      \
        rep(i, n) { cout << x[i] << " "; } \
        puts("");                          \
    }
#define dump2(x, n)                                                     \
    idp                                                                 \
    {                                                                   \
        rep(i, n) { cout << "[" << x[i].F << " , " << x[i].S << "] "; } \
        puts("");                                                       \
    }
#define dumpi(x)                  \
    idp                           \
    {                             \
        foreach (it, x)           \
        {                         \
            cout << (*it) << " "; \
        }                         \
        puts("");                 \
    }
#define dumpi2(x)                                               \
    idp                                                         \
    {                                                           \
        foreach (it, x)                                         \
        {                                                       \
            cout << "[" << (it)->F << " , " << (it)->S << "] "; \
        }                                                       \
        puts("");                                               \
    }

#define read2d(a, w, h) rep(i, h) rep(j, w) cin >> a[i][j]
#define dump2d(a, w, h)                   \
    rep(i, h)                             \
    {                                     \
        rep(j, w) cout << a[i][j] << " "; \
        puts("");                         \
    }

typedef pair<li, li> PI;

li v[100100];
li x[100100];

PI dp1[100100];
PI dp2[100100];

li n, z, w;
string s;

li solve() {
    if (n == 1){
        return abs(v[0] - w);
    }

    return abs(v[n - 1] - w) > abs(v[n - 2] - v[n - 1]) ? abs(v[n - 1] - w) : abs(v[n - 2] - v[n - 1]);
}

int main(void) {
    cin >> n >> z >> w;
    rep(i, n){
        cin >> v[i];
    }

    cout << (solve()) << endl;
    return 0;
}

