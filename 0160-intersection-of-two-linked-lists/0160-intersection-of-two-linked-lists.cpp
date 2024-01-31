/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       if(headA==NULL || headB==NULL) return NULL;
        ListNode *t1=headA;
        ListNode *t2=headB;
        while(t1!=t2)
        {
            t1=t1->next;
            t2=t2->next;
            if(t1==t2) return t1; //or return t2;
            if(t1==NULL) t1=headB;
            if(t2==NULL) t2=headA;
            
        }
        return t1; // or return t2;
        
        
    }
};



























//  ListNode *d1=headA;
//         ListNode *d2=headB;
//         int c1=1;
//         int c2=1;
//         while(d1!=NULL)
//         {
//             d1=d1->next;
//             c1++;
//         }
//         while(d2!=NULL)
//         {
//             d2=d2->next;
//             c2++;
//         }
//         d1=headA;
//         d2=headB;
//         int c=0;
//         if(c1>c2)
//         {
//             c=c1-c2;
//             cout<<c<<endl;
//             for(int i=0;i<c;i++)
//             {
//                 d1=d1->next;
//             }
//         }
//         else
//         {
//             c=c2-c1;
//             cout<<c<<endl;
//             for(int i=0;i<c;i++)
//             {
//                 d2=d2->next;
//             }
//         }
        
//         while(d1!=NULL && d2!=NULL)
//         {
//             if(d1==d2)
//             {
//                 return d2;
//             }
//             else
//             {
//                 d1=d1->next;
//                 d2=d2->next;
//             }
//         }
//         return {};