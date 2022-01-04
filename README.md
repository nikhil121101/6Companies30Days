# 6Companies30Days

## Day 1

* ### <a href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/">Print Anagrams Together</a>
    - Put all the string in a <strong>map</strong> with key being the vector of <em>frequency</em> of all the smaller-case letters.  
    - Time: O(N* log(N) * |S|), Space: O(N)

- ### <a href="https://practice.geeksforgeeks.org/problems/overlapping-rectangles1924/1/">Overlapping rectangles</a>
    - Straightforward Time and Space = O(1)

- ### <a href="https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/">Count sub-array with prod less than K</a>
    - keep a variable size sliding window, <strong>shrink</strong> it when prod <em>exceeds</em> K and <strong>expand</strong> it when product <em>fall</em> behind K
    - Time: O(N), Space: O(1)


## Day 2

* ### <a href="https://practice.geeksforgeeks.org/problems/run-length-encoding/1/">Run length Encoding </a>
    - Simple <strong>iterate</strong> and append results, Time: O(N), Space: O(N)

* ### <a href="https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/#">Ugly Numbers </a>
    - Building up soluition using <strong>3 pointers</strong> and increasing them to chooses the <em>minimumn</em> element of the three
    - Time: O(N), space: O(1)

* ### <a href="https://leetcode.com/problems/greatest-common-divisor-of-strings/"> GCD Of Strings </a>
    - use Euclidean theorem to shorten the length of larger string and apply same reccursively
    - Time: O(NlogN), space: O(1)


## Day 3
* ### <a href="https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1">Find the position of M-th item </a>
    - strightforward using mod

* ### <a href="https://practice.geeksforgeeks.org/problems/total-decoding-messages1235/1/">Total Decoding Messages </a>
    - with <strong>option</strong> either form <em>1-digit</em>(1, 2.....9) char or <em>2-digit</em>(10, 11, ....... 26) char at a given index. can solve it using <strong>1-D dp</strong>.
    - Time: O(N), space: O(1)

* ### <a href="https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1"> Number following a pattern </a>
    - Backtrack the result by checking if conditons are met by putting the least digit first
    - Time: Exponential but since bounds are small it is feasable to get AC


## Day 4

* ### Find max 10 numbers in a list having 10M entries
    - Maintain a min-heap of length 10 and remove the minimum element if entries become 11
    - Time: O(N), Space: O(1)

* ### <a href="https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/"> Find Missing And Repeating </a>
    - place each number to its correspoinding index. at end check which number is it wrong index to get the missing number.
    - Time: O(N), Space: O(1)
    
* ### Find total number of Squares in a N*N chessboard
    - No of square of len 8 = 1, len 7 = 2^2, len i = i^2
    - Total No of squares = 1 + 2^2 + 3^2 .... + n^2 = n(n+1)(2n+1)/6






