<h2><a href="https://codeforces.com/contest/1234/problem/C" target="_blank" rel="noopener noreferrer">1234C — Pipes</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1234C](https://codeforces.com/contest/1234/problem/C) |

## Topics
`dp` `implementation`

---

## Problem Statement

<div class="header"><div class="title">C. Pipes</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a system of pipes. It consists of two rows, each row consists of $$$n$$$ pipes. The top left pipe has the coordinates $$$(1, 1)$$$ and the bottom right — $$$(2, n)$$$.</p><p>There are six types of pipes: two types of straight pipes and four types of curved pipes. Here are the examples of all six types:</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/4be8aa994b2575b7403f51ec6b3ff596fd769534.png" style="max-width: 100.0%;max-height: 100.0%;"> Types of pipes </center><p>You can turn each of the given pipes $$$90$$$ degrees clockwise or counterclockwise <span class="tex-font-style-bf">arbitrary (possibly, zero) number of times</span> (so the types $$$1$$$ and $$$2$$$ can become each other and types $$$3, 4, 5, 6$$$ can become each other).</p><p>You want to turn some pipes in a way that the water flow can start at $$$(1, 0)$$$ (to the left of the top left pipe), move to the pipe at $$$(1, 1)$$$, flow somehow by <span class="tex-font-style-bf">connected pipes</span> to the pipe at $$$(2, n)$$$ and flow right to $$$(2, n + 1)$$$.</p><p>Pipes are connected if they are adjacent in the system and their ends are connected. Here are examples of connected pipes:</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/896b4e9fc4f89bf45d8e468fdd7909e1353c256a.png" style="max-width: 100.0%;max-height: 100.0%;"> Examples of connected pipes </center><p>Let's describe the problem using some example:</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/d31de5d4a5e62f813fc7f6ba357fb87f15ccd776.png" style="max-width: 100.0%;max-height: 100.0%;"> The first example input </center><p>And its solution is below: </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/08173690b40b66f316bdd136920a033e07af4677.png" style="max-width: 100.0%;max-height: 100.0%;"> The first example answer </center><p>As you can see, the water flow is the poorly drawn blue line. To obtain the answer, we need to turn the pipe at $$$(1, 2)$$$ $$$90$$$ degrees clockwise, the pipe at $$$(2, 3)$$$ $$$90$$$ degrees, the pipe at $$$(1, 6)$$$ $$$90$$$ degrees, the pipe at $$$(1, 7)$$$ $$$180$$$ degrees and the pipe at $$$(2, 7)$$$ $$$180$$$ degrees. Then the flow of water can reach $$$(2, n + 1)$$$ from $$$(1, 0)$$$.</p><p>You have to answer $$$q$$$ independent queries.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$q$$$ ($$$1 \le q \le 10^4$$$) — the number of queries. Then $$$q$$$ queries follow.</p><p>Each query consists of exactly three lines. The first line of the query contains one integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$) — the number of pipes in each row. The next two lines contain a description of the first and the second rows correspondingly. Each row description consists of $$$n$$$ digits from $$$1$$$ to $$$6$$$ without any whitespaces between them, each digit corresponds to the type of pipe in the corresponding cell. See the problem statement to understand which digits correspond to which types of pipes.</p><p>It is guaranteed that the sum of $$$n$$$ over all queries does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For the $$$i$$$-th query print the answer for it — "<span class="tex-font-style-tt">YES</span>" (without quotes) if it is possible to turn some pipes in a way that the water flow can reach $$$(2, n + 1)$$$ from $$$(1, 0)$$$, and "<span class="tex-font-style-tt">NO</span>" otherwise.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0039845202557127923" id="id0042529078975425016" class="input-output-copier">Copy</div></div><pre id="id0039845202557127923">6
7
2323216
1615124
1
3
4
2
13
24
2
12
34
3
536
345
2
46
54
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0018631279220306995" id="id005402536207993787" class="input-output-copier">Copy</div></div><pre id="id0018631279220306995">YES
YES
YES
NO
YES
NO
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The first query from the example is described in the problem statement.</p></div>