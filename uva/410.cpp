#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;


#define INF 1000000000
#define EPS 1e-9
#define fore(i, l, n) for (int i=int(l); i<n; i++)
#define forn(i, n) fore(i, 0, n)
#define pb push_back
#define	mp make_pair

int main() {
	int c, s;
	int j = 1;
	while (cin >> c >> s) {
		vi arr;
		double avg = 0;
		forn(i, s) {
			int temp;
			cin >> temp;
			arr.pb(temp);
			avg += temp;
		}
		avg /= c;

		fore(i, s, 2*c) arr.pb(0);

		sort(arr.begin(), arr.end());
		float im = 0;
		cout << "Set #" << j << endl;
		forn(i, c) {
			cout << " " << i << ": ";
			if (arr[i]) cout << arr[i] << " ";
			if (arr[2*c - 1 - i]) cout << arr[2*c - 1- i];
			int cm = arr[i] + arr[2*c -1 - i];
			im += abs(cm-avg);
			cout << endl;
		}

		std::cout.precision(5);
		cout << "IMBALANCE = " << std::fixed << float(im) << endl << endl;
		j++;
	}
}