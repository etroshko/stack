#include "../zuzu/mystack.h"
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    Node *a=NULL;
    int number,elements;
    cout<<"Введите количество элементов ";
    cin>>elements;
    for (int i=0; i<elements; ++i)
    {
        cout<<"Введите элемент ";
        cin>>number;
        push(a,number);
    }
    cout<<"На вершине: "<<ontop(a)<<endl;

    if (isempty(a))
    {
        cout<<"Пустой стек"<<endl;
    }
    else
    {
        cout<<"Непустой стек"<<endl;
    }
    for (int i=0; i<elements; ++i)
    {
        cout<<pop(a)<<endl;
    }
    clear(a);
    cout<<"Очистка завершена"<<endl;
    if (isempty(a))
    {
        cout<<"Пустой стек"<<endl;
    }
    else
    {
        cout<<"Непустой стек"<<endl;
    }
    cout<<endl;
    return 0;
}

