#include<iostream>
using namespace std;
int sd1[105],sd2[105],sd3[105],sd4[105];
int cnt=0;
int n;

int a[10005];
int dfs(int 行){
	//k是行
	if(行>n){
		if(cnt < 3){
			for(int i=1;i<=n;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}

		cnt+=1;
		return 0;
	}

	
	//i是列
	for(int l=1;l<=n;l++){
		int x=l-行+n;
		int fx=l+行;
		if(sd2[l] == 0 && sd3[x] == 0 && sd4[fx] == 0){
			a[行] = l;
			sd2[l] = sd3[x] = sd4[fx] = 1;

			//cout<<i<<" ";
			dfs(行+1);
			sd2[l] = sd3[x] = sd4[fx] = 0;
			
		}
	}
	return 0;
}
int main(){
	cin>>n;
	dfs(1);
	cout<<cnt<<endl;
	return 0;
}
