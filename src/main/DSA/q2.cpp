#include "../DSA_Master.h"

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        unique_ptr<ListNode> dummy = make_unique<ListNode>(0);
        ListNode *curr = dummy.get();

        int carry = 0;
        while (l1 != nullptr || l2 != nullptr || carry != 0)
        {
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;

            int sum = x + y + carry;
            carry = sum/10;

            curr->next = new ListNode(sum%10);

            curr = curr->next;

            if(l1 != nullptr) l1 = l1->next;
            if(l2 != nullptr) l2 = l2->next;
        }
        ListNode *result = dummy->next;
        dummy->next = nullptr;
        return result;
    }
};

// Helper function to print the list
void printList(ListNode *head)
{
    while (head)
    {
        std::cout << head->val << (head->next ? " -> " : "");
        head = head->next;
    }
    std::cout << std::endl;
}

int main()
{
    Solution sol;

    // List 1: 2 -> 4 -> 3 (represents 342)
    ListNode *l1 = new ListNode(2, new ListNode(4, new ListNode(3)));

    // List 2: 5 -> 6 -> 4 (represents 465)
    ListNode *l2 = new ListNode(5, new ListNode(6, new ListNode(4)));

    std::cout << "Input L1: ";
    printList(l1);
    std::cout << "Input L2: ";
    printList(l2);

    ListNode *result = sol.addTwoNumbers(l1, l2);

    std::cout << "Result:   ";
    printList(result);
    // Output should be: 7 -> 0 -> 8 (represents 807)

    return 0;
}
