# Tutree-Submissions
There are 4 papers whose questions were given. Here are the C++ solutions of it and snapshot of the outputs.
# Paper 1

Q1 Find the smallest and second smallest elements in an array.

My approach: I have stored all the values in an map because if we use array then there might be duplicates and we need to handle that but maps don't have duplicate keys. Also it stores the value in an ascending order so after printing 2 values we will break the loop.

Q2 Find median in a stream of integers (running integers)

My approach: There are 3 conditions as follows:

1)If the size of max heap is greater than the size of min-heap and the element is less than the previous median then pop the top element from max heap and insert into min-heap and insert the new element to max heap else insert the new element to min-heap. Calculate the new median as the average of top of elements of both max and min heap.

2)If the size of max heap is less than the size of min-heap and the element is greater than the previous median then pop the top element from min-heap and insert into the max heap and insert the new element to min heap else insert the new element to the max heap. Calculate the new median as the average of top of elements of both max and min heap.

3)If the size of both heaps is the same. Then check if the current is less than the previous median or not. If the current element is less than the previous median then insert it to the max heap and a new median will be equal to the top element of max heap. If the current element is greater than the previous median then insert it to min-heap and new median will be equal to the top element of min heap.


# Paper 2

Q1 Write a program to print all the LEADERS in the array. An element is leader if it is greater than all the elements to its right side. And the rightmost element is always a leader. For example int the array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2.


My approach: Traverse the array from the end and firstly declare the rightmost as the leader because there is no element in right of it...
After then traverse in reverse manner and wherever you find the value greater than the previous leader just print it and change the leader with the new value and continue this till it reaches the index '0'.

Q2: Patter Based Question.

My approach: Self Explainatory from the code 

# Paper 3

Q1 Given two sorted arrays, find their union and intersection.

My approach: Take one map and insert all the values of both the arrays as the keys. Now declare 2 vectors namely union and intersection where we will store this union and intersection of the array.

Now the question is how we will get to know the union and intersection??
So first of all traverse the map and take union as all the keys and intersection as those keys whose occurence is greater than once.


Q2 Write a function rotate(arr[], d, n) that rotates arr[] of size n by d elements.
Rotation of the above array by 2 will make array

My approach: Easy O(n) solution.. self explainatory via code

# Paper 4

Q1 Two elements whose sum is closest to zero.

My approach: Firstly we have to sort the array and take 2 pointers "s" for pointing start and "e" for ending point.
Then take sum=a[s]+a[e]
if sum is negative then do s++;
else do e--
Continue doing this while s<e
also keep the track of absolute minimum.

Q2                              
