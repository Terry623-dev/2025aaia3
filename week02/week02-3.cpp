///week02-3.cpp �ϥ� c++ 2011 �~�~�����r�� stoi()�\��
///�b CodeBlocks ��,�����}�� Settings-Compiler...�� c++ ���Ĥ�
///SOIT106_ADVANCE_001 Using C++
#include <iostream> /// cin cout Ū�J��ƩM�L�X���
#include <string>/// string �r��o�\��
using namespace std; ///�ϥ�[�R�W�Ŷ�]�зǪ� std
int main()
{
	string a; ///�ŧi�r��
	cin >> a; ///Ū�J�r��

	string ans; ///�ŧi�ۦ� ans �񵪮ץΪ�
	int N = a.length(); ///�r�� a ������
	for(int i=N-1; i>=0; i--){ ///�˹L�ӥΪ��j��
		ans += a[i]; ///�b�j���, ��a[i] ���ans�o�᭱
	}

	cout << a << '+' << stoi(ans) << '='
		<< stoi(a) + stoi(ans) << endl;
} /// stoi() is "string to int" ��[�r��]�ܦ�[���]
