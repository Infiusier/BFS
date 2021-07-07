/**
 * Apresentação Geral do Algoritmo: Breadth First Search - Algotitmo de Busca em Largura.
 * O Algoritmo Breadth First Search (BFS) é um método de travessia ou busca em grafos. Onde a busca pode começar por qualquer vértice do grafo ou da árvore e vai expandindo para todos os vértices adjacentes.
 *
 * Estratégia do Algoritmo:
 * Adiciona os vértices para uma fila, verificando vértices adjacentes e move a busca para o próximo vértice da fila, repetindo os passos anteriores até que a busca ou travessia sejam completados.
 *
 * Copyright 2021 por Hanah Santana de Oliveira dos Santos e Tiago Diógenes de Araújo
 * Instituto Federal de Educação, Ciência e Tecnologia do Ceará - IFCE
 * Todos os Direitos Reservados.
 *
 * Fonte do código: https://www.programiz.com/dsa/graph-bfs
 *
 * Modo de uso da aplicação:
 * Utilizado para se fazer travessia ou busca em grafos, pode servir em aplicações como Sistemas de Navegação (GPS),
 * Indexação de Páginas Web em Mecanismos de Pesquisa, Broadcasting e afins.
 *
 * Entradas e Saídas:
 * Entrada - 99 vértices: (98,99), (97,98), (96,97), (93,96), (93,94), (95,93), (93,92), (92,95), (91,95), (90,91), (90,86), (89,90), (88,89), (87,88), (85,86), (85,84), (84,87), (84,86), (82,85), (80,87), (79,80), (78,81), (78,79), (77,78), (76,83), (76,82), (76,77), (76,71), (75,76), (73,75), (72,73), (72,74), (71,69), (67,72), (69,70), (68,70), (68,69), (67,68), (66,74), (66,67), (64,66), (62,66), (63,64), (62,66), (62,63), (61,65), (61,62), (60,61), (59,60), (58,60), (58,57), (57,59), (56,55), (55,58), (54,56), (53,54), (51,53), (50,52), (50,51), (50,48), (49,52), (48,52), (47,50), (47,49), (47,48), (46,47), (45,46), (44,46), (44,45), (43,44), (42,43), (41,42), (40,42), (39,41), (38,40), (37,39), (37,38), (37,36), (35,37), (34,35), (33,34), (33,31), (32,34), (31,32), (30,31), (27,28), (26,29), (26,27), (25,30), (25,26), (23,22), (22,25), (20,24), (20,23), (20,21), (18,19), (17,18), (16,17), (14,16), (14,11), (13,20), (13,14), (10,15), (10,13), (10,12), ( 9,12), ( 8, 9), ( 5, 8), ( 4, 7), ( 4, 6), ( 3, 4), ( 1, 5), ( 1, 3), ( 0, 3), ( 0, 2), ( 0, 1).
 * Saída - 99 vértices: 0 1 2 3 5 4 8 6 7 9 12 10 13 15 14 20 11 16 21 23 24 17 22 18 25 19 26 30 27 29 31 28 32 33 34 35 37 36 38 39 40 41 42 43 44 45 46 47 48 49 50 52 51 53 54 56 55 58 57 60 59 61 62 65 63 66 64 67 74 68 72 69 70 73 71 75 76 77 82 83 78 85 79 81 84 86 80 87 90 88 89 91 95 92 93 94 96 97 98 99
 *
 * Entrada -86 vértices: ( 0, 6), ( 0, 3), ( 0, 2), ( 0, 1), ( 1, 8), ( 3,21), ( 3, 4), ( 6,64), ( 6, 7), ( 6, 5), ( 7, 9), ( 9,14), ( 9,13), ( 9,12), ( 9,11), ( 9,10), (10,15), (15,20), (15,18), (15,16), (18,19), (16,17), (21,26), (21,23), (26,25), (23,24), (23,22), (4, 27), (27,31), (27,28), (28,32), (31,30), (31,29), ( 2,35), (35,37), (37,36), (37,34), (34,33), (33,38), (22,40), (40,43), (40,41), (40,39), (39,42), (41,44), (36,57), (36,39), (24,46), (46,50), (46,49), (46,48), (46,47), (46,45), (57,61), (57,60), (57,59), (57,58), (59,83), (59,60), (58,62), (61,62), (11,51), (51,56), (56,55), (55,52), (52,54), (52,53), (64,68), (64,65), (64,63), (68,67), (65,67), (65,66), ( 5,69), (69,73), (69,70), (73,74), (73,72), (73,70), (70,72), (70,71), (45,76), (76,79), (76,77), (79,80), (79,78), (80,77), (78,75), (83,86), (83,82), (82,81), (86,85), (81,84), (85,84),
 * Saída - 86 vértices: 0 1 2 3 6 8 35 4 21 5 7 64 37 27 23 26 69 9 63 65 68 34 36 28 31 22 24 25 70 73 10 11 12 13 14 66 67 33 39 57 32 29 30 40 46 71 72 74 15 51 38 42 58 59 60 61 41 43 45 47 48 49 50 16 18 20 56 62 83 44 76 17 19 55 82 86 77 79 52 81 85 80 78 53 54 84 75
 *
 * Validação e Testes:
 * Os resultados obtidos com a execução do código foram comparados ao output na plataforma Graph Online com grafos de 99 e 86 vértices criados pelos alunos.
 * Grafo de 99 vértices - Graph Online: https://graphonline.ru/en/?graph=skVVCbXTZAIEpiDc
 * Grafo de 86 vértices - Graph Online: http://graphonline.ru/en/?graph=IJrDafzDrrykIomi
 *
 * Estudantes:
 * Hanah Santana de Oliveira dos Santos e Tiago Diógenes de Araújo
 *
 * Data:
 * 09 de junho de 2021.
 *
 * Contexto:
 * Este software foi utilizado para fins didáticos na apresentação de "Trabalho T1 ARM/Linux - Desenvolvimento de SW".
 *
 * Plataforma alvo:
 * Plataforma Linux, posteriormente em Raspberry Pi.
 */

#include "bfs.h"

/* Includes ------------------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macros ------------------------------------------------------------*/
/* Private typedef -----------------------------------------------------------*/

struct node {
  int vertex;
  struct node* next;
};
struct queue {
  int items[SIZE];
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

/**
 * @note See full documentation in module's header file.
 */
void bfs(struct Graph* graph, int startVertex, int target, output_t *p_output) {
  struct queue q;
  createQueue(&q);
  p_output->size = 0;

  //Marca o vértice de início como visitado e o coloca na fila.
  graph->visited[startVertex] = 1;
  enqueue(&q, startVertex);


  while (!isEmpty(&q)) {
    //Adiciona e imprime os vértices observados na fila, remove e indica os que já foram visitados.
#ifndef TEST
	printQueue(&q);
	int currentVertex = dequeue(&q);
	printf("Visited %d\n", currentVertex);
#else
	int currentVertex = dequeue(&q);
#endif

    p_output->array[p_output->size] = currentVertex;
    p_output->size++;

    //Para a travessia caso ele encontre o vértice de destino.
    if(currentVertex==target){
    	printf("Target found: %d\n", currentVertex);
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

/**
 * @note See full documentation in module's header file.
 */
void addEdge(struct Graph* graph, int src, int dest) {
  //Adiciona aresta da fonte para o destino.
  struct node* newNode = createNode(dest);
  newNode->next = graph->adjLists[src];
  graph->adjLists[src] = newNode;

  // Adiciona aresta do destino para a fonte.
  newNode = createNode(src);
  newNode->next = graph->adjLists[dest];
  graph->adjLists[dest] = newNode;
}

/**
 * @note See full documentation in module's header file.
 */
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

/**
 * @brief Cria os vértices do grafo.
 * @param[in] v recebe o numero do vértice.
 * @return ponteiro para o nó (vértice) do grafo.
*/
struct node* createNode(int v) {
  struct node* newNode = &node_buffer[node_count++];
  newNode->vertex = v;
  newNode->next = NULL;
  return newNode;
}

/**
 * @brief Cria a fila de vértices a serem visitados.
 * @param[in] q ponteiro para a estrutura da fila.
*/
void createQueue(struct queue *q) {
  q->front = -1;
  q->rear = -1;
}

/**
 * @brief Verifica se a fila está vazia.
 * @param[in] q ponteiro para a estrutura da fila.
*/
int isEmpty(struct queue* q) {
  if (q->rear == -1)
    return 1;
  else
    return 0;
}

/**
 * @brief Adiciona elementos na fila.
 * @param[in] q ponteiro para a estrutura da fila.
 * @param[in] value nó (vértice) que será adicionado à fila.
*/
void enqueue(struct queue* q, int value) {
  if (q->rear == SIZE - 1)
    printf("\nQueue is Full!!");
  else {
    if (q->front == -1)
      q->front = 0;
    q->rear++;
    q->items[q->rear] = value;
  }
}

/**
 * @brief Remove elementos da fila.
 * @param[in] q ponteiro para a estrutura da fila.
*/
int dequeue(struct queue* q) {
  int item;
  if (isEmpty(q)) {
    printf("Queue is empty");
    item = -1;
  } else {
    item = q->items[q->front];
    q->front++;
    if (q->front > q->rear) {
      printf("Resetting queue ");
      q->front = q->rear = -1;
    }
  }
  return item;
}

/**
 * @brief Imprime a fila.
 * @param[in] q ponteiro para a estrutura da fila.
*/
void printQueue(struct queue* q) {
  int i = q->front;

  if (isEmpty(q)) {
    printf("Queue is empty");
  } else {
    printf("\nQueue contains \n");
    for (i = q->front; i < q->rear + 1; i++) {
      printf("%d ", q->items[i]);
    }
  }
}
