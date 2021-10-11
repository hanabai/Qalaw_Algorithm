#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <QString>
#include <QVector>
#include <QMap>

typedef QVector<int>  iVec;

struct ListNode{
    int data;
    struct ListNode* next;
};

class LinkedList
{
public:
    LinkedList();
    ~LinkedList();

    void InitVector();
    ListNode* CreateList();
    void    ShowListNode(ListNode* lHead);

private:
    ListNode* head;
    iVec      ivInitData;
};

#endif // LINKEDLIST_H
