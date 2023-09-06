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
    int getLength(ListNode* head){
        int ans =0;
        while(head){
            ans++;
             head = head-> next; 
            
          
        }
        return ans;
    }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int listSize = getLength(head);
        int partSize = listSize /k;
        int extraNode = listSize % k;
        vector <ListNode*> ans;
        ListNode*curr = head, *prev= NULL;
        while(head){
            int eachPart = partSize;
            ans.push_back(curr);
            while(eachPart >0){
                prev = curr;
                curr = curr-> next;
                eachPart--;
            }
            if(curr != NULL && extraNode != NULL){
                extraNode--;
                prev = curr;
                curr = curr-> next;
            }
            if(prev != NULL){
                head = curr;
                prev-> next = NULL;
            }
            
        }
        while(ans.size() != k)
            ans.push_back(NULL);
        
        return ans;
    }
};