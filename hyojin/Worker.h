#pragma once

#include <iostream>
#include "Node.h"

using namespace std;

class WorkerBase
{
public:
    virtual void default_exec(NodeBase*) = 0;

    virtual void exec_a(NodeA* n) { default_exec(n); }
    virtual void exec_b(NodeB* n) { default_exec(n); }
    virtual void exec_c(NodeC* n) { default_exec(n); }
};

class Worker : public WorkerBase
{
    virtual void default_exec(NodeBase* n) { /* 기본적으로 할일 */ cout << "default" << endl; }

    virtual void exec_b(NodeB* n) { /* NodeB일 경우 specialization */  cout << "NodeB exec" << endl; }
};