///���Ѫ�leetcode�D���D�A�G�i�쪺�Ʀr�r��A�̭����@��0�M1
///�Q�γo��0�M1��X�̤j���_��(�̥k�䦳�@��1)
///�Ѫk:����'���X��1'��1��k��A��L����A������@��0
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int N = s.length(); //c++���r�����
        int one = 0;//s�̭����X��1�A���@�U�|�C�C�ƥX��
        for(int i=0; i<N; i++){//c/c++�j��(����A��)
            if(s[i]=='1') one+=1;//if (�P�_)�]����A��
        }
        //printf("N:%d one %d",N,one);//���L�X�ӡA���X��1
        string ans;
        for(int i=0; i<one-1; i++) ans += '1'; //���X��1�n��e��
        for(int i=0; i<N-one; i++) ans += '0'; //���X��0�n�񤤶�
        ans += '1'; //�̫���1
        return ans;//�{���٨S�g���A�H�K��return��������

    }
};
