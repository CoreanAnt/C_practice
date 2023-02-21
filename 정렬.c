#include <stdio.h>

int main()
{
	int a,b,mi,in,t;
	int arr[10] = {2,10,5,8,7,6,4,3,1,9};
	for (a=0;a<10;a++)
	{
		mi = 99;
		for (b=a;b<10;b++)
		{
			if(arr[b]<mi)
			{
				mi = arr[b];
				in = b;
			}
		}
		t = arr[a];
		arr[a] = arr[in];
		arr[in] = t;
		
	}
	for(a=0;a<10;a++)
	printf("%d",arr[a]);
}

// #include <stdio.h>
//
//int main()
//{
//	int a,b,mi,in,t;
//	int arr[10] = {2,10,5,8,7,6,4,3,1,9};
//	for (a=0;a<10;a++)
//	{
//		mi = 0;
//		for (b=a;b<10;b++)
//		{
//			if(arr[b]>mi)
//			{
//				mi = arr[b];
//				in = b;
//			}
//		}
//		t = arr[a];
//		arr[a] = arr[in];
//		arr[in] = t;
//		
//	}
//	for(a=0;a<10;a++)
//	printf("%d",arr[a]);
//} �������� �������� 

//#include <stdio.h>
//int main()
//{
//	int a,b,t;
//	int arr[10] = {2,5,3,4,1,9,8,7,6,10};
//	for (a=0;a<10;a++)
//	{
//		for (b=a+1;b<10;b++)
//		if(arr[a]>arr[b])
//		{
//			t = arr[a];
//			arr[a] = arr[b];
//			arr[b] = t;
//		}
//	}
//	for(a=0;a<10;a++)
//	printf("%d",arr[a]);
//} �������� ��������
 
// #include <stdio.h>
// int main()
// {
// 	int a,b,c,t;
// 	int arr[5];
// 	for(a=0;a<5;a++)
// 	{
// 		scanf("%d",&arr[a]);
//	}
//	for (a=0;a<5;a++)
//	{
//		for (b=a+1;b<5;b++)
//		if(arr[a]>arr[b])
//		{
//			t = arr[a];
//			arr[a] = arr[b];
//			arr[b] = t;
//		}
//	}
//	for(a=0;a<5;a++)
//	printf("%d",arr[a]);
//} �Է¹޾� ��������

//#include <stdio.h>
//int s(int arr[], int n)
//{
//	int a,b,t,mi,in;
//	for(a=0;a<n;a++)
//	{
//		mi = 9999;
//		for(b=a;b<n;b++)
//		{
//			if(mi>arr[b])
//			{
//				mi = arr[b];
//				in = b;
//			}
//		}
//		t = arr[a];
//		arr[a] = arr[in];
//		arr[in] = t;
//	}
//	for (a=0;a<n;a++)
//	printf("%3d",arr[a]);
// } 
// 
// int main()
// {
// 	int arr[]={2,4,7,6,3,1,33};
// 	s(arr,7);
// } �Լ��� ���� ��������
 
//#include <stdio.h>
//int s(int arr[], int n)
//{
//	int a,b,t,mi,in;
//	for(a=0;a<n;a++)
//	{
//		mi = 9999;
//		for(b=a;b<n;b++)
//		{
//			if(mi>arr[b])
//			{
//				mi = arr[b];
//				in = b;
//			}
//		}
//		t = arr[a];
//		arr[a] = arr[in];
//		arr[in] = t;
//	}
//	printf("������������ :");
//	for (a=0;a<n;a++)
//	printf("%3d",arr[a]);
// } 
// 
// int main()
// {
// 	int a,b;
// 	printf("1���� �迭�� ��ҷ��� �Է�:");
// 	scanf("%d",&b);
// 	int arr[b];
// 	printf("�迭�� ��Ҹ� �Է�:\n");
// 	for(a=0;a<b;a++)
// 	{
// 		scanf("%d",&arr[a]);
//	}
// 	s(arr,b);
// 	
//	return 0;
// } 


