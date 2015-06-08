#include <iostream>
//#include <boost/graph/graph_traits.hpp>
//#include <boost/graph/undirected_graph.hpp>
#include <boost/graph/adjacency_list.hpp>
 
typedef boost::adjacency_list<> Graph;
 
int main(int,char*[])
{
  // Create a graph object
  Graph g;
 
  // Add vertices
  Graph::vertex_descriptor v0 = add_vertex(g);
  Graph::vertex_descriptor v1 = add_vertex(g);
  Graph::vertex_descriptor v2 = add_vertex(g);
 
  std::cout << "There are " << num_vertices(g) << " vertices." << std::endl;
 
  remove_vertex(v0, g);
 
  std::cout << "There are " << num_vertices(g) << " vertices." << std::endl;
  
  return 0;
}
