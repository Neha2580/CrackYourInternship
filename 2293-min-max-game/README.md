<h2><a href="https://leetcode.com/problems/min-max-game/">2293. Min Max Game</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">nums</code> whose length is a power of <code style="user-select: auto;">2</code>.</p>

<p style="user-select: auto;">Apply the following algorithm on <code style="user-select: auto;">nums</code>:</p>

<ol style="user-select: auto;">
	<li style="user-select: auto;">Let <code style="user-select: auto;">n</code> be the length of <code style="user-select: auto;">nums</code>. If <code style="user-select: auto;">n == 1</code>, <strong style="user-select: auto;">end</strong> the process. Otherwise, <strong style="user-select: auto;">create</strong> a new <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">newNums</code> of length <code style="user-select: auto;">n / 2</code>.</li>
	<li style="user-select: auto;">For every <strong style="user-select: auto;">even</strong> index <code style="user-select: auto;">i</code> where <code style="user-select: auto;">0 &lt;= i &lt; n / 2</code>, <strong style="user-select: auto;">assign</strong> the value of <code style="user-select: auto;">newNums[i]</code> as <code style="user-select: auto;">min(nums[2 * i], nums[2 * i + 1])</code>.</li>
	<li style="user-select: auto;">For every <strong style="user-select: auto;">odd</strong> index <code style="user-select: auto;">i</code> where <code style="user-select: auto;">0 &lt;= i &lt; n / 2</code>, <strong style="user-select: auto;">assign</strong> the value of <code style="user-select: auto;">newNums[i]</code> as <code style="user-select: auto;">max(nums[2 * i], nums[2 * i + 1])</code>.</li>
	<li style="user-select: auto;"><strong style="user-select: auto;">Replace</strong> the array <code style="user-select: auto;">nums</code> with <code style="user-select: auto;">newNums</code>.</li>
	<li style="user-select: auto;"><strong style="user-select: auto;">Repeat</strong> the entire process starting from step 1.</li>
</ol>

<p style="user-select: auto;">Return <em style="user-select: auto;">the last number that remains in </em><code style="user-select: auto;">nums</code><em style="user-select: auto;"> after applying the algorithm.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/04/13/example1drawio-1.png" style="width: 500px; height: 240px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,3,5,2,4,8,2,2]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> The following arrays are the results of applying the algorithm repeatedly.
First: nums = [1,5,4,2]
Second: nums = [1,4]
Third: nums = [1]
1 is the last remaining number, so we return 1.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [3]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> 3 is already the last remaining number, so we return 3.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 1024</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums.length</code> is a power of <code style="user-select: auto;">2</code>.</li>
</ul>
</div>