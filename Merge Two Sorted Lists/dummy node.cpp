#include <iostream>
#include <vector>
using namespace std;

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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode ans;
        ListNode *head_ans = &ans;
        while (list1 != nullptr && list2 != nullptr)
        {

            if (list1->val <= list2->val)
            {
                head_ans->next = list1;
                list1 = list1->next;
            }
            else
            {
                head_ans->next = list2;
                list2 = list2->next;
            }
            head_ans = head_ans->next;
        }
        if (list1 == nullptr)
        {
            head_ans->next = list2;
            return ans.next;
        }
        if (list2 == nullptr)
        {
            head_ans->next = list1;
            return ans.next;
        }

        return ans.next;
    }
};

void print(ListNode *list)
{
    ListNode *node = list;
    while (node != nullptr)
    {
        cout << node->val << endl;
        node = node->next;
    }
}

int main()
{
    Solution s;
    ListNode *Ans;

    // init array
    ListNode *headinput1;
    ListNode *headinput2;

    int input1_arraySize = 3;
    int input2_arraySize = 3;
    // int input2_arraySize = 1;
    int input1_array[input1_arraySize] = {1, 2, 4};
    int input2_array[input2_arraySize] = {1, 3, 4};
    // int input2_array[input2_arraySize] = {1};

    ListNode *input1 = new ListNode(input1_array[0]);
    ListNode *input2 = new ListNode(input2_array[0]);

    headinput1 = input1;
    headinput2 = input2;
    for (int i = 1; i < input1_arraySize; i++)
    {
        ListNode *node = new ListNode(input1_array[i]);
        input1->next = node;
        input1 = node;
    }

    for (int i = 1; i < input2_arraySize; i++)
    {
        ListNode *node = new ListNode(input2_array[i]);
        input2->next = node;
        input2 = node;
    }

    Ans = s.mergeTwoLists(headinput1, headinput2);
    print(Ans);

    // head = s.mergeTwoLists(input1,input2);
    return 0;
}