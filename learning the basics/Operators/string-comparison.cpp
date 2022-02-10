/*
    How does C++ compare strings?

Assume all are lower case. The answer is exactly as your English Dictionary

- Letter by letter is compared
- If a word has a smaller letter: it appears first
-- E.g. love < zebra as l is before z
-- E.g. love > long as lo are common, but v > n


- If one word is done in comparison: the smaller in length comes first
-- E.g. counter < counterattack

What about a mix of upper and lower cases?
- Upper letters are smaller than small letters
- A < a
- A < z
- Z < a
- loVE < love       (as V < v)
- loVe < long       (as V < n)


Overall: letter by letter comparison and decision based on which letter is smaller
*/