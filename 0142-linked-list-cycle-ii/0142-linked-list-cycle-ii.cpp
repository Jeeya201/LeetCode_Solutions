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
    ListNode *detectCycle(ListNode *head) {
        ListNode *f=head;
        ListNode *s=head;
        while(f!=NULL && f->next!=NULL)
        {
            f=f->next->next;
            s=s->next;
            if(f==s)
            {
                s=head;
                while(f!=s)
                {
                    f=f->next;
                    s=s->next;
                }
                return f;
            }           
        }
        return NULL;
    }
};





















//   ListNode *f=head;
//         ListNode *s=head;
//         if(head==NULL||f->next==NULL)
//         {
//             return NULL;
//         }
//         bool flag=0;
//         while(f!=NULL && f->next!=NULL)
//         {
//             f=f->next->next;
//             s=s->next;
//             if(f==s)
//             {
//                 flag=1;
//                 break;
//             }
//         }
//         if(flag==1)
//         {
//           f=head;
//         while(f!=s)
//         {
//             f=f->next;
//             s=s->next;
//             return f;
//         }  
//         }
//         else
//         {
//             return {};
//         }
//         return {};