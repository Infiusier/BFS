#include "bfs.h"

/* Includes ------------------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macros ------------------------------------------------------------*/
/* Private typedef -----------------------------------------------------------*/
struct node {
  uint16_t vertex;
  struct node* next;
};
struct queue {
  uint8_t items[SIZE];
  int front;
  int rear;
};
/* External variables --------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
void createQueue(struct queue *q);
void enqueue(struct queue* q, int);
int dequeue(struct queue* q);
int isEmpty(struct queue* q);
void printQueue(struct queue* q);
struct node* createNode(int v);
/* Private variables ---------------------------------------------------------*/
struct node *node_pointer_buffer[SIZE];
struct node node_buffer[SIZE*3];
int visited_buffer[SIZE];
int node_count = 0;
/* Exported functions --------------------------------------------------------*/
// BFS algorithm
void bfs(struct Graph* graph, int startVertex, int target, output_t *p_output) {
  struct queue q;
  createQueue(&q);
  p_output->size = 0;

  graph->visited[startVertex] = 1;
  enqueue(&q, startVertex);

  while (!isEmpty(&q)) {
    int currentVertex = dequeue(&q);

    p_output->array[p_output->size] = currentVertex;
    p_output->size++;

    if(currentVertex==target){
    	break;
    }

    struct node* temp = graph->adjLists[currentVertex];

    while (temp) {
      int adjVertex = temp->vertex;

      if (graph->visited[adjVertex] == 0) {
        graph->visited[adjVertex] = 1;
        enqueue(&q, adjVertex);
      }
      temp = temp->next;
    }
  }
}

// Add edge
void addEdge(struct Graph* graph, int src, int dest) {
  // Add edge from src to dest
  struct node* newNode = createNode(dest);
  newNode->next = graph->adjLists[src];
  graph->adjLists[src] = newNode;

  // Add edge from dest to src
  newNode = createNode(src);
  newNode->next = graph->adjLists[dest];
  graph->adjLists[dest] = newNode;
}
// Creating a graph
void createGraph(int vertices, struct Graph* graph) {
  graph->numVertices = vertices;
  graph->adjLists = &node_pointer_buffer[0];
  graph->visited = &visited_buffer[0];

  int i;
  for (i = 0; i < vertices; i++) {
    graph->adjLists[i] = NULL;
    graph->visited[i] = 0;
  }

}
/* Private functions --------------------------------------------------------*/

struct node* createNode(int v) {
  //struct node* newNode = malloc(sizeof(struct node));
  struct node* newNode = &node_buffer[node_count++];
  newNode->vertex = v;
  newNode->next = NULL;
  return newNode;
}

// Create a queue
void createQueue(struct queue *q) {
  q->front = -1;
  q->rear = -1;
}

// Check if the queue is empty
int isEmpty(struct queue* q) {
  if (q->rear == -1)
    return 1;
  else
    return 0;
}

// Adding elements into queue
void enqueue(struct queue* q, int value) {
  if (q->rear == SIZE - 1){
    return;
  }
    
  else {
    if (q->front == -1)
      q->front = 0;
    q->rear++;
    q->items[q->rear] = value;
  }
}

// Removing elements from queue
int dequeue(struct queue* q) {
  int item;
  if (isEmpty(q)) {
    item = -1;
  } else {
    item = q->items[q->front];
    q->front++;
    if (q->front > q->rear) {
      q->front = q->rear = -1;
    }
  }
  return item;
}
