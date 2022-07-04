# Merge two sorted linked lists
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two sorted linked lists consisting of <strong style="user-select: auto;">N and M</strong>&nbsp;nodes respectively. The task is to merge both of the list (in-place) and return head of the merged list.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 4, M = 3 
valueN[] = {5,10,15,40}
valueM[] = {2,3,20}
<strong style="user-select: auto;">Output: </strong>2 3 5 10 15 20 40<strong style="user-select: auto;">
Explanation: </strong>After merging the two linked
lists, we have merged list as 2, 3, 5,
10, 15, 20, 40.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 2, M = 2
valueN[] = {1,1}
valueM[] = {2,4}
<strong style="user-select: auto;">Output:</strong>1 1 2 4<strong style="user-select: auto;">
Explanation: </strong>After merging the given two
linked list , we have 1, 1, 2, 4 as
output.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
The task is to complete the function <strong style="user-select: auto;">sortedMerge</strong>() which takes references to the heads of two linked lists as the arguments and returns the head of merged linked list.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong> : O(n+m)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxilliary Space</strong> : O(1)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N, M &lt;= 10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
1 &lt;= Node's data &lt;= 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>