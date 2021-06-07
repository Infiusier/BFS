#ifndef BFS_H
#define BFS_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes -----------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
/* Exported macros ----------------------------------------------------------*/
#define SIZE 40
/* Exported typedef ---------------------------------------------------------*/
typedef struct{
	int array[SIZE];
	int size;
}output_t;

struct Graph {
  int numVertices;
  struct node** adjLists;
  int* visited;
};
/* External variables -------------------------------------------------------*/
/* Exported functions ------------------------------------------------------ */
void bfs(struct Graph* graph, int startVertex, int target, output_t *p_output);
void addEdge(struct Graph* graph, int src, int dest);
void createGraph(int vertices, struct Graph* graph);
#ifdef UNIT_TESTS

#endif /* UNIT_TESTS */


#ifdef __cplusplus
}
#endif

#endif /* BFS_H */
