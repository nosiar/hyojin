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
    virtual void default_exec(NodeBase* n) { /*�⺻������ ����*/ cout << "default" << endl; }

    virtual void exec_b(NodeB* n) { /* NodeB�� ��� specialize*/  cout << "NodeB exec" << endl; }
};