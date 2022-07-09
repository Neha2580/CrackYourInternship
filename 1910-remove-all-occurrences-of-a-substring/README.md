<h2><a href="https://leetcode.com/problems/remove-all-occurrences-of-a-substring/">1910. Remove All Occurrences of a Substring</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two strings <code style="user-select: auto;">s</code> and <code style="user-select: auto;">part</code>, perform the following operation on <code style="user-select: auto;">s</code> until <strong style="user-select: auto;">all</strong> occurrences of the substring <code style="user-select: auto;">part</code> are removed:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Find the <strong style="user-select: auto;">leftmost</strong> occurrence of the substring <code style="user-select: auto;">part</code> and <strong style="user-select: auto;">remove</strong> it from <code style="user-select: auto;">s</code>.</li>
</ul>

<p style="user-select: auto;">Return <code style="user-select: auto;">s</code><em style="user-select: auto;"> after removing all occurrences of </em><code style="user-select: auto;">part</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">substring</strong> is a contiguous sequence of characters in a string.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "daabcbaabcbc", part = "abc"
<strong style="user-select: auto;">Output:</strong> "dab"
<strong style="user-select: auto;">Explanation</strong>: The following operations are done:
- s = "da<strong style="user-select: auto;"><u style="user-select: auto;">abc</u></strong>baabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
- s = "daba<strong style="user-select: auto;"><u style="user-select: auto;">abc</u></strong>bc", remove "abc" starting at index 4, so s = "dababc".
- s = "dab<strong style="user-select: auto;"><u style="user-select: auto;">abc</u></strong>", remove "abc" starting at index 3, so s = "dab".
Now s has no occurrences of "abc".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "axxxxyyyyb", part = "xy"
<strong style="user-select: auto;">Output:</strong> "ab"
<strong style="user-select: auto;">Explanation</strong>: The following operations are done:
- s = "axxx<strong style="user-select: auto;"><u style="user-select: auto;">xy</u></strong>yyyb", remove "xy" starting at index 4 so s = "axxxyyyb".
- s = "axx<strong style="user-select: auto;"><u style="user-select: auto;">xy</u></strong>yyb", remove "xy" starting at index 3 so s = "axxyyb".
- s = "ax<strong style="user-select: auto;"><u style="user-select: auto;">xy</u></strong>yb", remove "xy" starting at index 2 so s = "axyb".
- s = "a<strong style="user-select: auto;"><u style="user-select: auto;">xy</u></strong>b", remove "xy" starting at index 1 so s = "ab".
Now s has no occurrences of "xy".
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= part.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code>​​​​​​ and <code style="user-select: auto;">part</code> consists of lowercase English letters.</li>
</ul>
</div>