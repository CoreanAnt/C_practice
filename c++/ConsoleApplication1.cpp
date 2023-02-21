
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//
//    int kor, math, eng, sum;
//    float average;
//
//    kor = 100;
//    math = 98;
//    eng = 79;
//
//    sum = kor + math + eng;
//    average = sum / (float)3;
//
//    cout << "총점:" << sum << endl;
//    cout << "평균:" << average << endl;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int num1, num2;
//	cout << "정수1 입력:";
//	cin >> num1;
//
//	cout << "정수2 입력:";
//	cin >> num2;
//
//	cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
//	cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
//	cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
//	cout << num1 << "/" << num2 << "=" << num1 / (float)num2 << endl;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int r;
//	float Ca, Cf;
//
//	cout << "반지름 입력:";
//	cin >> r;
//	Ca = r * r * (float)3.14;
//	Cf = 2 * (float)3.14 * r;
//
//	cout << "원 면적:" << Ca << "cm" << endl;
//	cout << "원 둘레:" << Cf << "cm" << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	a = 7, b = 3;
//	c = a + b;
//
//	cout << c << endl;
//	c = c << 1;
//
//	cout << c << endl;
//	c = c >> 1;
//
//	cout << c << endl;
//
//
//	cout << c << endl;
//
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a;
//	cout << "숫자를 입력하세요" << endl;
//	cin >> a;
//	if (a > 100)
//		cout << "100 보다 크다" << endl;
//	else
//		cout << "100 보다 작다" << endl;
//}

//
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a;
//	cout << "점수를 입력하세요" << endl;
//	cin >> a;
//	if (100 >= a && a >= 90) 
//		cout << "당신의 성적은 A입니다" << endl;
//	else if (89 >= a  && a>= 80)
//		cout << "당신의 성적은 B입니다" << endl;
//	else if (79 >= a && a >= 70)
//		cout << "당신의 성적은 C입니다" << endl;
//	else if (69 >= a && a >= 60)
//		cout << "당신의 성적은 D입니다" << endl;
//	else
//		cout << "당신의 성적은 F입니다" << endl;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a;
//	cin >> a;
//	switch (a) {
//
//		case 1:
//			cout << "1의 값이 입력되었습니다." << endl;
//			cout << "**********************************" << endl;
//			break;
//		case 2:
//			cout << "2의 값이 입력되었습니다." << endl;
//			cout << "**********************************" << endl;
//			break;
//		default:
//			cout << "1 또는 2가 아닌 값이 입력되었습니다." << endl;
//			cout << "**********************************" << endl;
//	}
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int i;
//	for (i = 0;i < 6;i++)
//		cout << "i = " << i << endl;
//	cout << "반목문 for 이후 i의 값" << i << endl;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int i;
//	for (i = 1; i < 10; i++) {
//		if (i % 2 == 1)
//			continue;
//		cout << "i=" << i << endl;
//	}
//}

//#include <iostream>
//using namespace std;
//int f(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 5;
//	int b = 7;
//	cout << f(a, b);
//	return 0;
//}
// 간단한 함수


//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//	int a;
//	cin >> a;
//	cout << "제 나이는 " << a << "입니다." <<endl;
//}

//
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 5;
//	for (int i = 1; i <= 5; i++, a--)
//	{
//		for (int j = 1;j < 6; j++)
//		{
//			if (j == i || a == j)
//			{
//				cout << "*";
//			}
//			else
//				cout << " ";
//		}
//		cout << endl;
//	}
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a;
//	int b;
//	cin >> a;
//	cin >> b;
//
//	if(a<b)
//		for (;a < b; a++)
//	{
//			for ( int i = 1; i<10; i++)
//				cout << a << "*" << i << "=" << a * i << endl;
//	}
//	else
//		for (;a > b; b++)
//			for (int i = 1; i < 10; i++)
//				cout << b << "*" << i << "=" << b * i << endl;
//}
//
//
//
//#include <iostream>
//using namespace std;
//int main()
//{
//	int t;
//	int arr[5];
//
//	for (int q = 0; q < 5; q++)
//		cin >> arr[q];
//
//		for (int x = 0; x <= 1; x++)
//		{
//			t = arr[x];
//			arr[x] = arr[4 - x];
//			arr[4 - x] = t;
//		}
//		for (int y = 0; y < 5; y++)
//			cout << arr[y] << " ";
//}


#include <iostream>
using namespace std;

int main()
{
	string str1 = "abcde";

	cout << str1.substr(0, 1) << endl; //a출력
	cout << str1.substr(1, 1) << endl; //b출력
	cout << str1.substr(2, 1) << endl; //c출력

	cout << str1.substr(0, 2) << endl; //ab출력
	cout << str1.substr(1, 2) << endl; //bc출력

	return 0;
}

