#include <iostream>

int main()
{
	int* p; // 1�� �迭�� ����Ŵ
	int** pp; // 2�� �迭�� ����Ŵ

	int number{ 5 };

	p = &number;
	pp = &p;

	// pp = &&number; ���� ǥ����� X
	// &(&number) = &(100����) , 100������ rvalue�̹Ƿ� �ȵ�

	// ����������
	// int** array = new int[2][3]; �� �ȵȴ�
	// new int[2][3] �� int(*p)[3]�̹Ƿ� �ּҰ� �ƴϱ⶧��

	// ���� ��������, �׸��� ���� ��������
	// ������� ������

	int** array = new int* [2];

	for (int i = 0; i < 2; i++)
	{
		array[i] = new int[3];
	}


	// 2���迭�� ���� �Ҵ��� ���� ���� �ſ� �����ϴ�
	// ���� �ذ� ���� 2���迭�� 1���迭�� �ٲ㼭 ����Ѵ�

	// int* pArray = new int[row * col];


	// delete�� �������� �ؾ��Ѵ�  (������ ������ ����)
	for (int i = 0; i < 2; i++)
	{
		delete[] array[i];
	}

	delete[] array;

	/* ������ ��
	ex)
	int* p1 =new int;
	int* p2 =new int;
	int* p3 =new int;

	delete p3;
	delete p2;
	delete p1;
	*/
}