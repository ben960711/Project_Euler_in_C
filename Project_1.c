/*
	2018/05/30
10���� ���� �ڿ��� �߿��� 3 �Ǵ� 5�� ����� 3, 5, 6, 9 �̰�, �̰��� ��� ���ϸ� 23�Դϴ�.

1000���� ���� �ڿ��� �߿��� 3 �Ǵ� 5�� ����� ��� ���ϸ� ���ϱ�� ?
*/

#include<stdio.h>
#include<time.h>

int MULTIPLE(int i);

int sum;
int i;
int res;

clock_t start, end;

int main()
{
	start = clock();

	for (i = 3; i < 1000; i++)
	{
		res = MULTIPLE(i);
	}
	printf("������%d�Դϴ�.\n", res);
	
	end = clock();
	printf("�ҿ�ð���%f�Դϴ�.\n",(double)(end-start)/CLOCKS_PER_SEC );

}

int MULTIPLE(int i)
{
	if (i % 3 == 0 || i % 5 == 0)
	{
		sum += i;
	}
	return sum;
}
