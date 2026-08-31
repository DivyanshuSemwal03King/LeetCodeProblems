#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

vector<int> nodesBetweenCriticalPoints(ListNode *head)
{

    ListNode *temp = head->next;
    ListNode *back = head;
    ListNode *front = temp->next;

    int index = 2;
    int miniDis = INT_MAX, maxiDis = -1;
    int lastCritical = -1;
    int firstCritical = -1;
    int currentCritical = -1;

    while (front)
    {  
        //Local Minimum
        if (back->val > temp->val && temp->val < front->val)
        {
            currentCritical = index;
        }
        //Local Maximum
        else if (back->val < temp->val && temp->val > front->val)
        {
            currentCritical = index;
        }
        //If critical point found
        if (currentCritical != -1)
        {
            //first critical point
            if (firstCritical == -1)
            {
                firstCritical = currentCritical;
            }

            //calculate minimum distance
            if (lastCritical != -1)
            {
                miniDis = min(miniDis, currentCritical - lastCritical);
            }

            //update the last critical point
            lastCritical = currentCritical;
            //Reset for next iteration
            currentCritical = -1;
        }

        index++;

        back = temp;
        temp = front;
        front = front->next;
    }

    //Less than two critical points
  if(firstCritical==-1||firstCritical==lastCritical){
    return {-1,-1};

  }
    maxiDis = lastCritical-firstCritical;

    return {miniDis, maxiDis};
}

