<h2><a href="https://codeforces.com/contest/2280/problem/D" target="_blank" rel="noopener noreferrer">2280D — Balanced Subsets</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2280D](https://codeforces.com/contest/2280/problem/D) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">D. Balanced Subsets</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Given a nonempty subset $$$S$$$ of the integers, we call an element $$$x\in S$$$ <span class="tex-font-style-it">stable</span> if exactly two of the three values $$$\{x + 1, x + 2, x + 3\}$$$ are in $$$S$$$. Otherwise, we call $$$x\in S$$$ <span class="tex-font-style-it">unstable</span>.</p><p>Define a subset $$$S$$$ to be <span class="tex-font-style-it">balanced</span> if at most $$$2$$$ of its elements are unstable.</p><p>Given a set of <span class="tex-font-style-it">distinct</span> positive integers $$$A$$$, count the number of non-empty subsets of $$$A$$$ that are balanced. Since this number may be large, output it modulo $$$998\,244\,353$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1\le n\le 2\cdot 10^5$$$) — the number of integers in $$$A$$$.</p><p>The second line contains $$$n$$$ integers $$$a_1  \lt  a_2  \lt  \ldots  \lt  a_n$$$ ($$$1 \le a_i \le 3\cdot n$$$) — the elements of $$$A$$$. </p><p>It is guaranteed that the sum of $$$n$$$ over all test cases is at most $$$2\cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer: the number of non-empty subsets of $$$A$$$ that are balanced. Since this number may be large, output it modulo $$$998\,244\,353$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007757960413141981" id="id002501682464688676" class="input-output-copier">Copy</div></div><pre data-content="4
4
1 2 3 4
10
1 2 4 6 7 8 10 11 15 16
6
1 2 3 15 17 18
1
3
" id="id007757960413141981"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">4</div><div class="test-example-line test-example-line-odd test-example-line-1">1 2 3 4</div><div class="test-example-line test-example-line-even test-example-line-2">10</div><div class="test-example-line test-example-line-even test-example-line-2">1 2 4 6 7 8 10 11 15 16</div><div class="test-example-line test-example-line-odd test-example-line-3">6</div><div class="test-example-line test-example-line-odd test-example-line-3">1 2 3 15 17 18</div><div class="test-example-line test-example-line-even test-example-line-4">1</div><div class="test-example-line test-example-line-even test-example-line-4">3</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0009509495163542636" id="id0005059806700662495" class="input-output-copier">Copy</div></div><pre data-content="14
66
23
1
" id="id0009509495163542636"><div class="test-example-line test-example-line-odd test-example-line-1">14</div><div class="test-example-line test-example-line-even test-example-line-2">66</div><div class="test-example-line test-example-line-odd test-example-line-3">23</div><div class="test-example-line test-example-line-even test-example-line-4">1</div></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, the non-empty balanced subsets of $$$\{1, 2, 3, 4\}$$$ are (split on two lines for readability): $$$$$$\{1\}, \{2\}, \{3\}, \{4\}, \{1, 2\}, \{1, 3\}, \{1, 4\}, $$$$$$ $$$$$$\{2, 3\}, \{2, 4\}, \{3, 4\}, \{1, 2, 3\}, \{1, 2, 4\}, \{1, 3, 4\}, \{2, 3, 4\}.$$$$$$ Note that $$$S = \{1, 2, 3, 4\}$$$ is <span class="tex-font-style-it">not</span> balanced since all of $$$1, 3$$$, and $$$4$$$ are unstable. For example, $$$1$$$ is unstable since all of $$$2, 3$$$, and $$$4$$$ are also in $$$S$$$.</p><p>In the third example, one of the unbalanced subsets is $$$\{1, 2, 3, 18\}$$$ and one of the balanced subsets is $$$\{15, 17, 18 \}$$$.</p></div>