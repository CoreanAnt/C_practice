//#include <stdio.h>
//	int main(void)
//	{
//	float num1;
//	char num2;
//	int num3;�� 
//	
//	num1 = 1;
//	num2 = 'q';
//	num3 = 3; 
//	
//	printf("%.2f %c %3d\n", num1, num2, num3); //.2 ���ڸ�������  3�� 3ĭ ��� 
//	} 
//	// 0x�� 16����  b(���̳ʸ�)�� 2����  %x 16���� ��� 

//#include <stdio.h>
//int main(void)
//{ 
//	char key = 'A';
//	char next = 'A' +1;
//	printf("%c\n",next);
//	printf("%c",key);
//	
// } 

//#include <stdio.h>
//int main(void) //�տ� int�� ������� (void)�� �Է����� main�� �Լ� �� 
//{
//	int a;
//	float b;
//	int c;
//	
//	a = 27;
//	b = 36.5;
//	c = 'A';
//	
//	printf("���̴�%d\nü���� %.1f\n�������� %c", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int a, c;
//	float b; 
//	printf("���� �Է��ϼ���");
//	scanf("%d %f %d", &a, &b, &c); // &�ּҰ� �� shift + home ���� �巡�� 
//	
//	printf("���̴�%d\n ü���� %.1f\n ������%c\n", a, b, c ); 
//	
//	return 0;
//
//}

//
//#include <stdio.h>
//int main(void)
//{
//	int a;
//	printf("������?");
//	scanf("%d",&a);
//	
//	if (a==10) 
//	printf("�����Դϴ�.");
//	else if (a!=10);
//	printf("Ʋ�Ƚ��ϴ�.");
// } 
// 
 
 
//#include <stdio.h>
//int main(void)
// {
// 	int score = 92;
// 	char grade;
// 	if(score >= 90)
// 	{
// 		grade = 'A';
// 		printf("������ %d�̰� ����� %c�Դϴ�.\n", score, grade);
//	 }
// 	
// 	
// 	printf("�۾�����\n");
// }
 
// 
//#include <stdio.h>
//int main(void)
//{
//	int score = 86;
//	char grade;
//	
//	if(score >= 90) grade = 'A';
//	else{
//		if(score >= 80) grade = 'B';
//		else{
//			if(score >= 70) grade = 'C';
//			else{
//				if(score >= 60) grade = 'D';
//				else grade = 'F';
//			
//			}
//		}
//	}
//	printf("����� ������ %d���̰� ����� %c�Դϴ�.", score, grade);
//}
// 
 
//#include <stdio.h>
//int main(void)
//{
//	int score = 66;
//	char grade;
//	
//	if(score >= 90) 
//	grade = 'A';
//	else
//	if(score >= 80) 
//	grade = 'B';
//	else
//	if(score >= 70) 
//	grade = 'C';
//	else
//	if(score >= 60) 
//	grade = 'D';
//	else grade = 'F';
//	
//	printf("����� ������ %d���̰� ����� %c�Դϴ�.", score, grade);
//}    // ���� ����� ������ �߰�ȣ, �鿩���� ���� �ʾ� ������ �ڵ� ������ ���� ������� ����. 
// 

//#include <stdio.h>
//int main(void)
//{
//	int a;
//	for(a = 0; a<10; a++)
//	{
//		printf("abcdrf");
//	}
//}
 
// #include <stdio.h>
// int main(void)
// {
// 	int a, b=0;
// 	for(a=0; a<10; a++)
// 	{
// 		b = a+b;
// 		
//	 }
// 	printf("%d",b);
//  }
  
//
//#include <stdio.h>
//int main(void)
//{
//	int a, sum=0;
//	for (a=0;a<10;a+=2)
//	{
////		sum = sum+a;
////		if(a>=5)
////		break;
//	printf("%d", a);
//
//	}
//} 2�� ���ϰ� �������� +=2 ���������� �� �� 

//#include <stdio.h>
//int main(void)
//{
//	int a,b;
//	
//	for (a = 2; a<10; a++)
//	{
//		for (b=1; b<10; b++)
//		{
//			printf("%d*%d=%d\n", a,b,a*b);
//		}
//		printf("\n");
//		
//	 }
//	  return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int a,b,c,d;
//	for (a = 2; a<10; a++)
//	{
//		for (b=1; b<10; b++)
//		{
//			c = a%3;
//			d = b%3;
//			if (c==0 && d==0)
//			printf("**\n");
//			else if(c==0)
//			printf("*\n");
//			else if (d==0)
//			printf("*\n");
//			else
//			printf("%d*%d=%d\n", a,b,a*b);
//		}
//		printf("\n");
//		
//	 }
//	  return 0;
//} //������ 3��� * 

//#include <stdio.h>
//int main(void)
//{
//	int a,b;
//	for (a = 1; a<5; a++)
//	{
//		for (b=1; b<5; b++)
//		{
//		
//			printf("*");
//		}
//		printf("\n");
//		
//	 }
//	  return 0;
//}  // �̰Ŵ� ���簢�� �������� *���  

//#include <stdio.h>
//int main(void)
//{
//	int a,b,c;
//	b = 0;
//	//c = 0;
//	for (a = 0; a<5; a++)
//	{
//		//c = c + 1;
//		for (b=5; b>a; b--)
//		{
//	
//			printf("*");
//		}
//		printf("\n");
//		
//	 }
//	  return 0;
//}                         // ���� 2�� ���ﰢ�� �������� *���  

//#include <stdio.h>
//int main(void)
//{
//	int a,b,c;
//	b = 5;
//	c = 5;
//	for (a = 0; a<5; a++)
//	{	
//		c = c - 1;
//		for (b=c; b<5; b++)
//		{
//		
//			printf("*");
//		}
//		printf("\n");
//		
//	 }
//	  return 0;
//}                         // �ﰢ�� �������� *��� 

//#include <stdio.h>
//int main(void)
//{
//	int a,b,c;
//	for (a=0; a<5; a++)
//	{	
//		for (b=0; b<a; b++)
//		{
//			printf(" ");
//		}
//		for (c=5; c>a; c--)
//		{
//			printf("*");
//		} 
//		
//		
//	 	printf("\n");
//	 }
//	  return 0;
//}                         // ó�� ���� �Ŀ� ����  ���ؼ� �ﰢ�� �������� *��� 


//#include <stdio.h>
//int main(void)
//{
//	int a,b,c;
//	for (a=0; a<5; a++)
//	{	
//		for (c=5; c>a; c--)
//		{
//			printf(" ");
//		} 
//		for (b=0; b<a; b++)
//		{
//			printf("*");
//		}
//		
//		
//		
//	 	printf("\n");
//	 }
//	  return 0;
//}                         // ó�� ����  ���ؼ� �ﰢ�� �������� *��� 


//#include <stdio.h>
//int main(void)
//{
//   int i,j;
//   scanf("%d", &i);
//   for(i;i<5;i++)
//   {
//      for(j=0;j<i;j++)
//      {
//         printf(" ");
//      }
//      
//      for(j=5;j>i;j--)
//      {
//         printf("*");
//      }
//   printf("\n");
//   }
//}
//// i�� ���� �Է¹޾� �ﰢ�� * �����. 

//#include <stdio.h>
//int main(void)
//{
//	int a = 0;
//	int b = 1;
//	while(b <= 5)
//	{
//		printf("b(%d) + a(%d) = ", b, a);
//		a = a + b;
//		printf("%d\n", a);
//		b++;
//		
//	}
//	printf("\nResult : b = %d a = %d\n", b ,a);
//}

//#include <stdio.h>
//int main(void)
//{
//	int a,b,c;
//	for (a=1; a<10; a+=3)
//	{
//		for (b=1; b<10; b++)
//		{
//			for (c=a; c<a+3; c++)
//			{
//				printf("%2d*%2d = %2d", c,b,c*b);
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//	
// } 

//#include <stdio.h>
//int main (void)
//{
//	int a,b,c;
//	for (a=1;a<4;a++)
//	{
//		for (b=1;b<10;b++)
//		{
//			for (c=4*a-3;c<4*a+1;c++)
//			{
//				printf("%d*%d=%2d  ", c,b,b*c);
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//	return 0;
//}  // 4�� ������ �� ��

//#include <stdio.h>
//int main(void)
//{
//	int m, n;
//	for(m = 5; m<7; m++)
//	{
//		for(n=0;n<3;n++)
//		{
//			if(m==5 && n==1) break;
//			printf("m(%d)-n(%d)\n",m,n);
//		}
//	}
// } 

//#include <stdio.h>
//
//
//int main()
//{
//	int a;
//	int b=10, c=20;
//	
//	a = mul(b,c);
//	printf("�۾��� ����� %d\n",a);
//	
//}
//int add(x,y)
//{
//	return x+y;
//	
//}
//int div(x,y)
//{
//	return x/y;
//	
//}
//int min(x,y)
//{
//	return x-y;
//	
//}
//int mul(x,y)
//{
//	return x*y;
//	
//}

//#include <stdio.h>
//int gugu(x,y)
//{
//	return x*y;
//}
//
//int main()
//{
//	int a, b, c;
//	
//	scanf("%d %d",&a, &b);
//	
//	for(a;a<10;a++)
//	{
//		for(b;b<10;b++)
//		{
//			for(c=a;c<10/a;c++)
//			printf("%d*%d=%2d",c,b,gugu(c,b));
//		}
//		printf("\n");
//	}
//	printf("\n");
//	
//	���߿� �غ���. 
//}

//#include <stdio.h>
//int a,b,x,y;
//
//int gugu()
//{
//	for (a=2; a<=x; a++)
//	{
//		for (b=1; b<=y; b++)
//		{
//			printf("%d x %d = %d\n",a,b,a*b);
//		}
//		printf("\n");
//	}		
//}
//
//int main()
//{
//	printf("��=");
//	scanf("%d",&x);
//	printf("��=");
//	scanf("%d",&y);
//	gugu();
//}

//#include <stdio.h>
//int a,b,c;
//int tri()
//{
//	for (a=1; a<5; a++)
//	{	
//		for (b=0; b<a; b++)
//		{
//			printf("*");
//		} 
//		for (c=5; c>a; c--)
//		{
//			printf(" ");
//		}
//	 	printf("\n");
//	 }
//}
//int triii()
//{
//	for (a=1; a<5; a++)
//	{	
//		for (b=4; b>a; b--)
//		{
//			printf("*");
//		} 
//		printf("\n");
//		}
//	 
//}
//
//int main()
//{
//	tri();
//	triii();
//}

//#include <stdio.h>
//int dev(x,y)
//{
//	return x/y;
//	
//}
//
//int main()
//{
//	printf("%d\n%d",dev(10,5),dev(7,2));
//}

//#include<stdio.h>
//int main()
//int solution(int num1, int num2) {
//    int answer = ((double) num1 / (double) num2) * 1000;
//    return answer;
//	 �� �� ������ ������ ��ȯ. 

//#include <stdio.h>
//int a,b;
//int main()
//{
//	for (a=1; a<10; a+=2)
//	{
//		if (a>5)
//		{
//			for (b=5; b<a; b+=2)
//			{
//				printf(" ");
//			}
//			for (b=10; b>a; b--)
//			{
//				printf("*");
//			}
//		printf("\n");
//		}
//		else
//		{
//			for (b=5; b>a; b-=2)
//		{
//				printf(" ");
//			
//		}
//			for (b=0; b<a; b++)
//		{
//				printf("*");
//		}
//		printf("\n");}
//		}
//		
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a;
//	for (a=1; a<10; a++) 
//	{
//    	if (a%3 == 0) 
//    	{
//      		printf("%d\n", a);
//    	}
//    	else
//    	{
//      		printf("%d ", a); 
//    	}
//  }
//} ���� �簢��

//#include <stdio.h>
//int main()
//{
//	int m,v,sm;
//	printf("�����־��ּ��� ");
//	scanf("%d", &m);
//	printf("1.cola 10��, 2.juice 20�� ");
//	
//	while(1)
//	{
//		scanf("%d", &v);
//		if (v==1)
//		{
//			printf("cola\n");
//			printf("�������� %d",m-10);
//			sm = m-10;
//			m = sm;
//		}
//		if (v==2)	
//		{
//			printf("juice\n");
//			printf("�������� %d",m-20);
//			sm = m-20;
//			m = sm;
//		}
//		if (v==0)
//		{
//			printf("end");
//			break;
//		}
//		if (sm<10)
//		
//		{
//			printf("\n�ݾ׺���");
//			break;
//		}
//	}
//} ������ ���Ǳ�

//#include <stdio.h>
//int main()
//{
//	char a[6] = "happy";
//	int c = 0;
//	while (a[c] != 0)
//	{
//		c++;
//	}
//	printf("%d", c);
//	
// } 

//#include <stdio.h>
//int l(char d[])
//{
//	int c = 0;
//	while (d[c])
//	{
//		c++;
//	}
//	return c;
//}
//int main()
//{
//	int dl;
//	char d[10] = "happy";
//	dl = l(d);
//	printf("%d", dl);
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char d[10] = {'a','b','c',0};
//	char r[15];
//	strcpy(r, d);
//	strcat(r, "def@");
//	
//	printf("%s + \"def\" + \"@\"   = %s\n", d, r);
//}

//#include <stdio.h>
//int main()
//{
//	int b,c;
//	int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//	
//	for (b=3; b>=0; b--)
//	{
//		for (c=3; c>=0; c--)
//		{
//			printf("%3d ",a[b][c]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int swap(int x,int y)
//{
//	int t = x;
//	x = y;
//	y = t;
//	
//	printf("%d %d",x,y);
//	
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(a, b);
//
//	return 0;
//} ���� �����ϴ� �Լ�

// #include <stdio.h>
// 
// int main()
//{
//	int b,c;
//	int d=0;
//	int a[2][3]={{1,2,3},{4,5,6}};
//	for (b=0;b<=2;b++)
//	{
//		for(c=0;c<=1;c++)
//		{
//			printf("%d",a[c][b]);
//		}
//		printf("\n");
//	}
//} 2�����迭 ����

// #include <stdio.h>
// int arr[10];
// int l = sizeof(arr)/sizeof(int);

// int hh(int arr[],int x)
// {
// 	printf("�迭�� Ȧ��");
// 	for(x=0;x<l;x++)
// 	{
// 		if (arr[x]%2==1)
// 		{
// 			printf("%3d",arr[x]);
// 		}
// 	}

// }

// int jj(int arr[], int x)
// {
	
// 	printf("\n�迭�� ¦��");
// 	for(x=0;x<l;x++)
// 	{
// 		if (arr[x]%2==0)
// 		{
// 			printf("%3d",arr[x]);
// 		}
// 	}
// }

// int main()
// {
// 	int a;
// 	int ar[l];
// 	printf("�Է�\n");
// 	for(a=0;a<l;a++)
// 	{
// 		scanf("%d",&arr[a]);
// 	}
// 	hh(arr,l);
// 	jj(arr,l);
	
// }
//
//#include <stdio.h>
//
//int arr[10];
//int l = sizeof(arr)/sizeof(int);
//int o(int arr[],int x)
//{
//	for (x=0;x<l;x++)
//	{
//			if(arr[x]%2==1)
//			printf("%3d",arr[x]);
//	}
//}
//
//
//int e(int arr[],int x)
//{
//	for (x=0;x<l;x++)
//	{
//		if(arr[x]%2==0)
//		printf("%3d",arr[x]);
//	}
//}
//
//int main()
//{
//	int a;
//	int arr[l];
//	printf("�Է�\n");
//	for(a=0;a<l;a++)
//	{
//		scanf("%d",&arr[a]);
//	}
//	o(arr,l);
//	e(arr,l);
//	
//}

//#include <stdio.h>
//int main()
//{
//	char birthday;
//	char *ptr;
//	ptr = &birthday;
//	birthday = 1;
//	printf("birthday �������ּҴ�%p�Դϴ�.\n", ptr);
//	printf("birthday �������ּҴ�%p�Դϴ�.\n", &birthday);
//	printf("birthday �������ּҴ�%d�ϴ�.\n", *ptr);
//	printf("birthday �������ּҴ�%d�Դϴ�.", birthday);
//}
//


//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	
//	printf("%d",add(&a,&b));
//	
//}
//
//int add(int *a,int *b)
//{
//
//	return *a + *b;
//}


//#include <stdio.h>
//
//int gu(int *x, int *y)
//{
//	int a,b;
//	for (a=*x; a<=*y; a++)
//	{
//		for(b=1; b<10; b++)
//		{
//			printf("%d x %d = %d\n",a,b,a*b);
//			
//		}
//	printf ("\n");
//	}
//	
//}
//
//int main()
//{
//	int a, b;
//	printf("��ܿ��� ���");
//	scanf("%d %d",&a, &b);
//	gu(&a,&b);
//}

//#include <stdio.h>
//int main()
//{
//	int a,b,*c,*d;
//	scanf("%d %d",&a,&b);
//	c = &a;
//	d = &b;
//	
//	for (a=*c;a<=*d;a++)
//	{
//		for(b=1;b<10;b++)
//		{
//			printf("%d x %d = %d\n",a,b,a*b);
//		}
//	printf("\n");
//	}
//}


//#include <stdio.h>
//int s(int *arr[], int x)
//{
//	int a,b,t,mi,in;
//	for(a=0;a<x;a++)
//	{
//		mi = 9999;
//		for(b=a;b<x;b++)
//		{
//			if(mi>*arr[b])
//			{
//				mi = *arr[b];
//				in = b;
//			}
//		}
//		t = *arr[a];
//		*arr[a] = *arr[in];
//		*arr[in] = t;
//	}
//	for (a=0;a<x;a++)
//	printf("%3d",*arr[a]);
// } 
// 
//
// int main()
// {
// 	int a,b,c,d,e;
// 	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
// 	int *arr[]={&a,&b,&c,&d,&e};
// 	s(&arr,5);
// } 

//#include <stdio.h>
//int s(int *arr,int *l)
//{
//	int a,b,t;
//	int *p = &a, *p1 = &b;
//	
//	for(a=0; a<l; a++)
//	{
//		printf("%3d",arr[a]);
//	}
//	printf("\n");
//	for (a=0; a<l; a++)
//	{
//		for(b=0; b<l; b++)
//		{
//			if(arr[*p]<arr[*p1])
//			{
//				t = arr[*p];
//				arr[*p] = arr[*p1];
//				arr[*p1] = t;
//			}
//			
//		}
//	}
//	for (a=0; a<l; a++)
//		printf("%3d", arr[*p]);
//}
//	
//int main()
//{
//	
//	int arr[5] = {5,4,3,2,1};
//	int l = sizeof(arr)/sizeof(int);
//	s(arr,l);
//}

//#include <stdio.h>
//int main()
//{
//	short data = 3;
//	short *p = &data;
//	short **pp = &p;
//	printf("%d\n", data);
//	printf("[before]data: %d\n", data);
//	*p = 4;
//		printf("%d\n", data);
//	printf("[use *p]data : %d\n", data);
//	**pp = 5;
//		printf("%d\n", data);
//	printf("[use **p]data : %d\n", data);
//}

//#include <stdio.h>
//int s(int **a, int **b){
//	int *t;
//	t = *a;
//	*a = *b;
//	*b = t;
//}
//int main()
//{
//	int x = 10, y = 20;
//	int *p1=&x;
//	int *p2=&y;
//	s(&p1, &p2);
//	printf("x:%d\ny:%d",*p1,*p2);
//	
//}

//#include <stdio.h>
//#define ArrS 10
//
//
//int getmm(int arr[], int size, int* max, int* min);
//
//int main()
//{
//	int ar[ArrS] = {};
//	int i =0;
//	int big = 0;
//	int small = 0;
//	printf("���ڸ� %d�Է�: ",ArrS);
//	for (i=0;i<ArrS;i++)
//	{
//		scanf("%d", &ar[i]);
//	}
//	
//	getmm(ar,ArrS,&big,&small);
//	
//	printf("�ִ밪: %d\n", big);
//	printf("�ּҰ�: %d\n", small);
//	
//	return 0;
//}
//
//int getmm(int arr[], int size, int* max, int* min)
//{
//	int i =0;
//	*max = *min = arr[0];
//	for (i = 0; i < size; i++)
//	{
//		if(*max <arr[i])
//		{
//			*max = arr[i];
//		}
//		else if (*min > arr[i])
//		{
//			*min = arr[i];
//		}
//	}
//}
