[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/8ESo_bXhRC4/0.jpg)](https://www.youtube.com/watch?v=8ESo_bXhRC4)

## Handles
    - leetcode: https://leetcode.com/nikhilmishra1211/
    - gfg: https://auth.geeksforgeeks.org/user/nikhilmishra1211/practice/

# <a href="https://docs.google.com/document/d/e/2PACX-1vRgrSl5zCl8P92F0qNuJyDF9v8aqfNd1UB9fQWTb-_aohzhPbZ0GOVbXvfnGHgzbWWdkf9gr7ZgM0lj/pub"> Goldman Sachs </a>

- ## Day 1

    - ### <a href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/">Print Anagrams Together</a>
        - Put all the string in a <strong>map</strong> with key being the vector of <em>frequency</em> of all the smaller-case letters.  
        - Time: O(N* log(N) * |S|), Space: O(N)

    - ### <a href="https://practice.geeksforgeeks.org/problems/overlapping-rectangles1924/1/">Overlapping rectangles</a>
        - Straightforward Time and Space = O(1)

    - ### <a href="https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/">Count sub-array with prod less than K</a>
        - keep a variable size sliding window, <strong>shrink</strong> it when prod <em>exceeds</em> K and <strong>expand</strong> it when product <em>fall</em> behind K
        - Time: O(N), Space: O(1)


- ## Day 2

    * ### <a href="https://practice.geeksforgeeks.org/problems/run-length-encoding/1/">Run length Encoding </a>
        - Simple <strong>iterate</strong> and append results, Time: O(N), Space: O(N)

    * ### <a href="https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/#">Ugly Numbers </a>
        - Building up soluition using <strong>3 pointers</strong> and increasing them to chooses the <em>minimumn</em> element of the three
        - Time: O(N), space: O(1)

    * ### <a href="https://leetcode.com/problems/greatest-common-divisor-of-strings/"> GCD Of Strings </a>
        - use Euclidean theorem to shorten the length of larger string and apply same reccursively
        - Time: O(NlogN), space: O(1)


- ## Day 3
    * ### <a href="https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1">Find the position of M-th item </a>
        - strightforward using mod

    * ### <a href="https://practice.geeksforgeeks.org/problems/total-decoding-messages1235/1/">Total Decoding Messages </a>
        - with <strong>option</strong> either form <em>1-digit</em>(1, 2.....9) char or <em>2-digit</em>(10, 11, ....... 26) char at a given index. can solve it using <strong>1-D dp</strong>.
        - Time: O(N), space: O(1)

    * ### <a href="https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1"> Number following a pattern </a>
        - Backtrack the result by checking if conditons are met by putting the least digit first
        - Time: Exponential but since bounds are small it is feasable to get AC


- ## Day 4

    * ### Find max 10 numbers in a list having 10M entries
        - Maintain a min-heap of length 10 and remove the minimum element if entries become 11
     - Time: O(N), Space: O(1)

    * ### <a href="https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/"> Find Missing And Repeating </a>
        - place each number to its correspoinding index. at end check which number is it wrong index to get the missing number.
        - Time: O(N), Space: O(1)
    
    * ### Find total number of Squares in a N*N chessboard
        - No of square of len 8 = 1, len 7 = 2^2, len i = i^2
        - Total No of squares = 1 + 2^2 + 3^2 .... + n^2 = n(n+1)(2n+1)/6

- ## Day 5

    * ### <a href="https://practice.geeksforgeeks.org/problems/decode-the-string2444/1#"> Decode The STring </a>
        - <strong>Iterate</strong> having 2 <strong>stacks</strong>(for <em>frequency</em> and <em>index</em>) and when encounter '[' <strong>push</strong> the freq and cur index, when encounter ']'
        <strong>pop</strong> the frequency and index and <strong>repeat </strong>the string from that index to cur.
        - Time: O(N), space: O(N)

    * ### <a href="https://leetcode.com/problems/minimum-size-subarray-sum/"> Minimum size subarray sum </a>
        - Using <storng>sliding window</strong> approch, <em>expand</em> the window when sum <strong>less</strong> than target and <em>shrink</em> the window when target <strong>greater</strOng> that sum and record the minimum length so far
        - Time: O(N), space:O(1)

    * ### <a href="https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1"> Array Pair Sum Divisibility Problem </a>

        - <strong>count</strong> of num with <strong>mod</strong> <em>i </em>should be equal to num with mod <em>k-i</em>
        - <strong>edge cases</strong>: num with <strong>mod</strong> <em>0</em> should be <strong>even</strong>, num with <strong>mod </strong> <em>k/2</em> (given k even) should be <strong>even</strong>
        - Time: O(N), Space: O(N)


# <a href="https://docs.google.com/document/d/1KH9GVaUCET-y5SL5sg6DAnon9XwRRW-sPiyJ2p7FRLs/edit">Amazon</a>

- ## Day 6
    * ### <a href="https://practice.geeksforgeeks.org/problems/maximum-profit4657/1"> Maximum Profit </a>
        - 3-D DP, dp[i][j][k], (i:index, j:no of transactions complete, k: no of stocks in hand)
        - Time: O(N*K), Space: O(K)

    * ### <a href="https://leetcode.com/problems/longest-mountain-in-array/"> Longest Mountain In Array </a>
        - keep <strong>count</strong> of continuous <strong>increase</strong> length and continuous <strong>decrease</strong> length
        - Time: O(N), Space: O(1)
    
    * ### <a href="https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1/"> IPL 2021 - Match Day 2 </a>
        - maintain a <em>Linked-List</em> of indexes in <strong>decreasing</strong> order of values and keeping the <em>recent</em> ones and removing the <em>old</em> ones
        - Time: O(N), Space: O(K)

- ## Day 7

    * ### <a href="https://practice.geeksforgeeks.org/problems/brackets-in-matrix-chain-multiplication1024/1/"> Brackets in Matrix Chain Multiplication </a>
        - standard 2-D dp problem, just store string as well with cost.
        - Time: O(N^3), space: O(N^3)


    * ### <a href="https://practice.geeksforgeeks.org/problems/phone-directory4628/1/"> Phone Directory </a>

        - store all the contacts in <strong>Trie</strong> along with their <em>indexes</em> in each node, now <strong>traverse</strong> the trie on string s and retrieve the <em>overlapping</em> <strong> prefix </strong> contacts from the indexes 
        - Time: O(N*M*M), space:O(N*M), n = no of contact, m = |contact[i]|

    * ### <a href="https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1"> Maximum of all subarrays of size k </a>

        - same as "IPL 2021 - Match Day 2" solved on  Day 6

- ## Day 8

    * ### <a href="https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1"> First non-repeating character in a stream </a>
        - Keep track of index of prev occurance of letter in an array of size 26
        - time: O(N), space: O(1)

    * ### <a href="https://practice.geeksforgeeks.org/problems/count-ways-to-nth-stairorder-does-not-matter1322/1/"> Count ways to N'th Stair(Order does not matter) </a>
        - Since order doesnt patters only count of two matters. so ans m/2 + 1
        - Time: O(1), space: O(1)

    * ### <a href="https://practice.geeksforgeeks.org/problems/is-sudoku-valid4820/1/"> Is Sudoku Valid </a>
        - Simulation, Time:O(N^2), Space: O(1)

- ## Day 9

    * ### <a href="https://practice.geeksforgeeks.org/problems/nuts-and-bolts-problem0431/1#"> Nuts and Bolts Problem </a>
        - maintain a <strong>sorted map</strong> of <em>count</em> of char and rearrange the elements in both the array
        - Time: O(N), Space: O(1)

    * ### <a href="https://practice.geeksforgeeks.org/problems/serialize-and-deserialize-a-binary-tree/1"> Serialize and Deserialize a Binary Tree </a>
        - Store tree as <em>level order traversal</em>
        - Time: O(N), space: O(N)

    * ### <a href="https://practice.geeksforgeeks.org/problems/column-name-from-a-given-column-number4244/1/"> Column name from a given column number </a>
        - in each iteration keep on dividing by 26 and and map mod to char
        - Time: O(logN), Space: O(logN)

    