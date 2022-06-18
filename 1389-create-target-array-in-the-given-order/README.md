<h2><a href="https://leetcode.com/problems/create-target-array-in-the-given-order/">1389. Create Target Array in the Given Order</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two arrays of integers&nbsp;<code style="user-select: auto;">nums</code> and <code style="user-select: auto;">index</code>. Your task is to create <em style="user-select: auto;">target</em> array under the following rules:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Initially <em style="user-select: auto;">target</em> array is empty.</li>
	<li style="user-select: auto;">From left to right read nums[i] and index[i], insert at index <code style="user-select: auto;">index[i]</code>&nbsp;the value <code style="user-select: auto;">nums[i]</code>&nbsp;in&nbsp;<em style="user-select: auto;">target</em> array.</li>
	<li style="user-select: auto;">Repeat the previous step until there are no elements to read in <code style="user-select: auto;">nums</code> and <code style="user-select: auto;">index.</code></li>
</ul>

<p style="user-select: auto;">Return the <em style="user-select: auto;">target</em> array.</p>

<p style="user-select: auto;">It is guaranteed that the insertion operations will be valid.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [0,1,2,3,4], index = [0,1,2,2,1]
<strong style="user-select: auto;">Output:</strong> [0,4,1,3,2]
<strong style="user-select: auto;">Explanation:</strong>
nums       index     target
0            0        [0]
1            1        [0,1]
2            2        [0,1,2]
3            2        [0,1,3,2]
4            1        [0,4,1,3,2]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3,4,0], index = [0,1,2,3,0]
<strong style="user-select: auto;">Output:</strong> [0,1,2,3,4]
<strong style="user-select: auto;">Explanation:</strong>
nums       index     target
1            0        [1]
2            1        [1,2]
3            2        [1,2,3]
4            3        [1,2,3,4]
0            0        [0,1,2,3,4]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1], index = [0]
<strong style="user-select: auto;">Output:</strong> [1]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length, index.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums.length == index.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= index[i] &lt;= i</code></li>
</ul>
</div>