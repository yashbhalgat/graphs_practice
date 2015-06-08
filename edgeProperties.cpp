#include <iostream>
#include <boost/graph/graph_traits.hpp>
#include <boost/graph/adjacency_list.hpp>
 
typedef boost::property<boost::edge_weight_t, double> EdgeWeightProperty;
 
/*
adjacency_list<OutEdgeList, VertexList, Directed,
               VertexProperties, EdgeProperties,
               GraphProperties, EdgeList>
*/             
typedef boost::adjacency_list<boost::vecS, boost::vecS, boost::undirectedS, boost::no_property, EdgeWeightProperty> Graph;
 
int main(int,char*[])
{
  // Create a graph object
  Graph g(3);
 
  EdgeWeightProperty e1 = 5;
  add_edge(0, 1, e1, g);
 
  EdgeWeightProperty e2 = 3;
  add_edge(1, 2, e2, g);
 
  boost::property_map<Graph, boost::edge_weight_t>::type EdgeWeightMap = get(boost::edge_weight_t(), g);
 
  typedef boost::graph_traits<Graph>::edge_iterator edge_iter;
  std::pair<edge_iter, edge_iter> edgePair;
  for(edgePair = edges(g); edgePair.first != edgePair.second; ++edgePair.first)
  {
      std::cout << EdgeWeightMap[*edgePair.first] << " ";
  }
 
  return 0;
}
