#include <bits/stdc++.h>
using namespace std;
//unsigned
#define ll long long int
ll mod=1e9+7;
const int MAXN=1e6+1;
// int arr[MAXN];


void solu(){
	int l,r,mid;
	l=1;
	cin>>r;
	int ans=1;
	cout<<"? "<<l<<" "<<r<<endl;
	cout.flush();
	int lastk;
	cin>>lastk;
	while(l<=r){

		mid=l+(r-l)/2;
		cout<<"? "<<l<<" "<<mid<<endl;
		cout.flush();
		int k;
		cin>>k;
		if(k==lastk){
			r=mid;
		}else{
			l=mid;
		}
		if(r-l==1){
		cout<<"? "<<l<<" "<<r<<endl;
		cout<<"de"<<endl;
		cout.flush();
		int kk;
		cin>>kk;
		if(kk==r)ans=l;
		else ans=r;
		break;
		}
	}
	cout<<"! "<<ans<<endl;
	cout.flush();
}

int main(){
		// ios_base::sync_with_stdio(0);
		// cin.tie(0);

		// int cass;
		// cin>>cass;
		// for(int i=0;i<cass;i++)
			solu();

    return 0;
}