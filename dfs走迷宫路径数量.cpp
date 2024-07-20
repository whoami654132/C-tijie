#include<bits/stdc++.h>
using namespace std;
int xm[8] = {-1,0,1,-1,1,-1,0,1};
int ym[8] = {-1,-1,-1,0,0,1,1,1};
int a[1000][1000];
int n;
int cnt = 0;

void dfs(int x, int y) {

	if (x == 0 && y == n-1) {
		cnt++;
		return;
	}

	a[x][y] = 2;
	for (int i = 0; i < 8; ++i) {
		int bx = x + xm[i];
		int by = y + ym[i];

		if (bx >= 0 && bx < n && by >= 0 && by < n && a[bx][by] == 0) {
			dfs(bx, by);
		}
	}
	

	a[x][y] = 0;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> a[i][j];
		}
	}
	dfs(0, 0);
	cout<<cnt;
	return 0;
}

