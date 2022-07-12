<h2><a href="https://leetcode.com/problems/matchsticks-to-square/">473. Matchsticks to Square</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">matchsticks</code> where <code style="user-select: auto;">matchsticks[i]</code> is the length of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> matchstick. You want to use <strong style="user-select: auto;">all the matchsticks</strong> to make one square. You <strong style="user-select: auto;">should not break</strong> any stick, but you can link them up, and each matchstick must be used <strong style="user-select: auto;">exactly one time</strong>.</p>

<p style="user-select: auto;">Return <code style="user-select: auto;">true</code> if you can make this square and <code style="user-select: auto;">false</code> otherwise.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/04/09/matchsticks1-grid.jpg" style="width: 253px; height: 253px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> matchsticks = [1,1,2,2,2]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> You can form a square with length 2, one side of the square came two sticks with length 1.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> matchsticks = [3,3,3,3,4]
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> You cannot find a way to form a square with all the matchsticks.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= matchsticks.length &lt;= 15</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= matchsticks[i] &lt;= 10<sup style="user-select: auto;">8</sup></code></li>
</ul>
</div>