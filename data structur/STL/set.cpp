#include<iostream>
#include<set>
#include<vector>

using namespace std;


struct Edge {
	int a, b, w;
};

struct cmp {
	bool operator()(const Edge &x, const Edge &y) const { return x.w < y.w; }
};


bool comp(int& a,int& b){
	return a>b;
}
int main(){

	set<Edge,cmp>ss;
	sort(aa.begin(),aa.end(),comp);

	set<int, greater<int>> a;
	map<int, string, greater<int>> b;
	priority_queue<int, vector<int>, greater<int>> c;


	vector<array<int, 3>> vv; 


	set<int> st = {4,2,13,29,2,4,7,0,8,1,10};


	// std::set<int, std::greater> s;
	// sort bool cmp(const Edge &x, const Edge &y) { return x.w < y.w; }
	// sort(begin(v), end(v), cmp);

	cout<<st.size()<<endl;
	st.insert(3);
	st.insert(10);
	st.insert({-10,-2});
	vector<int>v={-12,-4,23};
	st.insert(v.begin(),v.end());
	cout<<st.size()<<endl;
	for(auto &ele:st){
		cout<<ele<<" ";
	}
	cout<<endl;

	auto it = st.erase(st.find(10)); // delet 10
	cout<<*it<<endl; // who in new pace of 10 IN index 10

	int num_erased = st.erase(7);
	cout<<num_erased<<endl;

	// st.erase(st.begin(),st.end());
	// st.erase(st.begin() , st.find(30)) remove all number <=30

	for(auto &ele:st){
		cout<<ele<<" ";
	}
	cout<<endl;
	auto ub = st.upper_bound(3);
	auto lp = st.lower_bound(16);
	cout<<*ub<<" "<<*lp;
	// st.clear();
	// if(st.empty())cout<<"hi"; if set empty

	return 0;
}