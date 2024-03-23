// NU

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
// class Solution {
// public:
//     void reorderList(ListNode* head) {
//         int n=0;
//         ListNode *temp=head;
//       while(temp!=NULL)
//       {
//           temp=temp->next;
//           n++;
//       }
//         int half=0;
//         if(n%2==0)
//         {
//             half=n/2;
//         }
//         else
//         {
//             half=n/2+1;
//         }
        
//         temp=head;
//         for(int i=0;i<half;i++)
//         {
//          temp=temp->next;   
//         }
//         ListNode *prev=NULL;
//         while(temp!=NULL)
//         {
//             ListNode *a=temp->next;
//             temp->next=prev;
//             prev=temp;
//             temp=a;
//         }
//         temp=head;
//         int tryy=0;
//         // cout<<prev->val;
//         // cout<<prev->next->val;
// while(half>1)
// {
//     // cout<<"n"<<prev->val<<endl;
//     ListNode*a=temp->next;
//     temp->next=prev;
//     prev=prev->next;
//         // cout<<"n"<<prev->val<<endl;
//     // prev->next=a;
//     // temp->next->next=a;
//     temp=temp->next;
//     temp->next=a;
    
//     cout<<"n"<<a->val<<endl;

//     temp=temp->next;
//     // temp=a;
//     half--;
// }
//     }
// };



class Solution {
public:
    void reorderList(ListNode* head) {
        // base case : linkedlist is empty
        if (!head) return;
        
        // finding the middle with the help of two pointer approach
        ListNode *tmp = head, *half = head, *prev = NULL;
        while (tmp->next && tmp->next->next) {
            tmp = tmp->next->next;
            half = half->next;
        }
        
        // adding one bit in case of lists with even length
        if (tmp->next) half = half->next;
        
        // Now reverse the second half
        while (half) {
            tmp = half->next;
            half->next = prev;
            prev = half;
            half = tmp;
        }
        half = prev;
        
        // After reversing the second half, let's merge both the halfes
        while (head && half) {
            tmp = head->next;
            prev = half->next;
            head->next = half;
            half->next = tmp;
            head = tmp;
            half = prev;
        }
        
        // Base case : closing when we had even length arrays
        if (head && head->next) head->next->next = NULL;
    }
};