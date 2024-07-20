#include<bits/stdc++.h>
using namespace std;
int n,m,x,y;
int xm[8] = {-2,-1,1,2, 2, 1,-1,-2};
int ym[8] = { 1, 2,2,1,-1,-2,-2,-1};
int a[1005][1005] = {0};
void debug(){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%-5d",a[i][j]);
		}
		cout<<endl;
	}
	cout<<endl;
}
struct L{
	int x,y;
};
queue<L> Q;
int main(){
	cin>>n>>m>>x>>y;
	x = x-1;
	y = y-1;
	L tmp = {x,y};
	Q.push(tmp);

	a[x][y] = 1;
	while(!Q.empty()){

		L p = Q.front();
		Q.pop();
		x = p.x;
		y = p.y;
		for(int i=0;i<8;i++){
			int nx=x+xm[i];
			int ny=y+ym[i];
			
			if(nx >= 0 && nx < n && ny >= 0 && ny < m && a[nx][ny] == 0){
				a[nx][ny] = a[x][y] + 1;
				
				L tmp = {nx,ny};
				Q.push(tmp);
				//debug();

			}
			
		}
//		if(br == 0){
//			break;
//		}


		
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%-5d",a[i][j] - 1);
		}
		cout<<endl;
	}


	return 0;
}
