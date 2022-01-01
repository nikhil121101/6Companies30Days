# 6Companies30Days

## Day 1

- ### <a href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/">Print Anagrams Together</a>
Put all the string in a <strong>map</strong> with key being the vector of <em>frequency</em> of all the smaller-case letters.  
Time: O(N* log(N) * |S|)  
Space: O(N)

- ### <a href="https://practice.geeksforgeeks.org/problems/overlapping-rectangles1924/1/">Overlapping rectangles</a>
Straightforward Time and Space = O(1)

- ### <a href="https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/">Count sub-array with prod less than K</a>
keep a variable size sliding window, <strong>shrink</strong> it when prod <em>exceeds</em> K and <strong>expand</strong> it when product <em>fall</em> behind K
Time: O(N), Space: O(1)
