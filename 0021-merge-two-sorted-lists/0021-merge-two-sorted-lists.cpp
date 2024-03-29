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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *l1=list1;
        ListNode *l2=list2;
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        ListNode *temp=NULL;
        if(l1->val>l2->val)
        {
            temp=l1;
            l1=l2;
            l2=temp;
        }
        ListNode *result=l1;
        while(l1!=NULL && l2!=NULL)
        {
            while(l1!=NULL && l1->val<=l2->val)
            {
                temp=l1;
                l1=l1->next;
            }
            temp->next=l2;
            ListNode *t=l1;
            l1=l2;
            l2=t;
        }
        return result;
    }
};






















// ListNode* d=new ListNode();
//         if(list1->val>=list2->val)
//         {
//             d->val=list2->val;
//             list2=list2->next;
//         }
//         else
//         {
//             d->val=list1->val;
//             list1=list1->next;
//         }
//             ListNode * dd=d;        
//         while(list1!=NULL && list2!=NULL)
//         {
//             // cout<<list1->val<<" "<<list2->val;
//             if(list1->val<list2->val)
//             {
//                 ListNode *dummy=new ListNode();
//                 dummy->val=list1->val;
//                 dd->next=dummy;
//                 dd=dd->next;
//                 list1=list1->next;
//             }
//             else
//             {
//                 ListNode *dummy =new ListNode();
//                 dummy->val=list2->val;
//                 dd->next=dummy;
//                 dd=dd->next;
//                 list2=list2->next;
//             }
//         }
//         if(list1==NULL)
//         {
//             dd->next=list2;
//         }
//         else if(list2==NULL)
//         {
//             dd->next=list1;
//         }
//         return d;