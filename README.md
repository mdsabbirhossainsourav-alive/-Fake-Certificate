You are given a binary string S of length N, representing the attendance sheet of Alice.

For the days when Alice went to school, Si=1, otherwise, Si=0.

Alice wanted to increase her attendance. She can perform the following operation at most once :

Choose any substring of S where Alice was absent everyday. 

She can then give a medical certificate for this period and will be marked present for the whole period.

Note that a substring is a contiguous subsegment of a string.

For example, acab is a substring of abacaba, but aa or d aren’t substrings of this string. In other words, substring S[l,r]=SlSl+1 ...Sr.

You need to find the maximum number of days Alice will be marked present after performing the operation at most once .

### Input Format
The first line of input will contain a single integer T, denoting the number of test cases.

Each test case consists of multiple lines of input.The first line of each test case contains an integer N — the length of the string .

The second line of each test case contains a binary string S.

### Output Format
For each test case, output on a new line the maximum number of days Alice will be marked present after at most one operation.

### Constraints
1≤T≤10^4 

1≤N≤2⋅10^5 

S is a Binary String The sum of N over all test cases won’t exceed 2⋅10^5.

### Input	
4

3

111

3

000

6

010010

6

001001
### Output
3

3

4

4

Test case 1:Alice was present on all days so no operation is needed. Maximum number of days Alice will be marked present is 3.

Test case 2: Alice was absent on all days so she can choose substring S[1,3] and convert all absent to present. Maximum number of days Alice will be marked present is 3.

Test case 3: Alice can choose from S[1,1], S[3,4] and S[6,6]. It is optimal to choose S[3,4] and the resulting string would be 011110. Maximum number of days Alice will be marked present is 4.
