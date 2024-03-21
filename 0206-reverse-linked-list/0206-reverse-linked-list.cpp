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
    ListNode* reverseList(ListNode* head) {
              //Self Code
        
//         ListNode *curr=head;
        
//         if(curr==NULL||curr->next==NULL)
//         {
//             return curr;
//         }
//         if(curr->next->next==NULL)
//         {
//             ListNode *temp=curr->next; 
//             temp->next=curr;
//             curr->next=NULL;
//             return temp;
//         }
//                 ListNode *temp=curr->next;

//         ListNode*temp2=temp->next; 
      
//         curr->next=NULL;
//         // ListNode* ans=new ListNode();
//         while(temp->next!=NULL)
//         {
//         temp->next=curr;
//             curr=temp;
//             temp=temp2;
//             temp2=temp2->next; 
//         }
//         temp->next=curr;
//         return temp;
        
        // Easiest Code 
     ListNode *temp=head;
     ListNode *prev=NULL;
     while(temp!=NULL)
     {
         ListNode *nextNode=temp->next;
         temp->next=prev;
         prev=temp;
         temp=nextNode;
     }
     return prev;

    }
};












//  ListNode *temp=NULL;
//         ListNode *temp2=head;
//         ListNode *temp3=temp2->next;
//         while(temp2!=NULL)
//         {
            
//             temp2->next=temp;
//             // cout<<temp3->next->val<<endl;
//             temp=temp2;
//             if(temp3==NULL)
//             {
//                 temp2=NULL;
//             }
//             else
//             {
//             temp2=temp3;                
//                 temp3=temp3->next;
//             }
            
            
//         }
//         return temp;