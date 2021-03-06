#include <iostream>
#include <vector>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *first = head;
        //first pointer will point to the head of the linked list
        ListNode *second = head;
        //second pointer will point to the Nth node from the beginning

        for (int i = 0; i < n; i++)
        {
            if (second->next == NULL)
            {
                if (i == n - 1)
                {
                    head = head->next;
                }
                return head;
            }
            second = second->next;
        }

        while (second->next != NULL)
        {
            first = first->next;
            second = second->next;
        }

        first->next = first->next->next;
        return head;
    }
};