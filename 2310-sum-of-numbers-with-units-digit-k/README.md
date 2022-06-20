<h2><a href="https://leetcode.com/problems/sum-of-numbers-with-units-digit-k/">2310. Sum of Numbers With Units Digit K</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two integers <code style="user-select: auto;">num</code> and <code style="user-select: auto;">k</code>, consider a set of positive integers with the following properties:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The units digit of each integer is <code style="user-select: auto;">k</code>.</li>
	<li style="user-select: auto;">The sum of the integers is <code style="user-select: auto;">num</code>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum</strong> possible size of such a set, or </em><code style="user-select: auto;">-1</code><em style="user-select: auto;"> if no such set exists.</em></p>

<p style="user-select: auto;">Note:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The set can contain multiple instances of the same integer, and the sum of an empty set is considered <code style="user-select: auto;">0</code>.</li>
	<li style="user-select: auto;">The <strong style="user-select: auto;">units digit</strong> of a number is the rightmost digit of the number.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> num = 58, k = 9
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong>
One valid set is [9,49], as the sum is 58 and each integer has a units digit of 9.
Another valid set is [19,39].
It can be shown that 2 is the minimum possible size of a valid set.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> num = 37, k = 2
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> It is not possible to obtain a sum of 37 using only integers that have a units digit of 2.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> num = 0, k = 7
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> The sum of an empty set is considered 0.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= num &lt;= 3000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= k &lt;= 9</code></li>
</ul>
</div>