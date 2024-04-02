#include <iostream>
#include <list>
using namespace std;

struct Node
{
    // A node will 2 entities
    // 1. An `int` called `label`
    // 2. A `list` of `int`s called `neighbours`
    // <--- ADD YOUR CODE HERE --->
    
    int label;
    list<int> neighbours;
};

struct Graph
{
    // graph will have an array of type "Node" with length specified by n
    int n = 8;
    Node *nodes = new Node[n];

    void initializeNodes()
    {
        // iterate through the nodes and assign labels
        for (int i = 0; i < n; i++)
        {
            nodes[i].label = i + 1;
        }
    }

    void addEdge(int u, int v)
    {
        // Select node u and push v into u's neighbour list
        // Select node v and push u into v's neighbour list
        // <--- ADD YOUR CODE HERE --->
        
        nodes[u - 1].neighbours.push_back(v);
    }

    void print()
    {
        // Iterate through each node and print its neighbours
        for (int i = 0; i < n; i++)
        {
            cout << nodes[i].label << "-->";
            for (auto nd : nodes[i].neighbours)
            {
                cout << nd << " ";
            }
            cout << "\n";
        }
    }
};

int main()
{
    Graph *g = new Graph;
    g->initializeNodes();
    
    // Add the edges for the graph
    // <--- ADD YOUR CODE HERE --->

    // Print the graph adjaceny list
    
    g->addEdge(1, 2);
    g->addEdge(1, 3);
    g->addEdge(1, 5);
    g->addEdge(1, 4);
    g->addEdge(2, 3);
    g->addEdge(2, 6);
    g->addEdge(4, 6);
    g->addEdge(4, 7);
    g->addEdge(4, 8);
    g->addEdge(5, 6);
    g->addEdge(5, 7);
    g->addEdge(5, 8);
  

    g->print();

    delete g;
    return 0;
}
