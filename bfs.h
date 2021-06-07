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

struct Graph {
  int numVertices;
  struct node** adjLists;
  int* visited;
};
/* External variables -------------------------------------------------------*/
/* Exported functions ------------------------------------------------------ */
void bfs(struct Graph* graph, int startVertex);
void addEdge(struct Graph* graph, int src, int dest);
struct Graph* createGraph(int vertices);

#ifdef UNIT_TESTS

#endif /* UNIT_TESTS */


#ifdef __cplusplus
}
#endif

#endif /* BFS_H */
