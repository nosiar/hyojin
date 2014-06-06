#include <iostream>
#include <vector>

#include "Node.h"
#include "Worker.h"

using namespace std;



class Traverser
{
public:
    Traverser(WorkerBase* w) : w(w)
    {
        nodes.push_back(new NodeA);
        nodes.push_back(new NodeB);
        nodes.push_back(new NodeA);
        nodes.push_back(new NodeC);
    }
    ~Traverser()
    {
        for (auto& n : nodes)
        {
            delete n;
        }
    }

    void traverse()
    {
        for (auto& n : nodes)
        {
            n->exec(w);
        }
    }
private:
    WorkerBase* w;
    vector<NodeBase *> nodes;
};


int main()
{
    Traverser(new Worker).traverse();
}