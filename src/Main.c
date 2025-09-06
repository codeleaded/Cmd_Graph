#include "C:/Wichtig/System/Static/Container/Graph.h"

int main(){

    Graph graph = Graph_New(sizeof(int),ADJACENCY_MATRIX);

    Graph_Push(&graph,"FIRT");
    Graph_Push(&graph,"SECD");
    Graph_Push(&graph,"THID");
    Graph_Push(&graph,"FORT");
    Graph_Push(&graph,"FITH");

    Graph_SetEdgeNoDir(&graph,0,1,60);
    Graph_SetEdgeNoDir(&graph,0,2,61);
    Graph_SetEdgeNoDir(&graph,0,3,62);

    Graph_SetEdge(&graph,1,1,99);
    Graph_SetEdgeNoDir(&graph,1,2,63);
    Graph_SetEdgeNoDir(&graph,1,4,64);

    Graph_SetEdgeNoDir(&graph,2,3,65);
    Graph_SetEdgeNoDir(&graph,2,4,66);

    Graph_Print(&graph);

    Graph_Free(&graph);

    return 0;
}