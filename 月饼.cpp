/*

*/
/*
Warning!�ؿ���
������д:
CV:count variable(ͳ�Ʊ���)
LCV:loop control variable(ѭ�����Ʊ���)
OV:ordinary variable(��ͨ����)
TV:temporary variable(��ʱ����)
KIV:Keyboard input variable(�����������)
KOV:Keyboard output variable(�����������)
FV:file variable(�ļ�����)
*/
//Ԥ��������
#include<iostream>
//Ԥ�����������
using namespace std;
//ȫ�ֱ�����������
/*�����÷� Variables usage:*/
//ȫ�ֱ��������������
//������������
//���������������
//main() funcion
int main()
{
	//������������
	int a[1000][100]= {0},count[100]= {0},i,j,m,n;
	int bigger_num,bigger_row,bigger_col;
	/*�����÷� Variable usage:
	a[int two-dimensional array]:KIV
	n,m[int]:KIV*/
	//���������������
	//������ʼ������
	//������ʼ���������
	//��������
	//��Ҫ��������
	cin>>m>>n;//m�����±�����   //n��������� 
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			cin>>a[i][j];
			count[j]+=a[i][j];
		}
	}
//	for(i=0; i<m; i++)
//	{
//		for(j=0; j<n; j++)
//		{
//			count[i]+=a[i][j];
//		}
//	}
	for(i=0; i<m; i++)
	{
//		cout<<count[i]<<endl;
		if(i==0)
		{
			bigger_num=count[i];
		}
		else
		{
			if(count[i]>bigger_num)
			{
				bigger_num=count[i];
			}
		}
	}
	cout<<bigger_num<<endl;
	bool isOne=true;
	for(i=0; i<m; i++)
	{
		if(count[i]==bigger_num)
		{
			if(isOne)
			{
				cout<<i+1;
				isOne=false;
			}
			else
			{
				cout<<" "<<i+1;
			}
		}
	}
	return 0;
}
//С��Ĩ��ʱ��
/*
������
�� ���
�������ƺ�֮ˮ���������������������ء�
�����������������׷���������˿ĺ��ѩ��
���������뾡����Īʹ���׿ն��¡�
�����Ҳı����ã�ǧ��ɢ����������
᯷��ӣ��������������ƣ���Īͣ��
�����һ�������Ϊ���������
�ӹ�������󣬵�Ը����Ը�ѡ�
����ʥ�ͽԼ�į��Ω��������������
������ʱ��ƽ�֣�����ʮǧ���ʡ�
���˺�Ϊ����Ǯ�������ȡ�Ծ��á�
�廨��ǧ���ã��������������ƣ����ͬ����ų
*/

