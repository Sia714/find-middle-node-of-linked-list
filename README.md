# Problems Based On Linked List
------------------------------------
| S.No | File Name | Overview | Explanation |
|------|-----------|----------|---------|
| 1 | [1_linkedlistmiddlenode](https://github.com/Sia714/linked-list-problems/blob/main/1_linkedlistmiddlenode.cpp) | Finding and printing the middle node of a linked list in two ways:<br>(i) Two isolated loops <br>(ii) Single loop | `(i)Two isolated loops:`<br>We use while loop and a "count" variable to find the length of given linked list. After getting the count, we iterate temporary node c(initially pointing to head) to 'count'/2, hence, reaching the middle node. Afterwards it prints the value of c->data, which is the middle node of the given linked list.</p><br>`(ii) Single Loop:` <br> We use two variables slow and fast both pointing to the head of linked list. Inside the while loop, we are incrementing pointer fast by two and pointer slow by one, which implies that fast pointer is moving at double the speed of slow pointer. So, when the fast pointer reaches null or its next is null then the slow pointer points to the middle node. After the while loop, slow->data is printed, which is the middle node of the given linked list.
| 2 | [2_linkedlistsortedinsert](https://github.com/Sia714/linked-list-problems/blob/main/2_linkedlistsortedinsert.cpp) | Input of int Data Type is inserted in the linked list such that the new linked list is sorted |--|
| 3 | [3_linkedlistcheckloop](https://github.com/Sia714/linked-list-problems/blob/main/3_linkedlistcheckloop.cpp) | Check whether given linked list contains a loop or not |--|
