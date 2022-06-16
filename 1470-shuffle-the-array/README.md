<h2><a href="https://leetcode.com/problems/shuffle-the-array/">1470. Shuffle the Array</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given the array <code style="user-select: auto;">nums</code> consisting of <code style="user-select: auto;">2n</code> elements in the form <code style="user-select: auto;">[x<sub style="user-select: auto;">1</sub>,x<sub style="user-select: auto;">2</sub>,...,x<sub style="user-select: auto;">n</sub>,y<sub style="user-select: auto;">1</sub>,y<sub style="user-select: auto;">2</sub>,...,y<sub style="user-select: auto;">n</sub>]</code>.</p>

<p style="user-select: auto;"><em style="user-select: auto;">Return the array in the form</em> <code style="user-select: auto;">[x<sub style="user-select: auto;">1</sub>,y<sub style="user-select: auto;">1</sub>,x<sub style="user-select: auto;">2</sub>,y<sub style="user-select: auto;">2</sub>,...,x<sub style="user-select: auto;">n</sub>,y<sub style="user-select: auto;">n</sub>]</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,5,1,3,4,7], n = 3
<strong style="user-select: auto;">Output:</strong> [2,3,5,4,1,7] 
<strong style="user-select: auto;">Explanation:</strong> Since x<sub style="user-select: auto;">1</sub>=2, x<sub style="user-select: auto;">2</sub>=5, x<sub style="user-select: auto;">3</sub>=1, y<sub style="user-select: auto;">1</sub>=3, y<sub style="user-select: auto;">2</sub>=4, y<sub style="user-select: auto;">3</sub>=7 then the answer is [2,3,5,4,1,7].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3,4,4,3,2,1], n = 4
<strong style="user-select: auto;">Output:</strong> [1,4,2,3,3,2,4,1]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,1,2,2], n = 2
<strong style="user-select: auto;">Output:</strong> [1,2,1,2]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums.length == 2n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10^3</code></li>
</ul></div>