<h2><a href="https://codeforces.com/contest/1955/problem/C" target="_blank" rel="noopener noreferrer">1955C — Inhabitant of the Deep Sea</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1955C](https://codeforces.com/contest/1955/problem/C) |

## Topics
`greedy` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">C. Inhabitant of the Deep Sea</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>$$$n$$$ ships set out to explore the depths of the ocean. The ships are numbered from $$$1$$$ to $$$n$$$ and follow each other in ascending order; the $$$i$$$-th ship has a durability of $$$a_i$$$.</p><p>The Kraken attacked the ships $$$k$$$ times in a specific order. First, it attacks the first of the ships, then the last, then the first again, and so on.</p><p>Each attack by the Kraken reduces the durability of the ship by $$$1$$$. When the durability of the ship drops to $$$0$$$, it sinks and is no longer subjected to attacks (thus the ship ceases to be the first or last, and the Kraken only attacks the ships that have not yet sunk). If all the ships have sunk, the Kraken has nothing to attack and it swims away.</p><p>For example, if $$$n=4$$$, $$$k=5$$$, and $$$a=[1, 2, 4, 3]$$$, the following will happen:</p><ol> <li> The Kraken attacks the first ship, its durability becomes zero and now $$$a = [2, 4, 3]$$$; </li><li> The Kraken attacks the last ship, now $$$a = [2, 4, 2]$$$; </li><li> The Kraken attacks the first ship, now $$$a = [1, 4, 2]$$$; </li><li> The Kraken attacks the last ship, now $$$a = [1, 4, 1]$$$; </li><li> The Kraken attacks the first ship, its durability becomes zero and now $$$a = [4, 1]$$$. </li></ol><p>How many ships were sunk after the Kraken's attack?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le n \le 2 \cdot 10^5$$$, $$$1 \le k \le 10^{15}$$$) — the number of ships and how many times the Kraken will attack the ships.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^9$$$) — the durability of the ships.</p><p>It is guaranteed that the sum of $$$n$$$ for all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the number of ships sunk by the Kraken on a separate line.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004772384975582671" id="id0030764860865778854" class="input-output-copier">Copy</div></div><pre data-content="6
4 5
1 2 4 3
4 6
1 2 4 3
5 20
2 7 1 8 2
2 2
3 2
2 15
1 5
2 7
5 2
" id="id004772384975582671"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">4 5</div><div class="test-example-line test-example-line-odd test-example-line-1">1 2 4 3</div><div class="test-example-line test-example-line-even test-example-line-2">4 6</div><div class="test-example-line test-example-line-even test-example-line-2">1 2 4 3</div><div class="test-example-line test-example-line-odd test-example-line-3">5 20</div><div class="test-example-line test-example-line-odd test-example-line-3">2 7 1 8 2</div><div class="test-example-line test-example-line-even test-example-line-4">2 2</div><div class="test-example-line test-example-line-even test-example-line-4">3 2</div><div class="test-example-line test-example-line-odd test-example-line-5">2 15</div><div class="test-example-line test-example-line-odd test-example-line-5">1 5</div><div class="test-example-line test-example-line-even test-example-line-6">2 7</div><div class="test-example-line test-example-line-even test-example-line-6">5 2</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008199792611090363" id="id0005792278115589944" class="input-output-copier">Copy</div></div><pre id="id008199792611090363">2
3
5
0
2
2
</pre></div></div></div>