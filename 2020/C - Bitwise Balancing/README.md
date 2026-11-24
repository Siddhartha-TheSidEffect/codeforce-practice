<h2><a href="https://codeforces.com/contest/2020/problem/C" target="_blank" rel="noopener noreferrer">2020C — Bitwise Balancing</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2020C](https://codeforces.com/contest/2020/problem/C) |

## Topics
`bitmasks` `hashing` `implementation` `math` `schedules` `ternary search`

---

## Problem Statement

<div class="header"><div class="title">C. Bitwise Balancing</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given three non-negative integers $$$b$$$, $$$c$$$, and $$$d$$$.</p><p>Please find a non-negative integer $$$a \in [0, 2^{61}]$$$ such that $$$(a\, |\, b)-(a\, \&\, c)=d$$$, where $$$|$$$ and $$$\&$$$ denote the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#OR">bitwise OR operation</a> and the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#AND">bitwise AND operation</a>, respectively.</p><p>If such an $$$a$$$ exists, print its value. If there is no solution, print a single integer $$$-1$$$. If there are multiple solutions, print any of them.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^5$$$). The description of the test cases follows.</p><p>The only line of each test case contains three positive integers $$$b$$$, $$$c$$$, and $$$d$$$ ($$$0 \le b, c, d \le 10^{18}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the value of $$$a$$$, or $$$-1$$$ if there is no solution. Please note that $$$a$$$ must be non-negative and cannot exceed $$$2^{61}$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0018352079937852006" id="id007969550307483603" class="input-output-copier">Copy</div></div><pre data-content="3
2 2 2
4 2 6
10 2 14
" id="id0018352079937852006"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">2 2 2</div><div class="test-example-line test-example-line-even test-example-line-2">4 2 6</div><div class="test-example-line test-example-line-odd test-example-line-3">10 2 14</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006612204251773587" id="id002733636733584821" class="input-output-copier">Copy</div></div><pre id="id006612204251773587">0
-1
12
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$(0\,|\,2)-(0\,\&\,2)=2-0=2$$$. So, $$$a = 0$$$ is a correct answer.</p><p>In the second test case, no value of $$$a$$$ satisfies the equation.</p><p>In the third test case, $$$(12\,|\,10)-(12\,\&\,2)=14-0=14$$$. So, $$$a = 12$$$ is a correct answer.</p></div>