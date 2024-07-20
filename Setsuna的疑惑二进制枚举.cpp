#include<iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int sum = 0;
long long n;
int a[100005];
int tong[100005];
int zsum = 0;
int main() {
	cin >> n ;
	//cout<<n<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
		zsum += a[i];
	}

	long long p=1ll<<n;
	//cout<<p;
	for(int i = 1;i<=p; i++) {

		
		for(int j = n-1; j >= 0; j--) {
			//循环找答案
			if ((i & (1<<j)) != 0) {
				sum+=a[j];
				

			}
			
		}
		//cout<<endl;

		tong[sum] = 1;
		sum = 0;
		

	}
	int c2=0;
	for(int i=1;i<=zsum;i++){
		if(c2 == 2){
			break;
		}
		if(tong[i] != 1){
			cout<<i<<" ";
			c2+=1;
		}
	}
	
	return 0;
}
