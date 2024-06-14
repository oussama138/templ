// A simple representation of graph using STL
#include <bits/stdc++.h>
using namespace std;




void printGraph(vector<int>adj[],int V){
	for(int v=0 ; v<V;v++){
		cout<<"adj of vertex "<<v;
		cout<<" head  ";

		for(auto x : adj[v]){
			cout<<" "<<x;
		}
		cout<<endl;
	}
}
void addEdge(vector<int>adj[] , int u , int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}
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
	addEdge(adj , 3 , 4);
	addEdge(adj , 2 , 4);
	addEdge(adj , 4 , 1);
	printGraph(adj , V);

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
