<h2><a href="https://codeforces.com/contest/1304/problem/B" target="_blank" rel="noopener noreferrer">1304B — Longest Palindrome</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1304B](https://codeforces.com/contest/1304/problem/B) |

## Topics
`brute force` `constructive algorithms` `greedy` `implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">B. Longest Palindrome</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Returning back to problem solving, Gildong is now studying about palindromes. He learned that a <span class="tex-font-style-it">palindrome</span> is a string that is the same as its reverse. For example, strings "<span class="tex-font-style-tt">pop</span>", "<span class="tex-font-style-tt">noon</span>", "<span class="tex-font-style-tt">x</span>", and "<span class="tex-font-style-tt">kkkkkk</span>" are palindromes, while strings "<span class="tex-font-style-tt">moon</span>", "<span class="tex-font-style-tt">tv</span>", and "<span class="tex-font-style-tt">abab</span>" are not. <span class="tex-font-style-bf">An empty string is also a palindrome.</span></p><p>Gildong loves this concept so much, so he wants to play with it. He has $$$n$$$ <span class="tex-font-style-it">distinct</span> strings of equal length $$$m$$$. He wants to discard some of the strings (possibly none or all) and reorder the remaining strings so that the concatenation becomes a palindrome. He also wants the palindrome to be as long as possible. Please help him find one.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$ and $$$m$$$ ($$$1 \le n \le 100$$$, $$$1 \le m \le 50$$$) — the number of strings and the length of each string.</p><p>Next $$$n$$$ lines contain a string of length $$$m$$$ each, consisting of lowercase Latin letters only. All strings are <span class="tex-font-style-it">distinct</span>.</p></div><div class="output-specification"><div class="section-title">Output</div><p>In the first line, print the length of the longest palindrome string you made.</p><p>In the second line, print that palindrome. If there are multiple answers, print any one of them. If the palindrome is empty, print an empty line or don't print this line at all.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007873137985853425" id="id005729885119126773" class="input-output-copier">Copy</div></div><pre id="id007873137985853425">3 3
tab
one
bat
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0005157795256153397" id="id004654863363728524" class="input-output-copier">Copy</div></div><pre id="id0005157795256153397">6
tabbat
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0025263774284165896" id="id008800837640359774" class="input-output-copier">Copy</div></div><pre id="id0025263774284165896">4 2
oo
ox
xo
xx
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006367104553208401" id="id005529495706537205" class="input-output-copier">Copy</div></div><pre id="id006367104553208401">6
oxxxxo
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005307415247454654" id="id009097676714518389" class="input-output-copier">Copy</div></div><pre id="id005307415247454654">3 5
hello
codef
orces
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009578432600593205" id="id006654473461022171" class="input-output-copier">Copy</div></div><pre id="id009578432600593205">0

</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00045208826159427895" id="id0031928081448863865" class="input-output-copier">Copy</div></div><pre id="id00045208826159427895">9 4
abab
baba
abcd
bcde
cdef
defg
wxyz
zyxw
ijji
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008877809522847683" id="id009755496392291575" class="input-output-copier">Copy</div></div><pre id="id008877809522847683">20
ababwxyzijjizyxwbaba
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, "<span class="tex-font-style-tt">battab</span>" is also a valid answer.</p><p>In the second example, there can be 4 different valid answers including the sample output. We are not going to provide any hints for what the others are.</p><p>In the third example, the empty string is the only valid palindrome string.</p></div>