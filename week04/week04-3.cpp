///week04-3.cpp
///LeetCode �Ǩt�p�e��7�D 66. Plus Oue
/// 1 2 3
///     4 �̥k��}�l, +1����
///4321
///    2�̤S��}�l, +1����
///9 4 9
///    0���ɬ�,����? ���i�Hreturn �~��
///   5�̥k��+1����
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size();/// �W�g�йL �}�C�j�p
        for (int i=N-1; i>=0; i--) {//��L�Ӫ��j��
            if(digits[i]==9) { ///�n�i��, �·ФF (���൲��)
                digits[i] = 0; ///�]��0,�~�� ������
            } else{///���ζi�쪺��, �W�n��! ����++ �N�����F!!
                digits[i]++; ///²��+1��
                return digits;///��������}�C ����return
            }
        }
        digits.insert( digits.begin(), 1 ); ///�̥��� �n���J1
        return digits; ///�����y

    }
};
