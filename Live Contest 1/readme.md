The Problem is enunciated here:
https://www.hackerrank.com/contests/moodys-analytics-fall-university-codesprint/challenges/stock-purchase-day/problem

This solution is perhaps the unique one in C++, It brought me 100 points after 24h of constant hide&seek with bugs.
The solution uses a linear sorting method using C implemented graphs, it hashes values along a segmented array and stack coincident records that happen to share same address in this array one on another, namely called (brothers).
The temporal complexity is O(1) with limited 1 pass, Memory requirement is 100MB.

The material included in this challenge is obeying WTFPL license terms.
