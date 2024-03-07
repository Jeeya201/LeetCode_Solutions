/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int size=0;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            size++;
        }
        int mid=size/2;
        temp=head;
        for(int i=0;i<mid;i++)
        {
            temp=temp->next;
        }
        return temp;
       
    }
};





























//  ListNode *temp=head;
//         int n=1;
//         while(temp->next!=NULL)
//         {
//             temp=temp->next;
//             n++;
//         }
//         temp=head;
//         for(int i=0;i<n/2;i++)
//         {
//             temp=temp->next;
//         }
        
//         // cout<<n;
//         return temp;
        