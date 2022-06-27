# Nth node from end of linked list
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a linked list consisting of <strong style="user-select: auto;">L</strong> nodes and given a number <strong style="user-select: auto;">N</strong>. The task is to find the <strong style="user-select: auto;">N</strong><sup style="user-select: auto;">th</sup> node from the end of the linked list.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">N = 2
LinkedList: 1-&gt;2-&gt;3-&gt;4-&gt;5-&gt;6-&gt;7-&gt;8-&gt;9
<strong style="user-select: auto;">Output: </strong>8<strong style="user-select: auto;">
Explanation: </strong>In the first example, there
are 9 nodes in linked list and we need
to find 2nd node from end.&nbsp;2nd node
from end os 8.&nbsp;&nbsp;</span>
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">N = 5
LinkedList: 10-&gt;5-&gt;100-&gt;5
<strong style="user-select: auto;">Output: </strong>-1<strong style="user-select: auto;">
Explanation: </strong>In the second example, there
are 4 nodes in the linked list and we
need to find 5th from the end.&nbsp;Since 'n'
is more than the number of nodes in the
linked list, the output is -1.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
The task is to complete the function <strong style="user-select: auto;">getNthFromLast</strong>() which takes two <strong style="user-select: auto;">arguments</strong>: <strong style="user-select: auto;">reference </strong>to <strong style="user-select: auto;">head and N</strong> and you need to<strong style="user-select: auto;"> return N<sup style="user-select: auto;">th</sup> </strong>from the end or -1 in case node doesn't exist..</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:</strong><br style="user-select: auto;">
Try to solve in single traversal.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= L &lt;= 10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">6</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>