# Merge Without Extra Space
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two sorted arrays <strong style="user-select: auto;">arr1[]</strong> and <strong style="user-select: auto;">arr2[] </strong>of<strong style="user-select: auto;">&nbsp;</strong>sizes <strong style="user-select: auto;">n</strong>&nbsp;and <strong style="user-select: auto;">m</strong>&nbsp;in non-decreasing order. Merge them in sorted order without using any extra space. Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M elements. </span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
n = 4, arr1[] = [1 3 5 7] 
m = 5, arr2[] = [0 2 6 8 9]
<strong style="user-select: auto;">Output</strong>: 
arr1[] = [0 1 2 3]
arr2[] = [5 6 7 8 9]
<strong style="user-select: auto;">Explanation</strong>:
After merging the two 
non-decreasing arrays, we get, 
0 1 2 3 5 6 7 8 9.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
n = 2, arr1[] = [10, 12] 
m = 3, arr2[] = [5 18 20]
<strong style="user-select: auto;">Output</strong>: 
arr1[] = [5 10]
arr2[] = [12 18 20]
<strong style="user-select: auto;">Explanation</strong>:
After merging two sorted arrays 
we get 5 10 12 18 20.</span>


</pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">You don't need to read input or print anything.&nbsp;You only need to complete the function<strong style="user-select: auto;"> merge()&nbsp;</strong>that takes arr1, arr2, n&nbsp;and m&nbsp;as input parameters and modifies them in-place so that they look like the sorted merged array when concatenated.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> &nbsp;O((n+m) log(n+m))<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxilliary Space:</strong> O(1)</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= n, m&nbsp;&lt;= 5*10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
0 &lt;= arr1<sub style="user-select: auto;">i</sub>, arr2<sub style="user-select: auto;">i</sub>&nbsp;&lt;= 10<sup style="user-select: auto;">7</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>