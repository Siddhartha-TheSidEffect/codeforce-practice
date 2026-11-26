<h2><a href="https://codeforces.com/contest/2008/problem/E" target="_blank" rel="noopener noreferrer">2008E — Alternating String</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2008E](https://codeforces.com/contest/2008/problem/E) |

## Topics
`brute force` `data structures` `dp` `greedy` `implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">E. Alternating String</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Sakurako really loves <span class="tex-font-style-it">alternating strings</span>. She calls a string $$$s$$$ of lowercase Latin letters an <span class="tex-font-style-it">alternating string</span> if characters in the even positions are the same, if characters in the odd positions are the same, and the length of the string is <span class="tex-font-style-bf">even</span>.</p><p>For example, the strings '<span class="tex-font-style-tt">abab</span>' and '<span class="tex-font-style-tt">gg</span>' are <span class="tex-font-style-it">alternating</span>, while the strings '<span class="tex-font-style-tt">aba</span>' and '<span class="tex-font-style-tt">ggwp</span>' are not.</p><p>As a good friend, you decided to gift such a string, but you couldn't find one. Luckily, you can perform two types of operations on the string: </p><ol> <li> Choose an index $$$i$$$ and delete the $$$i$$$-th character from the string, which will reduce the length of the string by $$$1$$$. This type of operation can be performed <span class="tex-font-style-bf">no more than $$$1$$$ time</span>; </li><li> Choose an index $$$i$$$ and replace $$$s_i$$$ with any other letter. </li></ol><p>Since you are in a hurry, you need to determine the minimum number of operations required to make the string an <span class="tex-font-style-it">alternating</span> one.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$)  — the number of test cases.</p><p>The first line of each test case contains a single number $$$n$$$ ($$$1 \le n\le 2\cdot 10^5$$$)  — the length of the string.</p><p>The second line of each test case contains a string $$$s$$$, consisting of lowercase Latin letters.</p><p>It is guaranteed that the sum of $$$n$$$ across all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the minimum number of operations required to turn the string $$$s$$$ into an <span class="tex-font-style-it">alternating</span> one.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008793405976908435" id="id008158316830753365" class="input-output-copier">Copy</div></div><pre data-content="10
1
a
2
ca
3
aab
5
ababa
6
acdada
9
ejibmyyju
6
bbccbc
6
abacba
5
bcbca
5
dcbdb
" id="id008793405976908435"><div class="test-example-line test-example-line-even test-example-line-0">10</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-odd test-example-line-1">a</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-even test-example-line-2">ca</div><div class="test-example-line test-example-line-odd test-example-line-3">3</div><div class="test-example-line test-example-line-odd test-example-line-3">aab</div><div class="test-example-line test-example-line-even test-example-line-4">5</div><div class="test-example-line test-example-line-even test-example-line-4">ababa</div><div class="test-example-line test-example-line-odd test-example-line-5">6</div><div class="test-example-line test-example-line-odd test-example-line-5">acdada</div><div class="test-example-line test-example-line-even test-example-line-6">9</div><div class="test-example-line test-example-line-even test-example-line-6">ejibmyyju</div><div class="test-example-line test-example-line-odd test-example-line-7">6</div><div class="test-example-line test-example-line-odd test-example-line-7">bbccbc</div><div class="test-example-line test-example-line-even test-example-line-8">6</div><div class="test-example-line test-example-line-even test-example-line-8">abacba</div><div class="test-example-line test-example-line-odd test-example-line-9">5</div><div class="test-example-line test-example-line-odd test-example-line-9">bcbca</div><div class="test-example-line test-example-line-even test-example-line-10">5</div><div class="test-example-line test-example-line-even test-example-line-10">dcbdb</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0023556474403489747" id="id007359514602293978" class="input-output-copier">Copy</div></div><pre id="id0023556474403489747">1
0
1
1
2
6
2
3
1
1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For the string <span class="tex-font-style-tt">ababa</span>, you can delete the first character to get <span class="tex-font-style-tt">baba</span>, which is an <span class="tex-font-style-it">alternating</span> string.</p><p>For the string <span class="tex-font-style-tt">acdada</span>, you can change the first two characters to get <span class="tex-font-style-tt">dadada</span>, which is an <span class="tex-font-style-it">alternating</span> string.</p></div>