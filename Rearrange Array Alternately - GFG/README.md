# Rearrange Array Alternately
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a sorted array of positive integers. Your task is to rearrange&nbsp; the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.<br style="user-select: auto;">
<strong style="user-select: auto;">Note:&nbsp;</strong>Modify the original array itself.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 6
arr[] = {1,2,3,4,5,6}
<strong style="user-select: auto;">Output: </strong>6 1 5 2 4 3<strong style="user-select: auto;">
Explanation: </strong>Max element = 6, min = 1, 
second max = 5, second min = 2, and 
so on... Modified array is : 6 1 5 2 4 3.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 11
arr[]={10,20,30,40,50,60,70,80,90,100,110}
<strong style="user-select: auto;">Output:</strong>110 10 100 20 90 30 80 40 70 50 60<strong style="user-select: auto;">
Explanation: </strong>Max element = 110, min = 10, 
second max = 100, second min = 20, and 
so on... Modified array is : 
110 10 100 20 90 30 80 40 70 50 60.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your&nbsp;Task:</strong><br style="user-select: auto;">
The task is to complete the function <strong style="user-select: auto;">rearrange</strong>() which rearranges elements as explained above. Printing of the modified array will be handled by driver code.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10</span><sup style="user-select: auto;"><span style="font-size: 15px; user-select: auto;">6</span></sup><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= arr[i] &lt;= 10</span><sup style="user-select: auto;"><span style="font-size: 15px; user-select: auto;">7</span></sup></p>
 <p style="user-select: auto;"></p>
            </div>