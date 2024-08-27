#include <bits/stdc++.h>

#define pb push_back
#define eb emplace_back
#define all(a) (a).begin(), (a).end()
#define sz(a) ((int)(a).size())
#define fi first 
#define se second

using namespace std;
using ll = long long;
using db = double;

const int N9 = 1e9 + 7;
const int N5 = 1e5 + 5;
const db PI = acos(-1);
const bool debug = 1;

template<typename T> void debug_all (vector<T> arr) {for (T x : arr) {cerr << x << ' ';}}

// always checking the querry first.................. (^_^)
// always checking all edge value possibility (0 - N)

int n, kemungkinan1, kemungkinan2, kemungkinan3, kemungkinan4;
vector<int> jawab;
    
void dorr() {
    cout << "TANYA 3\n";
    for (int x : jawab) {
        cout << x << " ";
    }
    cout  << "\n" << flush;
}

void solve() {

    jawab = {1,2,3};
    dorr();

    cin >> n;

    if (n == 0) {
        jawab = {4,5,6};

        dorr();
        cin >> n;

        kemungkinan3 = 4-n;

        cout << "JAWAB " << kemungkinan3 << flush; return;
    }

    kemungkinan1 = 257-n;
    kemungkinan2 = 3+n;

    if (kemungkinan2 <= 6) {
        jawab = {7,8,9};
        dorr();
        cin >> n;

        kemungkinan3 = 7-n;
        kemungkinan4 = 9+n;

        if (kemungkinan2 == kemungkinan3) {
            cout << "JAWAB " << kemungkinan2 << flush;
        }
    }
    else {
        jawab = {4,5,6};

        dorr();

        cin >> n;        

        kemungkinan3 = 260-n;
        kemungkinan4 = 6+n;        
        // cerr << kemungkinan1 << " " << kemungkinan2 << endl;
        // cerr << kemungkinan3 << " " << kemungkinan4 << endl;
        if (kemungkinan1 == kemungkinan3 || kemungkinan1 == kemungkinan4) {
            cout << "JAWAB " << kemungkinan1 << flush;
        }
        else if (kemungkinan2 == kemungkinan3 || kemungkinan2 == kemungkinan4) {
            cout << "JAWAB " << kemungkinan2 << flush;
        }
    }

}
	
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cout.precision(4);
    cout << fixed;

	int t;
    t = 1;
    // cin >> t;

    while (t--) {
        solve();
        cout << '\n';
    }
    
    cerr << endl << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s.\n";
    return 0;
}