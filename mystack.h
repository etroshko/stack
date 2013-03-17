#ifndef MYSTACK
#define MYSTACK

typedef int Data;

struct Node
{
    Data datum;
    Node *link;
};
bool isempty(Node *top);
void clear (Node *&top);
void push (Node *&top, Data dt);
Data pop(Node *&top);
Data ontop(Node *top);

#endif
