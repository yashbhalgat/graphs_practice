#include <iostream>
#include <boost/graph/adjacency_list.hpp>

using namespace std;
using namespace boost;

typedef adjacency_list<> Graph;
typedef Graph::vertex_descriptor Vertex;
typedef Graph::edge_descriptor Edge;



int main(){
	Graph g;
	Vertex v0 = add_vertex(g);
	Vertex v1 = add_vertex(g);
	add_edge(v0, v1, g);
	add_edge(v0, v1, g);
	cout<<num_edges(g)<<" "<<num_vertices(g)<<endl;
	cout<<edge(v0, v1, g).second<<endl;
}
