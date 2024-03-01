///今天的leetcode挑戰題，二進位的數字字串，裡面有一堆0和1
///想用這些0和1湊出最大的奇數(最右邊有一個1)
///解法:先數'有幾個1'把1放右邊，其他放左邊，中間塞一堆0
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int N = s.length(); //c++的字串長度
        int one = 0;//s裡面有幾個1，等一下會慢慢數出來
        for(int i=0; i<N; i++){//c/c++迴圈(有圓括號)
            if(s[i]=='1') one+=1;//if (判斷)也有圓括號
        }
        //printf("N:%d one %d",N,one);//先印出來，有幾個1
        string ans;
        for(int i=0; i<one-1; i++) ans += '1'; //有幾個1要放前面
        for(int i=0; i<N-one; i++) ans += '0'; //有幾個0要放中間
        ans += '1'; //最後塞個1
        return ans;//程式還沒寫完，隨便先return錯的答案

    }
};
