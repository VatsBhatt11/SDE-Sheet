class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l3=new ListNode();
        ListNode *head=l3;
        int x;
        l3->val = (l1->val + l2->val)%10;
        x = (l1->val + l2->val)/10;
        l3->next = NULL;
        l1=l1->next;
        l2=l2->next;
        while(l1 && l2)
        {
            ListNode *temp=new ListNode();
            temp->next=NULL;
            temp->val = (x + l1->val + l2->val)%10;
            l3->next=temp;
            l3=temp;
            x = (x + l1->val + l2->val)/10;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1)
        {
            ListNode *temp=new ListNode();
            temp->next=NULL;
            temp->val = (x + l1->val)%10;
            l3->next=temp;
            l3=temp;
            x = (x + l1->val)/10;
            l1=l1->next;
        }
        while(l2)
        {
            ListNode *temp=new ListNode();
            temp->next=NULL;
            temp->val = (x + l2->val)%10;
            l3->next=temp;
            l3=temp;
            x = (x + l2->val)/10;
            l2=l2->next;
        }
        if(x!=0)
        {
            ListNode *temp=new ListNode();
            temp->next=NULL;
            temp->val = x;
            l3->next=temp;
            l3=temp;
        }
        return head;
    }
};