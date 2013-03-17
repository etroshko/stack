#include "mystack.h"
#include <iostream>



void push (Node *&top, Data dt)
{
    Node *p=NULL;
    p=new Node;
    p->datum=dt;
    p->link=top;
    top=p;
    p=NULL;
}

Data pop(Node *&top)
{
    Node *p=top;
    if (p)
    {
        top=top->link;
        Data dt=p->datum;
        p->datum=0;
        p->link=NULL;
        delete p;
        p=NULL;
        return dt;
    }
    return -1;
}
Data ontop(Node *top)
{
    if (top)
        return top->datum;
    else
        return -1;
}
void clear (Node *&top)
{
    while(!isempty(top))
    {
        Node *p;
        p=top;
        top=p->link;
        p->datum=0;
        p->link=NULL;
        delete p;
        p=NULL;
    }
}
bool isempty(Node *top)
{
    return top==NULL;
}


