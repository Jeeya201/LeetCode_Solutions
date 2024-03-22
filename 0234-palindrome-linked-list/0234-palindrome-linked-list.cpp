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
    bool isPalindrome(ListNode* head) {
  ListNode *temp=head;
        int n=0;
        ListNode *prev=NULL;
        while(temp!=NULL)
        {
            temp=temp->next;
            n++;
        }
        if(n==1)
        {
            return true;
        }
        
        
        int half=n/2;
        temp=head;
        for(int i=0;i<half;i++)
        {
            temp=temp->next;
        }
        
        // half over hone ke baad waali value is second list ki firist value
        ListNode *list2=NULL;
        if(n%2==0)
        {
            list2=temp;
        }
        else
        {
            list2=temp->next;
        }
                
        temp=head;
for(int i=0;i<half;i++)
{
    ListNode*a=temp->next;
    temp->next=prev;
    prev=temp;
    temp=a;
}
        cout<<"list1"<<prev->val;
        cout<<"list2"<<list2->val;
 //prev ki value is  start of reversed first list       
        for(int i=0;i<half;i++)
        {
            if(prev->val!=list2->val)
            {
                return false;
            }
            prev=prev->next;
            list2=list2->next;
        }
        return true;
    }
};

