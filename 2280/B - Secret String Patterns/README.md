<h2><a href="https://codeforces.com/contest/2280/problem/B" target="_blank" rel="noopener noreferrer">2280B — Secret String Patterns</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2280B](https://codeforces.com/contest/2280/problem/B) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">B. Secret String Patterns</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>  </p><p><span class="tex-font-style-it">This is an interactive problem.</span></p><p>There is a secret binary string $$$s$$$ of length $$$n$$$. Alice wants to know the answer to the following question: Does there exist an index $$$i$$$ ($$$1\le i  \lt  n$$$) such that $$$s_i = 0$$$ and $$$s_{i+1} = 1$$$?</p><p>To help answer this question, you are allowed to ask queries of the following form: given two integers $$$l$$$ and $$$r$$$ ($$$1\le l\le r\le n$$$), what is the number of $$$1$$$'s among $$$s_{l}, s_{l+1}, \ldots, s_{r}$$$?</p><p>Help Alice determine whether the answer to her question is Yes after at most $$$5$$$ queries!</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^3$$$). The description of the test cases follows.</p><p>The first and only line of each test case contains a single integer $$$n$$$ ($$$2\le n \le 2\cdot 10^4$$$) —the length of the hidden string $$$s$$$ in this test case.</p></div><div><div class="section-title">Interaction</div><p>To ask a query, output a line in the following format (do not include quotes): </p><ul> <li> "<span class="tex-font-style-tt">? l r</span>" ($$$1\le l\le r\le n$$$) </li></ul><p>The jury will return the number of $$$1$$$'s among $$$s_{l}, s_{l+1}, \ldots, s_r$$$.</p><p>When you are ready to print the answer, output a single line in the following format:</p><ul> <li> If there exists an index $$$i$$$ ($$$1\le i  \lt  n$$$) such that $$$s_i = 0$$$ and $$$s_{i+1} = 1$$$, output "<span class="tex-font-style-tt">! YES</span>". </li><li> Otherwise, output "<span class="tex-font-style-tt">! NO</span>". </li></ul><p>After that, proceed to process the next test case or terminate the program if it is the last test case. Printing the answer does not count as a query.</p><p>The interactor <span class="tex-font-style-bf">is not</span> adaptive, meaning that the hidden string $$$s$$$ will not change in response to queries.</p><p>If your program makes more than $$$5$$$ queries for one test case, your program should immediately terminate and receive the verdict Wrong Answer. Otherwise, you can get an arbitrary verdict because your solution will continue to read from a closed stream.</p><p>After printing each query do not forget to output the end of line and flush$$$^{\text{∗}}$$$ the output. Otherwise, you will get <span class="tex-font-style-tt">Idleness limit exceeded</span> verdict.</p><p>If, at any interaction step, you read $$$-1$$$ instead of valid data, your solution must exit immediately. This means that your solution will receive <span class="tex-font-style-tt">Wrong answer</span> because of an invalid query or any other mistake. Failing to exit can result in an arbitrary verdict because your solution will continue to read from a closed stream.</p><p><span class="tex-font-style-bf">Hacks</span></p><p>To hack, use the following format.</p><p>The first line should contain a single integer $$$t$$$ ($$$1\le t\le 10^3$$$) — the number of test cases.</p><p>The next $$$t$$$ lines should have exactly three items separated by spaces: $$$n$$$ ($$$2\le n\le 2\cdot 10^4$$$), the single character <span class="tex-font-style-tt">s</span>, and the binary string (of length $$$n$$$). An example of such a line, corresponding to the first testcase below, is "<span class="tex-font-style-tt">5 s 10101</span>".</p><div class="statement-footnote"><p>$$$^{\text{∗}}$$$To flush, use: </p><ul> <li> <span class="tex-font-style-tt">fflush(stdout)</span> or <span class="tex-font-style-tt">cout.flush()</span> in C++; </li><li> <span class="tex-font-style-tt">sys.stdout.flush()</span> in Python; </li><li> see the documentation for other languages. </li></ul></div></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="interaction-log interactionLog"><div class="title">Interaction log<div title="Copy" data-clipboard-target="#id0033133837026868085" id="id0039716576412473703" class="input-output-copier">Copy</div></div><pre data-content="< 2
< 5
> ? 1 1
< 1
> ? 1 2
< 1
> ? 1 3
< 2
> ? 1 4
< 2
> ? 1 5
< 3
> ! YES
< 5
> ? 2 5
< 0
> ! NO" id="id0033133837026868085"><span class="interaction-log-line IN"><span class="direction" title="input">< </span>2</span>
<span class="interaction-log-line IN"><span class="direction" title="input">< </span>5</span>
<span class="interaction-log-line OUT"><span class="direction" title="output">> </span>? 1 1</span>
<span class="interaction-log-line IN"><span class="direction" title="input">< </span>1</span>
<span class="interaction-log-line OUT"><span class="direction" title="output">> </span>? 1 2</span>
<span class="interaction-log-line IN"><span class="direction" title="input">< </span>1</span>
<span class="interaction-log-line OUT"><span class="direction" title="output">> </span>? 1 3</span>
<span class="interaction-log-line IN"><span class="direction" title="input">< </span>2</span>
<span class="interaction-log-line OUT"><span class="direction" title="output">> </span>? 1 4</span>
<span class="interaction-log-line IN"><span class="direction" title="input">< </span>2</span>
<span class="interaction-log-line OUT"><span class="direction" title="output">> </span>? 1 5</span>
<span class="interaction-log-line IN"><span class="direction" title="input">< </span>3</span>
<span class="interaction-log-line OUT"><span class="direction" title="output">> </span>! YES</span>
<span class="interaction-log-line IN"><span class="direction" title="input">< </span>5</span>
<span class="interaction-log-line OUT"><span class="direction" title="output">> </span>? 2 5</span>
<span class="interaction-log-line IN"><span class="direction" title="input">< </span>0</span>
<span class="interaction-log-line OUT"><span class="direction" title="output">> </span>! NO</span></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the queries here reconstruct the entire string: it is <span class="tex-font-style-tt">10101</span>. We can see that $$$i = 2$$$ is a valid index.</p><p>In the second test case, note that the only possible secret strings after the queries are <span class="tex-font-style-tt">10000</span> and <span class="tex-font-style-tt">00000</span>, neither of which has an index $$$i$$$ where $$$s_i = 0$$$ and $$$s_{i+1} = 1$$$.</p></div>