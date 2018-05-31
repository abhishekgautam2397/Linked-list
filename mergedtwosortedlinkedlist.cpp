# Linked-list
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* sorting;
    ListNode* head=NULL;
    if(A==NULL) return B;
    if(B==NULL) return A;
    if(A && B)
    {
        if(A->val <= B->val)
        {
            sorting= A;
            A=sorting->next;
        }
        else
        {
            sorting=B;
            B=sorting->next;
        }
    }
    head=sorting;
    while(A && B)
    {
        if(A->val <= B->val)
        {
            sorting->next=A;
            sorting=A;
            A=sorting->next;
        }
        else
        {
            sorting->next=B;
            sorting=B;
            B=sorting->next;
        }
    }
    if(A==NULL) sorting->next=B;
    if(B==NULL) sorting->next=A;
    return head;
}
