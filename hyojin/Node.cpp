#include "Node.h"
#include "Worker.h"

    
void NodeA::exec(WorkerBase* w)
{
    w->exec_a(this);
}

void NodeB::exec(WorkerBase* w)
{
    w->exec_b(this);
}

void NodeC::exec(WorkerBase* w)
{
    w->exec_c(this);
}
