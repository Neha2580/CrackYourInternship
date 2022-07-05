# Count Inversions
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array of integers. Find the Inversion Count in the array.&nbsp;</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><em style="user-select: auto;"><strong style="user-select: auto;">Inversion Count</strong>: </em>For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then&nbsp;the inversion count is the maximum.&nbsp;<br style="user-select: auto;">
Formally, two elements a[i] and a[j] form an inversion if a[i] &gt; a[j] and i &lt; j.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: N = 5, arr[] = {2, 4, 1, 3, 5}
<strong style="user-select: auto;">Output</strong>: 3
<strong style="user-select: auto;">Explanation</strong>: The sequence 2, 4, 1, 3, 5 
has three inversions (2, 1), (4, 1), (4, 3).</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: N = 5
arr[] = {2, 3, 4, 5, 6}
<strong style="user-select: auto;">Output</strong>: 0
<strong style="user-select: auto;">Explanation</strong>: As the sequence is already 
sorted so there is no inversion count.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: N = 3, arr[] = {10, 10, 10}
<strong style="user-select: auto;">Output</strong>: 0
<strong style="user-select: auto;">Explanation</strong>: As all the elements of array 
are same, so there is no inversion count.</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">inversionCount()</strong>&nbsp;which takes the array arr[] and the size of the array as inputs and returns the inversion count of the given array.</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(NLogN).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N).</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 ≤ N ≤ 5*10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 ≤ arr[i]&nbsp;≤ 10<sup style="user-select: auto;">18</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>