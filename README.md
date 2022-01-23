[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/8ESo_bXhRC4/0.jpg)](https://www.youtube.com/watch?v=8ESo_bXhRC4)



> ## My Handles
> * <a href="https://leetcode.com/nikhilmishra1211/">Leetcode </a>
> * <a href="https://auth.geeksforgeeks.org/user/nikhilmishra1211/practice/">GFG practice </a>

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
        - Total No of squares = ``` 1 + 2^2 + 3^2 .... + n^2 = n(n+1)(2n+1)/6 ```

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
        - 3-D DP, <code>dp[i][j][k]</code>, (i:index, j:no of transactions complete, k: no of stocks in hand)
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
        - Time: O(N\*M\*M), space:O(N\*M), n = no of contact, m = |contact[i]|

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

- ## Day 10

    * ### <a href="https://leetcode.com/problems/rotting-oranges/submissions/">  Rotting Oranges </a>
        - multi-source BFS or just simulation for given constraints
        - Time: O(N\*M), space: O(N*M)

    * ### <a href="https://practice.geeksforgeeks.org/problems/burning-tree/1/">  Burning Tree </a>
        - Reccursive Solution after storing heights
        - Time: O(N), space: O(N)
    * ### <a href="https://practice.geeksforgeeks.org/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/1/#"> Delete N nodes after M nodes of a linked list </a>
        * Simulation, Time: O(N), Space: O(1)

# <a href="https://docs.google.com/document/d/1sSyOTeZBVJExf0oytLVGk6Z34h1usFm4QRkr1Wb5ouk/edit"> Microsoft </a>

- ## Day 11
    - ### <a href="https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1/#"> Minimum sum partition </a>
      * 2-D DP, with dp relation: <code>dp[sum][i] = dp[sum][i-1] || dp[sum-a[i]][i-1]</code>
      * Time: O(N\*S), Space: O(N\*S);
      
    - ### <a href="https://practice.geeksforgeeks.org/problems/prerequisite-tasks/1/"> Prerequisite Tasks </a>
        * Check for cycles, if there is its not possible to do all tasks.
        * Time: O(N + E), Space: O(N + E);
    - ### <a href="https://practice.geeksforgeeks.org/problems/rotate-by-90-degree0356/1/"> Rotate by 90 degree </a>
      - Swaps the <code>j</code>'th column with <code>(m-j-1)</code>'th column. then transpose the matrix
      - Time: O(M\*N), space:O(1)

- ## Day 12
    - ### <a href="https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1/"> Spirally traversing a matrix </a>
      * Simulation, Time: O(N\*M), Space: O(N\*M)
      
    - ### <a href="https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1"> Stock span problem </a>
        * find *next* greater element to left of each elemnt using **stack**.
        * Time: O(N), Space: O(N);
    - ### <a href="https://practice.geeksforgeeks.org/problems/possible-words-from-phone-digits-1587115620/1/"> Possible Words From Phone Digits </a>
      - Backtracking and implementation.
      - Time: O((4^N)\*N), space:O((4^N)\*N)

- ## Day 13
    - ### <a href="https://practice.geeksforgeeks.org/problems/length-of-largest-region-of-1s-1587115620/1/"> Unit Area of largest region of 1's </a>
      * DFS, Time: O(N\*M), Space: O(N\*M)
      
    - ### <a href="https://practice.geeksforgeeks.org/problems/connect-nodes-at-same-level/1/"> Level Order Traveral </a>
        * do Level Order Traversal and keep populating next pointer of upcomming level so can use the same next pointers to traverse that level.
        * Time: O(N), Space: O(1);
    - ### <a href="https://practice.geeksforgeeks.org/problems/count-number-of-subtrees-having-given-sum/1/"> Count Number of SubTrees having given Sum </a>
      - Reccursive solution, Time: O(N), space: O(N)


- ## Day 14
    - ### <a href="https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1/"> Stickler Thief  </a>
      * 1-D dp, ```dp[i] = max(dp[i-2], dp[i-1]+arr[i]) ```
      * Time: O(N), Space: O(1)
      
    - ### <a href="https://practice.geeksforgeeks.org/problems/generate-binary-numbers-1587115620/1/"> Generate Binary Numbers </a>
        * simulation, Time: O(N\*LogN), space: O(N\*logN)
  
    - ### <a href="https://practice.geeksforgeeks.org/problems/find-all-four-sum-numbers1732/1"> Find All Four Sum Numbers </a>
      - Two nested loops for first two numbers and then two pointer on the rest of the array to find the other two.
      - Time: O(N^3), Space:(N^4)


- ## Day 15

    - ### <a href="https://practice.geeksforgeeks.org/problems/bridge-edge-in-graph/1#"> Bridge edge in a graph </a>
      - Check if can reach d from c without using edge c-d by doing **DFS** from c
      - Time: O(N), space: O(N)
    
    - ### <a href="https://practice.geeksforgeeks.org/problems/minimum-number-of-steps-to-reach-a-given-number5234/1/"> Minimum steps to destination </a>
      - Min moves are required when either all the steps towards left or one all towards left except one towards left
      - keep adding i ```curVal < D || (curVal-D) % 2 == 0```. if the diffrence between cur and D is even then one of the steps can be fliped from leftto right to reach D
      - Time: O(N), space: O(1)

    - ### <a href="https://practice.geeksforgeeks.org/problems/alien-dictionary/1/"> Alien Dictionary </a>
      - create a graph with edges between two characters if one occurs before the other at a given index of two words with comman prefix before that index in the dictionary.
      - Time: O(N*(M+K)) where M is length of longest word, Space: O(K*K) 


# <a href="https://docs.google.com/document/d/1cEAe63fC3YMJRwKmCoVOIXFUaFv5LqNXedxaGpaqd6U/edit"> Adobe </a>

- ## Day 16
  - ### <a href="https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1#"> Subarray with given sum </a>
    - Since no are positve, we can keep a sliding window, shrinking it when sum is less than target and expanding it when sum is greater than target.
    - Time: O(N), Space: O(1)
  - ### <a href="https://practice.geeksforgeeks.org/problems/longest-arithmetic-progression1019/1/"> Longest Arithmetic Progression </a>
    - keep len of logest AP sequence at each index with every dif possible using iterative DP
    - Time: O(N*S), Space: O(N\*S), S=bound for A[i]
  - ### <a href="https://practice.geeksforgeeks.org/problems/7b9d245852bd8caf8a27d6d3961429f0a2b245f1/1/#"> Number of distict Words with k maximum contiguous vowels </a>
    - 2-D DP with relation: ```dp[n][k] = 21*dp[n-1][k] + 5*dp[n-1][k-1]```
    - Time: O(N*K), Space:O(K)

- ## Day 17
  - ### <a href="https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1#">Partition Equal Subset Sum </a>
    - Check if a subset has sum totalSum/2 using standard DP approch
    - Time: O(N*S), Space: O(N\*S)
  - ### <a href="https://practice.geeksforgeeks.org/problems/express-as-sum-of-power-of-natural-numbers5647/1#"> Express as sum of power of natural numbers </a>
    - generate all powers and apply subset-sum DP
    - Time: O(N^2), Space: O(N)
  - ### <a href="https://practice.geeksforgeeks.org/problems/generate-all-possible-parentheses/1/"> Generate Parenthesis </a>
    - parenthesis of len n can be generated either concatination of (parenthesis of len i + parenthesis of len (n-i)) or ( "(" + parenthesis of len n-1 + ")" )
    - DP can be used to avoid overlapping sub-problems.
    - Time : O(N^2*S^2), Space: O(N\*S), where S is no of valid parenthesis.

- ## Day 18
  - ### <a href="https://practice.geeksforgeeks.org/problems/pots-of-gold-game/1/"> Pots of Gold Game </a>
    - 2-D DP on range l to r with presum to find subarray sums in O(1)
    - Time: O(N^2), Space: O(N)
  - ### <a href="https://practice.geeksforgeeks.org/problems/implement-atoi/1/"> Implement Atoi </a>
    - simulation, Time: O(N), space: O(1)
  - ### <a href="https://practice.geeksforgeeks.org/problems/next-higher-palindromic-number-using-the-same-set-of-digits5859/1/"> Next higher palindromic number using the same set of digits </a>
    - lexographically next permutation algorithm
    - Time: O(N), space: O(1)

- ## Day 19
  - ### <a href="https://practice.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1/">Winner of an Election </a>
    - create a sorted frequency map, Time: O(N\*lognN), Space: O(N)
  - ### <a href="https://practice.geeksforgeeks.org/problems/amend-the-sentence3235/1"> Ammend The Sentence </a>
    - Simulation, Time: O(N), Space: O(N)
  - ### <a href="https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1/"> Leaders in an array </a>
    - Simulation, Time: O(N), Space: O(N)

- ## Day 20
  - ### <a href="https://practice.geeksforgeeks.org/problems/minimum-insertions-to-make-two-arrays-equal/1/#"> Minimum operations to convert array A to B </a>
    - Trivial solution would be to use 2-D DP but since N could be upto 100K it will give TLE.
    - First delete the nums in A which are not in B
    - now we need to find LCS between A and B, and keep those elements in A and delete rest, and also add remaining numbers in B which dont occure in the LCS to make it equal to B
    - To find the LCS with trivial 2-D DP will give TLE, but since B is already sorted, Longest increasing subsequence in A will be the LCS which can be found in O(N*LogN) time.
    - Time: O(NlogN), Space: O(N)
  - ### <a href="https://practice.geeksforgeeks.org/problems/find-smallest-range-containing-elements-from-k-lists/1/#"> Smallest range in K lists </a>
    - maintain a pointer array of len k which for each the k arrays keeps track of the index till which we have tried including.
    - also maintain a priority queue of pair{num, ind} of len k which for every k array keeps the element pointer array points to
    - pop the min element in each iteration and update the max element so far. and keep track of the min len of range so far
    - Time: O(N\*K*\*LogK), Space: O(K)
  - ### <a href="https://leetcode.com/problems/compare-version-numbers/"> Compare Version Numbers </a>
    - Simulation, Time: O(N), Space: O(N)


# <a href="https://docs.google.com/document/d/18oi6OlvcL3wYn20Jb9crW7NO4cGkL6vUfTvplNDGkTw/edit"> Intuit </a>

- ## Day 21
  - ### <a href="https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1/"> Minimum sum partition </a>
    - Same as 1'st problem on Day 11

  - ### <a href="https://practice.geeksforgeeks.org/problems/word-search/1/"> Word Search </a>
    - Reccursive Backtracking from each index of grid
    - Time: O(N\*M\*L), space: O(N\*M + L)

  - ### <a href="https://practice.geeksforgeeks.org/problems/find-the-missing-no-in-string/1/"> Find the missing no in string </a>
    - since length of num can be at most 6 check for each length from 1 to 6 and find the missing seq in any of them
    - Time: O(N), Space: O(N) (could be reduced to O(1) but code readablity would be compromised)


- ## Day 22
  - ### <a href="https://practice.geeksforgeeks.org/problems/largest-number-in-k-swaps-1587115620/1#"> Largest number in K swaps </a>
    - Reccursively backtrack by checkeing at each swap with maxCharatres to right.
    - Time: O(N!/(N-K)!), Space: O(N)

  - ### <a href="https://leetcode.com/problems/split-array-largest-sum/"> Split Array Larget Sum </a>
    - Standard Binary search, binary search the largest sum of subarray
    - Time: O(N\*log(A[i])), Space: O(1)

  - ### <a href="https://leetcode.com/problems/find-in-mountain-array/"> Find in Mountain Array </a>
    - Binary search the peak point, then do 2 saparate binary search for left and right side
    - No of Calls: 1 + 2*log(N) + log(N) + log(N)


- ## Day 23
  - ### <a href="https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/"> Capacity to ship package within D days </a>
    - Binary search the max weight capacity
    - Time: O(N\*log(S)), space: O(1)
  - ### <a href="https://leetcode.com/problems/number-of-boomerangs/"> Number of boomerangs </a>
    - for each points store distance of other points with it in a map and for each dist add cnt[dist] * (cnt[dist]-1) to result
    - Time: O(N^2), Space: O(1)
  - ### <a href="https://leetcode.com/problems/pacific-atlantic-water-flow/"> Pacific Atlantic Water Flow </a>
    - do multi-source BFS twice, once form atlanti once from pacific
    - Time: O(N\*M), Space: O(N\*M)
