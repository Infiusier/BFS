#include "bfs.h"



int main() {
	output_t output;
	struct Graph* graph = createGraph(6);

	addEdge(graph, 0, 1);
	addEdge(graph, 0, 2);
	addEdge(graph, 1, 2);
	addEdge(graph, 1, 4);
	addEdge(graph, 1, 3);
	addEdge(graph, 2, 4);
	addEdge(graph, 3, 4);

	bfs(graph, 0, 3, &output);

	return 0;
}
