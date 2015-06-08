#include <iostream>
#include <boost/graph/adjacency_list.hpp>

using namespace boost;
using namespace std;

typedef adjacency_list<vecS, vecS, bidirectionalS> Graph;

int main(){
	Graph g;
	add_edge(0,1,g);
	add_edge(1,2,g);
	cout<<num_vertices(g)<<endl;
	/*pair<Graph::vertex_iterator, Graph::vertex_iterator> VItr = vertices(g);
	for(; VItr.first != VItr.second; ++VItr.first) cout<<*VItr.first<<endl;*/
	cout<<"number of Edges from 1 "<<degree(1,g)<<endl;
	cout<<"number of outEdges from 1 "<<out_degree(1,g)<<endl;
	cout<<"number of outEdges from 1 "<<in_degree(1,g)<<endl;
}
