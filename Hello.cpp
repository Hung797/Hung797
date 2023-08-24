#include <stdio.h>

int main() 
{
	int n = 9;
	int arr[n] = {1,4,7,9,11,14,21,23,26};
//	In mang vua nhap ra man hinh
	printf("Mang vua nhap la: ");
	for(int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
//	Hien thi cac phan tu le trong mang
	printf("\nCac phan tu le trong mang la: ");
	for(int i = 0; i < n; i++)
	{
		if(arr[i] % 2 != 0)
		{
			printf("%d ", arr[i]);
		}
	}
//	Cac phan tu le la so nguyen to 
	printf("\nCac phan tu le la so nguyen to la: ");
	int mark = 1;
	for(int i = 0; i < n; i++)
	{
		mark = 1;
		if(arr[i] % 2 != 0 && arr[i] >= 2)
		{
			for(int j = 2; j < arr[i]/2; j++)
			{
				if(arr[i] % j == 0 )
				{
					mark = 0;
					break;
				}
			}
			if(mark == 1)
			{
				printf("%d ", arr[i]);
			}
		}
	}
//	Tich cac so nguyen to o vi tri chan
	printf("\nTich cac so nguyen to o vi tri chan la: ");
	int multi = 1;
	for(int i = 0; i < n; i++)
	{
		mark = 1;
		if(arr[i] != 1 && i % 2 == 0)
		{
		for(int j = 2; j < arr[i]/2; j++)
		{
			if(arr[i] % j == 0 )
			{
				mark = 0;
				break;
			}	
			}
			if(mark == 1)
			{
				multi *= arr[i];
			}
		}
	}
	printf("%d", multi);
}

