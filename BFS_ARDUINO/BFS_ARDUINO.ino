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

  addEdge(&graph,98,99);
    addEdge(&graph,97,98);
    addEdge(&graph,96,97);
    addEdge(&graph,93,96);
    addEdge(&graph,93,94);
    addEdge(&graph,95,93);
    addEdge(&graph,93,92);
    addEdge(&graph,92,95);    
    addEdge(&graph,91,95);
    addEdge(&graph,90,91);
    addEdge(&graph,90,86);
    addEdge(&graph,89,90);
    addEdge(&graph,88,89);
    addEdge(&graph,87,88);
    addEdge(&graph,85,86);
    addEdge(&graph,85,84);
    addEdge(&graph,84,87);
    addEdge(&graph,84,86);
    addEdge(&graph,82,85); 
    addEdge(&graph,80,87);
    addEdge(&graph,79,80);
    addEdge(&graph,78,81);
    addEdge(&graph,78,79);
    addEdge(&graph,77,78);
    addEdge(&graph,76,83);
    addEdge(&graph,76,82); 
    addEdge(&graph,76,77);
    addEdge(&graph,76,71);
    addEdge(&graph,75,76);
    addEdge(&graph,73,75);
    addEdge(&graph,72,73);
    addEdge(&graph,72,74);
    addEdge(&graph,71,69);
    addEdge(&graph,67,72);
    addEdge(&graph,69,70);
    addEdge(&graph,68,70);
    addEdge(&graph,68,69);
    addEdge(&graph,67,68);
    addEdge(&graph,66,74);
    addEdge(&graph,66,67);
    addEdge(&graph,64,66);
    addEdge(&graph,62,66);
    addEdge(&graph,63,64);
    addEdge(&graph,62,66);
    addEdge(&graph,62,63);
    addEdge(&graph,61,65);
    addEdge(&graph,61,62);
    addEdge(&graph,60,61);
    addEdge(&graph,59,60);
    addEdge(&graph,58,60);
    addEdge(&graph,58,57);
    addEdge(&graph,57,59);
    addEdge(&graph,56,55);
    addEdge(&graph,55,58);
    addEdge(&graph,54,56);
    addEdge(&graph,53,54);
    addEdge(&graph,51,53);
    addEdge(&graph,50,52);
    addEdge(&graph,50,51);
    addEdge(&graph,50,48);
    addEdge(&graph,49,52);
    addEdge(&graph,48,52);
    addEdge(&graph,47,50);
    addEdge(&graph,47,49);
    addEdge(&graph,47,48);
    addEdge(&graph,46,47);
    addEdge(&graph,45,46);
    addEdge(&graph,44,46);
    addEdge(&graph,44,45);
    addEdge(&graph,43,44);
    addEdge(&graph,42,43);
    addEdge(&graph,41,42);
    addEdge(&graph,40,42);
    addEdge(&graph,39,41);
    addEdge(&graph,38,40);
    addEdge(&graph,37,39);
    addEdge(&graph,37,38);
    addEdge(&graph,37,36);
  addEdge(&graph,35,37);
  addEdge(&graph,34,35);
  addEdge(&graph,33,34);
  addEdge(&graph,33,31);
  addEdge(&graph,32,34);
  addEdge(&graph,31,32);
  addEdge(&graph,30,31);
    addEdge(&graph,27,28);
    addEdge(&graph,26,29);
    addEdge(&graph,26,27);
    addEdge(&graph,25,30);
    addEdge(&graph,25,26);    
    addEdge(&graph,23,22);
    addEdge(&graph,22,25);
    addEdge(&graph,20,24);
    addEdge(&graph,20,23);
    addEdge(&graph,20,21);
    addEdge(&graph,18,19);
    addEdge(&graph,17,18);
    addEdge(&graph,16,17);
    addEdge(&graph,14,16);
    addEdge(&graph,14,11);
    addEdge(&graph,13,20);
    addEdge(&graph,13,14);
    addEdge(&graph,10,15);
    addEdge(&graph,10,13);
    addEdge(&graph,10,12);
    addEdge(&graph, 9,12);
    addEdge(&graph, 8, 9);
    addEdge(&graph, 5, 8);
    addEdge(&graph, 4, 7);
    addEdge(&graph, 4, 6);
  addEdge(&graph, 3, 4);
  addEdge(&graph, 1, 5);
  addEdge(&graph, 1, 3);
  addEdge(&graph, 0, 3);
  addEdge(&graph, 0, 2);
  addEdge(&graph, 0, 1);

  bfs(&graph, 0, 999, &output);

  for(int i=0; i<output.size; i++){
    Serial.print(output.array[i]);
    Serial.print(" ");
  }
  Serial.println("");


  while(1){
  }

}
