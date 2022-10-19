#include <iostream>

int main()
{
	int* p; // 1차 배열을 가리킴
	int** pp; // 2차 배열을 가리킴

	int number{ 5 };

	p = &number;
	pp = &p;

	// pp = &&number; 같은 표기법은 X
	// &(&number) = &(100번지) , 100번지는 rvalue이므로 안됨

	// 마찬가지로
	// int** array = new int[2][3]; 도 안된다
	// new int[2][3] 은 int(*p)[3]이므로 주소가 아니기때문

	// 행을 동적으로, 그리고 열을 동적으로
	// 순서대로 만들어보자

	int** array = new int* [2];

	for (int i = 0; i < 2; i++)
	{
		array[i] = new int[3];
	}


	// 2차배열의 동적 할당은 위와 같이 매우 복잡하다
	// 따라서 밑과 같이 2차배열을 1차배열로 바꿔서 사용한다

	// int* pArray = new int[row * col];


	// delete는 역순으로 해야한다  (해제는 생성의 역순)
	for (int i = 0; i < 2; i++)
	{
		delete[] array[i];
	}

	delete[] array;

	/* 역순의 예
	ex)
	int* p1 =new int;
	int* p2 =new int;
	int* p3 =new int;

	delete p3;
	delete p2;
	delete p1;
	*/
}