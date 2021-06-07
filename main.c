#include "bfs.h"

int main() {
	output_t output;
	struct Graph graph;
	createGraph(10,&graph);

	addEdge(&graph, 0, 1);
	addEdge(&graph, 0, 2);
	addEdge(&graph, 0, 3);
	addEdge(&graph, 1, 3);
	addEdge(&graph, 1, 5);
	addEdge(&graph, 3, 4);
	addEdge(&graph, 4, 6);
	addEdge(&graph, 4, 7);
	addEdge(&graph, 5, 8);
	addEdge(&graph, 8, 9);
	bfs(&graph, 0, 9, &output);

	return 0;
}
