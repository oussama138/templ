#include <bits/stdc++.h>
// #include<iostream>
using namespace std;
//
#define ll long long int

#define endl "\n";


bool cm(pair<int,int> &a,pair<int,int> &b){
	return (a.second > b.second);
}
void solu(){
	freopen("rental.in","r",stdin);
	freopen("rental.out","w",stdout);
	int n,m,r;
	cin>>n>>m>>r;
	vector <int>c(n);
	vector <pair<int,int>>p(m);
	vector<int> rr(r);
	for(int i=0;i<n;i++)cin>>c[i];
	int a,b;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		p[i].first=a;
		p[i].second=b;
	}
	for(int i=0;i<r;i++)cin>>rr[i];

	sort(c.rbegin(),c.rend());
	sort(rr.rbegin(),rr.rend());
	sort(p.begin(),p.end(),cm);
	// sort()
	int ans=0;
	int in=0;
	int im=0; 
	int ir=0;
	while(in<n){
		int cur=0;
		int cc = c[in];
		int pc = 0;
		int imm=im;
		while(cc>0 && imm<m){
			if(p[imm].first<=cc){
				cur+=p[imm].first * p[imm].second;
				cc-=p[imm].first;
				imm++;
			}else{
				cur+=(cc)*p[imm].second;
				pc=cc;
				cc=0;
			}
		}
		if(ir<r&&rr[ir]>=cur){
			ans+=rr[ir];
			ir++;
			n--;
		}else{
			ans+=cur;
			im=imm;
			p[im].first-=pc;
			in++;
		}

	}
	cout<<ans<<endl;
  
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
