#include <iostream>
#include <vector>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    if(list1==nullptr&&list2==nullptr) return nullptr;
    if(list1==nullptr) return list2;
    if(list2==nullptr) return list1;

    ListNode* dummy = new ListNode(-1);
    ListNode* m1 = list1;
    ListNode* m2 = list2;
    ListNode* point = dummy;
    while (m1!=nullptr && m2!=nullptr)
    {
        if(m1->val<=m2->val){
            point->next = m1;
            m1=m1->next;
            point=point->next;
        }
        else if(m1->val>m2->val){
            point->next=m2;
            m2=m2->next;
            point=point->next;
        }
    }
    while (m1!=nullptr)
    {
        point->next=m1;
        m1=m1->next;
        point=point->next;
    }
    while (m2!=nullptr)
    {
        point->next=m2;
        m2=m2->next;
        point=point->next;
    }
    
    return dummy->next;
}