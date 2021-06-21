/**
 * Apresentação Geral do Algoritmo: Breadth First Search - Algotitmo de Travessia ou Busca em Grafos.
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

#ifndef BFS_H
#define BFS_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes -----------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

/* Exported macros ----------------------------------------------------------*/

#define SIZE 100

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

/**
 * @brief Algoritmo Breadth First Search
 * @param[in] graph ponteiro para a estrutura do grafo.
 * @param[in] startVertex valor do vértice de início.
 * @param[in] target valor do vértice de destino.
*/
void bfs(struct Graph* graph, int startVertex, int target, output_t *p_output);

/**
*@brief Adiciona arestas no grafo entre os vértice fonte e destino.
*@param[in] graph ponteiro para a estrutura do grafo.
*@param[in] src vértice fonte.
*@param[in] dest vértice de destino.
*/
void addEdge(struct Graph* graph, int src, int dest);

/**
 * @brief Cria e inicializa o grafo.
 * @param[in] vertices o vértice.
 * @param[in] graph ponteiro para o a estrutura do grafo.
*/
void createGraph(int vertices, struct Graph* graph);

#ifdef UNIT_TESTS

#endif /* UNIT_TESTS */


#ifdef __cplusplus
}
#endif

#endif /* BFS_H */
