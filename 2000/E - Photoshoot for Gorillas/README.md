<h2><a href="https://codeforces.com/contest/2000/problem/E" target="_blank" rel="noopener noreferrer">2000E — Photoshoot for Gorillas</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2000E](https://codeforces.com/contest/2000/problem/E) |

## Topics
`combinatorics` `data structures` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">E. Photoshoot for Gorillas</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You really love gorillas, so you decided to organize a photoshoot for them. Gorillas live in the jungle. The jungle is represented as a grid of $$$n$$$ rows and $$$m$$$ columns. $$$w$$$ gorillas agreed to participate in the photoshoot, and the gorilla with index $$$i$$$ ($$$1 \le i \le w$$$) has a <span class="tex-font-style-it">height</span> of $$$a_i$$$. You want to place <span class="tex-font-style-bf">all</span> the gorillas in the cells of the grid such that there is <span class="tex-font-style-bf">no more than one gorilla</span> in each cell.</p><p>The <span class="tex-font-style-it">spectacle</span> of the arrangement is equal to the sum of the <span class="tex-font-style-it">spectacles</span> of all sub-squares of the grid with a side length of $$$k$$$.</p><p>The <span class="tex-font-style-it">spectacle</span> of a sub-square is equal to the sum of the <span class="tex-font-style-it">heights</span> of the gorillas in it.</p><p>From all suitable arrangements, choose the arrangement with the <span class="tex-font-style-bf">maximum</span> <span class="tex-font-style-it">spectacle</span>.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \le t \le 10^3$$$) — the number of test cases.</p><p>The descriptions of the test cases follow.</p><p>The first line contains integers $$$n$$$, $$$m$$$, $$$k$$$ ($$$1 \le n, m \le 2 \cdot 10^5$$$, $$$1 \le n \cdot m \le 2 \cdot 10^5$$$, $$$1 \le k \le \min(n, m)$$$) — the dimensions of the grid and the side length of the square.</p><p>The second line contains an integer $$$w$$$ ($$$1 \le w \le n \cdot m$$$) — the number of gorillas.</p><p>The third line contains $$$w$$$ integers $$$a_1, a_2, \ldots, a_w$$$ ($$$1 \le a_i \le 10^9$$$) — the <span class="tex-font-style-it">heights</span> of the gorillas.</p><p>It is guaranteed that the sum of $$$n \cdot m$$$ across all test cases does not exceed $$$2 \cdot 10^5$$$. The same guarantee applies to $$$w$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the <span class="tex-font-style-bf">maximum</span> <span class="tex-font-style-it">spectacle</span> of a suitable arrangement.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007199756832820914" id="id005494878597071183" class="input-output-copier">Copy</div></div><pre data-content="5
3 4 2
9
1 1 1 1 1 1 1 1 1
2 1 1
2
5 7
20 15 7
9
4 1 4 5 6 1 1000000000 898 777
1984 1 1
4
5 4 1499 2004
9 5 5
6
6 7 14 16 16 6
" id="id007199756832820914"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">3 4 2</div><div class="test-example-line test-example-line-odd test-example-line-1">9</div><div class="test-example-line test-example-line-odd test-example-line-1">1 1 1 1 1 1 1 1 1</div><div class="test-example-line test-example-line-even test-example-line-2">2 1 1</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-even test-example-line-2">5 7</div><div class="test-example-line test-example-line-odd test-example-line-3">20 15 7</div><div class="test-example-line test-example-line-odd test-example-line-3">9</div><div class="test-example-line test-example-line-odd test-example-line-3">4 1 4 5 6 1 1000000000 898 777</div><div class="test-example-line test-example-line-even test-example-line-4">1984 1 1</div><div class="test-example-line test-example-line-even test-example-line-4">4</div><div class="test-example-line test-example-line-even test-example-line-4">5 4 1499 2004</div><div class="test-example-line test-example-line-odd test-example-line-5">9 5 5</div><div class="test-example-line test-example-line-odd test-example-line-5">6</div><div class="test-example-line test-example-line-odd test-example-line-5">6 7 14 16 16 6</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00606181282345324" id="id003046978106970435" class="input-output-copier">Copy</div></div><pre id="id00606181282345324">21
12
49000083104
3512
319
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case of the first input set, the <span class="tex-font-style-it">spectacle</span> of the following sub-squares is summed:</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/2b5720d298ae459a1a0537c1a313e1d97a00f238.png" style="max-width: 100.0%;max-height: 100.0%;"> <span class="tex-font-size-small">Yellow color corresponds to the sub-squares, green — to the rest of the grid squares.</span> </center><p>The picture shows the optimal arrangement of the gorillas. The <span class="tex-font-style-it">spectacle</span> of the arrangement is $$$4 + 4 + 3 + 3 + 4 + 3 = 21$$$.</p></div>