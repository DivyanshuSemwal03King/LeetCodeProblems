#include <iostream>
#include <unordered_map>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode *head)
{
     if(head==nullptr|| head->next==nullptr) return false;
    unordered_map<ListNode* , bool> visited;

    ListNode* current = head; 

    while (current!=nullptr)
    {
        if(visited[current]==true){
            return true;
        }
        visited[current] = true;
        current=current->next;
    }
    return false;
}