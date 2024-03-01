#今天的leetcode挑戰題，二進位的數字字串，裡面有一堆0和1
#想用這些0和1湊出最大的奇數(最右邊有一個1)
#解法:先數'有幾個1'把1放右邊，其他放左邊，中間塞一堆0
class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        N = len(s)
        one = 0#s裡面有幾個1，等一下會慢慢數出來
        for c in s: #針對字串s裡的每個字母c，逐一檢查
            if c=='1':one+=1 #如果是'1'的話one就+1
        return '1'*(one-1)+'0'*(N-one)+'1'