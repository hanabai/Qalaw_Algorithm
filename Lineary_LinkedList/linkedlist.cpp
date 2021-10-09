#include "linkedlist.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList()
{
    head=new ListNode;
    head->data=0;
    head->next=NULL;

    InitVector ();
}

LinkedList::~LinkedList()
{
    delete head;
}

void LinkedList::InitVector()
{
    ivInitData={1,2,3,4,5};
}

ListNode *LinkedList::CreateList()
{
    ListNode* p,*s;
    p=head;
    for(iVec::iterator it=ivInitData.begin ();it!=ivInitData.end ();++it)
    {
        s=new ListNode;
        s->data=*it;
        p->next=s;
        p=s;
    }
    p->next=NULL;
    return head;
}

void LinkedList::ShowListNode(ListNode *lHead)
{
    ListNode* s=lHead;
    while (s!=NULL) {
        cout<<"ListNode:"<<s<<"\t"<<s->data<<"\t"<<s->next<<endl;
        s=s->next;
    }
}
