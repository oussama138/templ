 #include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define lls unsigned long long int
#define ll long long int
const int K=25;
const int MAXN=100000+1;
const int INF=1e9;
ll dive=1e9+7;

struct edge{
	int a,b,c;
};

int n,m,v;
vector<edge>e;




void shortest_path(int n,int m,int v){
  vector<int> d (n, -1);
    d[v] = 0;
    for (int i=1; i<n-1; ++i){
        for (int j=0; j<m; ++j){
            if (d[e[j].a] != -1){
	    	if(d[e[j].b]==-1){
                d[e[j].b] = d[e[j].a] + e[j].c;
		}else{
		d[e[j].b] = min(d[e[j].b],d[e[j].a]+e[j].c);
		}
		}

        //     cout<<d[e[j].a]<<" ";
        }
    }
	for(int i=0;i<n;i++){
		cout<<d[i]<<" ";
	}
}

// void shortest_path(vector<int>d){//optimaze implementation
// 	d[v]=0;
// 	for(;;){
// 		bool tr = false;

// 		for(int j=0;j<m;j++){
// 			if(d[e[j].a]<INF){
// 				if(d[e[j].b] < d[e[j].a]+e[j].c){
// 					d[e[j].b]=d[e[j].a]+e[j].c;
// 					tr=true;
// 				}
// 			}
// 		}
// 		if(tr==false)break;
// 	}
// }

int main(){

    	int n,m,v;
	cin>>n>>m;
	v=0;
	edge dd;
	int aa,bb,cc;
	edge cur;
	for(int i=0;i<m;i++){
		cin>>aa>>bb>>cc;
		dd.a=aa-1;
		dd.b=bb-1;
		dd.c=cc;

		cur.a=bb-1;
		cur.b=aa-1;
		cur.c=cc;
		e.push_back(dd);
		e.push_back(cur);
	}
	shortest_path(n,2*m,0);

  	return 0;
}