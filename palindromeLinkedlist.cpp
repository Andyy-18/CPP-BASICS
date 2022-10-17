#include <bits/stdc++.h>
using namespace std;
struct listNode
{
    int value;
    listNode* next;
    listNode(int x)
    {
        value = x;
        next = NULL;
    }
};
bool palindromeCheck(listNode* head)
{
    if(head == NULL)
        return true;
    if(!palindromeCheck(head->next))
        return false;
    if(front->value != head->value)
        return false;
    front = front->next;
    return true;
}
bool isPalindrome(listNode* head)
{
    front = head;
    return palindromeCheck(head);
}
int main()
{
    listNode* head = new listNode(1);
    head->next = new listNode(2);
    head->next->next = new listNode(3);
    head->next->next->next = new listNode(2);
    head->next->next->next->next = new listNode(1);
    cout << (isPalindrome(head) ? "true\n" : "false\n");
    return 0;
}