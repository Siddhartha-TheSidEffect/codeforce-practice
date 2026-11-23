<h2><a href="https://codeforces.com/contest/1945/problem/D" target="_blank" rel="noopener noreferrer">1945D — Seraphim the Owl</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1945D](https://codeforces.com/contest/1945/problem/D) |

## Topics
`dp` `greedy`

---

## Problem Statement

<div class="header"><div class="title">D. Seraphim the Owl</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>The guys lined up in a queue of $$$n$$$ people, starting with person number $$$i = 1$$$, to ask Serafim the Owl about the meaning of life. Unfortunately, Kirill was very busy writing the legend for this problem, so he arrived a little later and stood at the end of the line after the $$$n$$$-th person. Kirill is completely dissatisfied with this situation, so he decided to bribe some people ahead of him.</p><p>For the $$$i$$$-th person in the queue, Kirill knows two values: $$$a_i$$$ and $$$b_i$$$. If at the moment Kirill is standing at position $$$i$$$, then he can choose any position $$$j$$$ such that $$$j  \lt  i$$$ and exchange places with the person at position $$$j$$$. In this case, Kirill will have to pay him $$$a_j$$$ coins. And for each $$$k$$$ such that $$$j  \lt  k  \lt  i$$$, Kirill will have to pay $$$b_k$$$ coins to the person at position $$$k$$$. Kirill can perform this action any number of times.</p><p>Kirill is thrifty, so he wants to spend as few coins as possible, but he doesn't want to wait too long, so Kirill believes he should be among the first $$$m$$$ people in line.</p><p>Help Kirill determine the minimum number of coins he will have to spend in order to not wait too long.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of several sets of input data. The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. Then follows the description of the test case.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$m$$$ ($$$1 \le m \le n \le 200\,000$$$) — the number of people in the queue besides Kirill and the maximum allowable final position of Kirill, respectively.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ separated by spaces ($$$1 \le a_i \le 10^9$$$).</p><p>The third line contains $$$n$$$ integers $$$b_1, b_2, \dots, b_n$$$ separated by spaces ($$$1 \le b_i \le 10^9$$$).</p><p>It is guaranteed that the sum of the values of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the minimum number of coins Kirill needs to spend.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006932418181386749" id="id0023418746235133403" class="input-output-copier">Copy</div></div><pre data-content="4
4 2
7 3 6 9
4 3 8 5
6 2
6 9 7 1 8 3
5 8 8 1 4 1
7 7
7 2 9 2 6 5 9
9 1 10 7 1 4 9
2 1
2 3
1 1
" id="id006932418181386749"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">4 2</div><div class="test-example-line test-example-line-odd test-example-line-1">7 3 6 9</div><div class="test-example-line test-example-line-odd test-example-line-1">4 3 8 5</div><div class="test-example-line test-example-line-even test-example-line-2">6 2</div><div class="test-example-line test-example-line-even test-example-line-2">6 9 7 1 8 3</div><div class="test-example-line test-example-line-even test-example-line-2">5 8 8 1 4 1</div><div class="test-example-line test-example-line-odd test-example-line-3">7 7</div><div class="test-example-line test-example-line-odd test-example-line-3">7 2 9 2 6 5 9</div><div class="test-example-line test-example-line-odd test-example-line-3">9 1 10 7 1 4 9</div><div class="test-example-line test-example-line-even test-example-line-4">2 1</div><div class="test-example-line test-example-line-even test-example-line-4">2 3</div><div class="test-example-line test-example-line-even test-example-line-4">1 1</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id001798618331816908" id="id00640877888802912" class="input-output-copier">Copy</div></div><pre id="id001798618331816908">14
22
9
3
</pre></div></div></div>