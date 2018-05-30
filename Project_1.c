/*
	2018/05/30
10보다 작은 자연수 중에서 3 또는 5의 배수는 3, 5, 6, 9 이고, 이것을 모두 더하면 23입니다.

1000보다 작은 자연수 중에서 3 또는 5의 배수를 모두 더하면 얼마일까요 ?
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
	printf("정답은%d입니다.\n", res);
	
	end = clock();
	printf("소요시간은%f입니다.\n",(double)(end-start)/CLOCKS_PER_SEC );

}

int MULTIPLE(int i)
{
	if (i % 3 == 0 || i % 5 == 0)
	{
		sum += i;
	}
	return sum;
}
