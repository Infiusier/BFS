/**
 * Apresentacao Geral do Algoritmo: Breadth First Search - Algotitmo de Travessia ou Busca em Grafos.
 * O Algoritmo Breadth First Search (BFS) e um metodo de travessia ou busca em grafos. Onde a busca pode começar por qualquer vertice do grafo ou da �rvore e vai expandindo para todos os v�rtices adjacentes.
 *
 * Copyright 2021 por Hanah Santana de Oliveira dos Santos e Tiago Diogenes de Araujo
 * Instituto Federal de Educacao, Ciencia e Tecnologia do Ceara - IFCE
 * Todos os Direitos Reservados.
 *
 * Fonte do codigo: https://www.programiz.com/dsa/graph-bfs
 *
 * Modo de uso da aplicacao:
 * Utilizado para se fazer travessia ou busca em grafos, pode servir em aplicacoes como Sistemas de Navegacao (GPS),
 * Indexacao de Paginas Web em Mecanismos de Pesquisa, Broadcasting e afins.
 *
 * Estudantes:
 * Hanah Santana de Oliveira dos Santos e Tiago Diogenes de Araujo
 *
 * Data:
 * 30 de junho de 2021.
 *
 * Contexto:
 * Este software foi utilizado para fins didaticos na apresentacao de "Trabalho T2 Arduino Uno - Microcontrolador Desenvolvimento de SW Embarcado".
 *
 * Plataforma alvo:
 * Arduino Uno.
 */
#include "bfs.h"
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  output_t output;
  struct Graph graph;
  createGraph(SIZE,&graph);

  addEdge(&graph, 0, 6);
  addEdge(&graph, 0, 3);
  addEdge(&graph, 0, 2);
  addEdge(&graph, 0, 1);
  addEdge(&graph, 1, 8);
  addEdge(&graph, 3, 21);
  addEdge(&graph, 3, 4);
  addEdge(&graph, 6, 64);
  addEdge(&graph, 6, 7);
  addEdge(&graph, 6, 5);
  addEdge(&graph, 7, 9);
  addEdge(&graph, 9, 14);
  addEdge(&graph, 9, 13);
  addEdge(&graph, 9, 12);
  addEdge(&graph, 9, 11);
  addEdge(&graph, 9, 10);
  addEdge(&graph, 10, 15);
  addEdge(&graph, 15, 20);
  addEdge(&graph, 15, 18);
  addEdge(&graph, 15, 16);
  addEdge(&graph, 18, 19);
  addEdge(&graph, 16, 17);
  addEdge(&graph, 21, 26);
  addEdge(&graph, 21, 23);
  addEdge(&graph, 26, 25);
  addEdge(&graph, 23, 24);
  addEdge(&graph, 23, 22);
  addEdge(&graph, 4, 27);
  addEdge(&graph, 27, 31);
  addEdge(&graph, 27, 28);
  addEdge(&graph, 28, 32);
  addEdge(&graph, 31, 30);
  addEdge(&graph, 31, 29);
  addEdge(&graph, 2, 35);
  addEdge(&graph, 35, 37);
  addEdge(&graph, 37, 36);
  addEdge(&graph, 37, 34);
  addEdge(&graph, 34, 33);
  addEdge(&graph, 33, 38);
  addEdge(&graph, 22, 40);
  addEdge(&graph, 40, 43);
  addEdge(&graph, 40, 41);
  addEdge(&graph, 40, 39);
  addEdge(&graph, 39, 42);
  addEdge(&graph, 41, 44);
  addEdge(&graph, 36, 57);
  addEdge(&graph, 36, 39);
  addEdge(&graph, 24, 46);
  addEdge(&graph, 46, 50);
  addEdge(&graph, 46, 49);
  addEdge(&graph, 46, 48);
  addEdge(&graph, 46, 47);
  addEdge(&graph, 46, 45);
  addEdge(&graph, 57, 61);
  addEdge(&graph, 57, 60);
  addEdge(&graph, 57, 59);
  addEdge(&graph, 57, 58);
  addEdge(&graph, 59, 83);
  addEdge(&graph, 59, 60);
  addEdge(&graph, 58, 62);
  addEdge(&graph, 61, 62);
  addEdge(&graph, 11, 51);
  addEdge(&graph, 51, 56);
  addEdge(&graph, 56, 55);
  addEdge(&graph, 55, 52);
  addEdge(&graph, 52, 54);
  addEdge(&graph, 52, 53);
  addEdge(&graph, 64, 68);
  addEdge(&graph, 64, 65);
  addEdge(&graph, 64, 63);
  addEdge(&graph, 68, 67);
  addEdge(&graph, 65, 67);
  addEdge(&graph, 65, 66);
  addEdge(&graph, 5, 69);
  addEdge(&graph, 69, 73);
  addEdge(&graph, 69, 70);
  addEdge(&graph, 73, 74);
  addEdge(&graph, 73, 72);
  addEdge(&graph, 73, 70);
  addEdge(&graph, 70, 72);
  addEdge(&graph, 70, 71);
  addEdge(&graph, 45, 76);
  addEdge(&graph, 76, 79);
  addEdge(&graph, 76, 77);
  addEdge(&graph, 79, 80);
  addEdge(&graph, 79, 78);
  addEdge(&graph, 80, 77);
  addEdge(&graph, 78, 75);
  addEdge(&graph, 83, 86);
  addEdge(&graph, 83, 82);
  addEdge(&graph, 82, 81);
  addEdge(&graph, 86, 85);
  addEdge(&graph, 81, 84);
  addEdge(&graph, 85, 84);

  unsigned long time_t = micros();
  bfs(&graph, 0, 999, &output);
  time_t = micros() - time_t;

  Serial.flush();
  Serial.print(F("BFS time in microsseconds: "));
  Serial.print(time_t);

  /*for(int i=0; i<output.size; i++){
    Serial.flush();
    Serial.print(output.array[i]);
    Serial.print(" ");
  }
  Serial.println("");*/


  while(1){
  }

}
