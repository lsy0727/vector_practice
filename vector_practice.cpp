//1��
/*
#include<iostream>
#include <vector>
using namespace std;
int main() {
	vector<vector<int>> score1 = { {2,4}, {5,-5} };
	vector<vector<int>> score2 = { {-2,3}, {0,-5} };
	vector<vector<int>> result;

	cout << "������:" << endl;

	for (int i = 0; i < 2; i++) {
		vector<int> tmp;
		for (int j = 0; j < 2; j++) {
			tmp.push_back(score1[i][j] + score2[i][j]);
		}
		result.push_back(tmp);
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << (result.at(i).at(j)) << '\t';
		}
		cout << endl;
	}
	return 0;
}
*/

//2��
/*
#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<vector<int>> score;	//��� ������ ������ ����
	//���� �Է�
	for (int i = 0; i < 3; i++) {
		vector<int> bmp;	//������ �ӽ÷� ������ ����
		cout << i + 1 << "��° �л��� ����,����,���� ������ �Է�: ";
		for (int j = 0; j < 3; j++) {
			int a;	//������ �Է¹��� ����
			cin >> a;
			bmp.push_back(a);
		}
		score.push_back(bmp);
	}
	int best_student = 0;	//�ֿ�� �л� ��ȣ (best + 1)
	double best_avr = 0;	//��հ�
	//������� ��
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += score[i][j];
			if (sum / 3.0 > best_avr) {
				best_student = i;
				best_avr = sum / 3.0;
			}
		}
	}
	cout << "�ֿ�� �л��� " << best_student + 1 << "��° �л��̰� ��������� " << best_avr << "���̴�." << endl;
}
*/

//3��
/*
#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<vector<int>> score = { {-5,2,35},{-20,5,100},{-75,5,-25} };
	int big = score[0][0], col = 0, row = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (score[i][j] > big) {
				big = score[i][j];
				col = i + 1, row = j + 1;
			}
		}
	}
	cout << "�ִ밪�� " << big << endl;
	cout << "��ġ�� " << col << "�� " << row << "��" << endl;

	return 0;
}
*/

//4��
/*
#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<vector<int>> score = { {-5,2,35},{-20,5,100},{-75,5,-25} };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (score[i][j] > 0) score[i][j] = 255;
			else if (score[i][j] <= 0) score[i][j] = 0;
		}
	}
	cout << "�������" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << score[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}
*/