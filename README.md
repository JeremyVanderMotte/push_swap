# push_swap

We had to create an algorithm that sort a stack of numbers.
It has to sort a stack of 3, 5, 100 and 500 numbers.
The algorithm works on two stack so we had defined option on them.

### Operations :
  - `sa` (swap a) : Swap the first 2 elements at the top of stack a.
                    Do nothing if there is only one or no elements.
  - `sb` (swap b) : Swap the first 2 elements at the top of stack b.
                    Do nothing if there is only one or no elements.
  - `ss` : sa and sb at the same time.
  - `pa` (push a) : Take the first element at the top of b and put it at the top of a.
                    Do nothing if b is empty.
  - `pb` (push b) : Take the first element at the top of a and put it at the top of b.
                    Do nothing if a is empty.
  - `ra` (rotate a) : Shift up all elements of stack a by 1.
                      The first element becomes the last one.
  - `rb` (rotate b) : Shift up all elements of stack b by 1.
                      The first element becomes the last one.
  - `rr` : ra and rb at the same time.
  - `rra` (reverse rotate a) : Shift down all elements of stack a by 1.
                               The last element becomes the first one.
  - `rrb` (reverse rotate b) : Shift down all elements of stack b by 1.
                               The last element becomes the first one.
  - `rrr` : rra and rrb at the same time.

### Average numbers of operations

  - 3   : 2 instructions    ✅
  - 5   : 7 instrustions    ✅
  - 100 : 766 instructions ➡️ 4/5 ✅ 
  - 500 : 7464 instructions ➡️ 3/5 ✅

### Final garde :  
<img width="192" alt="Screen Shot 2022-06-15 at 11 20 54 AM" src="https://user-images.githubusercontent.com/107465256/173792529-95260180-1ee2-4ade-846c-734b7dd8c7bf.png">

