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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     ListNode *dummy =new ListNode(-1);
        ListNode *curr=dummy;
        int carry=0;
        int sum=0;
        while(l1!=NULL || l2!=NULL)
        {
            sum=carry;
            //intuition behind the next 3 lines and condition of if(l1) and if(l2) is for test cases like : {[9], [1,1]},{[1],[2,2]} etc
            if(l1) sum=sum+l1->val;
            if(l2) sum+=l2->val;
            // sum=sum+l1->val+l2->val;
            carry=sum/10;
            sum=sum%10;
            //carry=1;sum=0
            ListNode *s=new ListNode();
            s->val=sum;
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
            curr->next=s;
            curr=curr->next;
        }
        if(carry)
        {
            ListNode *s=new ListNode(carry);
            curr->next=s;
            curr=curr->next;
        }
        return dummy->next;
    }
};














   
//         int carry=0;
//         // int flag=0;
//          ListNode *s=new ListNode();
//             ListNode *temp=s;
//         while(l1!=NULL && l2!=NULL)
//         {
            
//             int sum=l1->val+l2->val;
//             int summ=sum+carry;
            
//             if(sum>9)
//             {
//                 carry=1;
//                 summ=sum-10;
//             }
//             else
//             {
//                 carry=0;
//             }
            
//             // temp->next=s;
//            ListNode *dummy=new ListNode();
//             dummy->val=summ;
//             temp->next=dummy;
//             temp=temp->next;
//             // if(flag==0)
//             // {
//             //  s->next=dummy;
//             //     flag=1;
//             // }
//             l1=l1->next;
//             l2=l2->next;
//         }
//         return s->next;
        

