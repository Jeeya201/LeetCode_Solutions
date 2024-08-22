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

// Solved on my own:
// Intuition:
// 1. Make the first half of the list reversed.
// 2. Now , starting from the middle->next element (ie , second half) , just run a check if reversed list ka first == second half waali list ka first and s on for second, third , etc. If yes, its palindrom . If even a single doesnt match ,its not a palindrome


class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *temp=head;
        stack<int> st;
        while(temp!=NULL)
        {
            st.push(temp->val);
            temp=temp->next;
        }
        
        temp=head;
        while(temp!=NULL && !st.empty())
        {
            if(temp->val!=st.top())
            {
                return false;
            }
            temp=temp->next;
            st.pop();
        }
        return true;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//   ListNode *temp=head;
//         int n=0;
//         ListNode *prev=NULL;
//         //Getting count
//         while(temp!=NULL)
//         {
//             temp=temp->next;
//             n++;
//         }
        
//         // Edge case of [1], or [4] , or[6] etc
//         if(n==1)
//         {
//             return true;
//         }
        
        
//         int half=n/2;
        
//         // Traversing to get the first element of second half of list . We basically store that element , because , in the subsequent step, we are gooing to break the link(while reversing first half !!)
//         temp=head;
//         for(int i=0;i<half;i++)
//         {
//             temp=temp->next;
//         }
        
//         // half over hone ke baad waali value is second list ki first value and we store it
//         ListNode *list2=NULL;
//         if(n%2==0) //If even 1,2,2,1 then directly 2 is obtained as second list ki 1st value
//         {
//             list2=temp;
//         }
//         else //If odd 1,2,6,2,1 then JUST IGNORE middle element ie 6 , so here, temp=6 and thus  we do temp->next which gves 2 which is dewsired second list ki first value  
//         {
//             list2=temp->next;
//         }
          
//         // REVERSING first half
//         temp=head;
// for(int i=0;i<half;i++)
// {
//     ListNode*a=temp->next;
//     temp->next=prev;
//     prev=temp;
//     temp=a;
// }------// Finally the prev will act as first node for the reversed first half
        
        
        
//         // cout<<"list1"<<prev->val;
//         // cout<<"list2"<<list2->val;
        
//     // thus prev has first list ki first value; and list2 has second listki first values . Now smply compare :
        
//         for(int i=0;i<half;i++)
//         {
//             if(prev->val!=list2->val)
//             {
//                 return false;
//             }
//             prev=prev->next;
//             list2=list2->next;
//         }
//         return true;
    }
};

