#pragma once

class WorkerBase;

class NodeBase
{
public:
    virtual void exec(WorkerBase* w) = 0;
};

class NodeA : public NodeBase
{
public:
    virtual void exec(WorkerBase* w);
};
class NodeB : public NodeBase
{
public:
    virtual void exec(WorkerBase* w);
};
class NodeC : public NodeBase
{
public:
    virtual void exec(WorkerBase* w);
};
