// A simple representation of graph using STL
#include <bits/stdc++.h>
using namespace std;




// void printGraph(vector<int>adj[],int V){
// 	for(int v=0 ; v<V;v++){
// 		cout<<"adj of vertex "<<v;
// 		cout<<" head  ";

// 		for(auto x : adj[v]){
// 			cout<<" "<<x;
// 		}
// 		cout<<endl;
// 	}
// }
// in IOI

void dfs(int node , vector<vector<int>>v){
    cout<<"dcd"<<endl;
	stack<int>st;
	map<int,bool>visit;
	st.push(node);
	visit[node]=true;
	while(!st.empty()){
		int cur=st.top();
		cout<<cur<<" ";
		st.pop();
		for(auto &ele : v[cur]){
		if(visit[ele]) continue;
		visit[ele]=true;
		st.push(ele);
		}
	}
}
// end





void addEdge(vector<int>adj[] , int u , int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}


// void bfs(vector <int> adj[] , int in , int v){
// 	queue<int>q;
// 	q.push(adj[in]);

// 	for(int i=0;i<v;i++){
// 		int p = q.front();
// 		cout<<p<<" "<<endl;
// 		q.pop();
// 	}
// }
// Driver code
int main()
{
	// adjacecy list
	int V = 5;
	vector<int> adj[V];
	addEdge(adj , 0 , 1);
	addEdge(adj , 0 , 4);
	addEdge(adj , 1 , 4);
	addEdge(adj , 1 , 3);
	// addEdge(adj , 3 , 4);
	addEdge(adj , 2 , 4);
	addEdge(adj , 4 , 1);
	// printGraph(adj , V);


    v.push_back({1,6});
    v.push_back({0,2});
    v.push_back({1,3});
    v.push_back({4,2});
    v.push_back({3,5});
    v.push_back({4,6});
    v.push_back({0});

	//     2
	//     ||
	// 0---4----1
	//    ||   ||
	//    ||----3
	//

	// adjacenty matrix

    // n is the number of vertices
    // m is the number of edges
//     int n, m;
//     cin >> n >> m ;
//     int adjMat[n + 1][n + 1];
//     for(int i = 0; i < m; i++){
//         int u , v ;
//         cin >> u >> v ;
//         adjMat[u][v] = 1 ;
//           adjMat[v][u] = 1 ;
//     }
	return 0;
}
