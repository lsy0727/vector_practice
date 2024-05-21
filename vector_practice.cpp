//1번
/*
#include<iostream>
#include <vector>
using namespace std;
int main() {
	vector<vector<int>> score1 = { {2,4}, {5,-5} };
	vector<vector<int>> score2 = { {-2,3}, {0,-5} };
	vector<vector<int>> result;

	cout << "연산결과:" << endl;

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

//2번
/*
#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<vector<int>> score;	//모든 점수를 저장할 벡터
	vector<double> avrage;
	//점수 입력
	for (int i = 0; i < 3; i++) {
		vector<int> bmp;	//점수를 임시로 저장할 벡터
		int sum = 0;
		cout << i + 1 << "번째 학생의 국어,영어,수학 성적을 입력: ";
		for (int j = 0; j < 3; j++) {
			int a;	//점수를 입력받을 변수
			cin >> a;
			bmp.push_back(a);
			sum += a;
		}
		score.push_back(bmp);
		avrage.push_back(sum / 3.0);	//평균값 저장
	}
	int best_student = 0;	//최우수 학생 번호 (best + 1)
	double best_avr = avrage[0];
	//평균점수 비교
	for (int i = 1; i < 3; i++) {
		if (avrage[i] > best_avr) {
			best_avr = avrage[i];
			best_student = i;
		}
	}
	cout << "최우수 학생은 " << best_student + 1 << "번째 학생이고 평균점수는 " << best_avr << "점이다." << endl;
}
*/

//3번
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
	cout << "최대값은 " << big << endl;
	cout << "위치는 " << col << "행 " << row << "열" << endl;

	return 0;
}
*/

//4번
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
	cout << "수정행렬" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << score[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}
*/