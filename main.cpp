#include <iostream>
#include "graph.h"

int main()
{
	Graph g;

    g.addVertex("Oleg");
    g.addVertex("Nikita");
    g.addVertex("Nastya");
    g.addVertex("Vanya");
    g.addVertex("Zhenya");

    g.addEdge(0, 1, 1);
    g.addEdge(1, 2, 1);
    g.addEdge(2, 3, 1);
    g.addEdge(3, 4, 1);

    g.pairSearch();

	return 0;
}