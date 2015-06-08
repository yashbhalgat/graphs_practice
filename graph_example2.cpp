#include <iostream>
#include <deque>
#include <iterator>

#include "boost/graph/adjacency_list.hpp"
#include "boost/graph/topological_sort.hpp"

using namespace std;

int main()
{
    // Create a n adjacency list, add some vertices.
    boost::adjacency_list<> g(num tasks);
    boost::add_vertex(0, g);
    boost::add_vertex(1, g);
    boost::add_vertex(2, g);
    boost::add_vertex(3, g);
    boost::add_vertex(4, g);
    boost::add_vertex(5, g);
    boost::add_vertex(6, g);

    // Add edges between vertices.
    boost::add_edge(0, 3, g);
    boost::add_edge(1, 3, g);
    boost::add_edge(1, 4, g);
    boost::add_edge(2, 1, g);
    boost::add_edge(3, 5, g);
    boost::add_edge(4, 6, g);
    boost::add_edge(5, 6, g);

    // Perform a topological sort.
    deque<int> topo_order;
    boost::topological_sort(g, front_inserter(topo_order));

    // Print the results.
    for(deque<int>::const_iterator i = topo_order.begin();
        i != topo_order.end();
        ++i)
    {
        cout << tasks[v] << endl;
    }

    return 0;
}
