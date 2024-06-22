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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        // ListNode* node1=head;
        // ListNode* node2=head->next;
        // int i=0,j=0;
        
        // while(node1!=nullptr && node2!=nullptr){
        //     i=node1->val;
        //     j=node2->val;
        //     node2->val=i;
        //     node1->val=j;
        //     if(node2->next!=nullptr && node2->next->next!=nullptr){
        //         node1=node2->next;
        //         node2=node2->next->next;
        //     }else{
        //         break;
        //     }
        // }
        ListNode* dummyNode=new ListNode();
        ListNode* prev=dummyNode;
        ListNode* curr=head;
        while(curr!=nullptr && curr->next!=nullptr){
            prev->next=curr->next;
            curr->next=prev->next->next;
            prev->next->next=curr;

            prev=curr;
            curr=curr->next;
        }
        
        return dummyNode->next;
    }
};
