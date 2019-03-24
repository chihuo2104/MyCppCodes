#include<iostream>
#include<algorithm>
using namespace std;
struct student
{
	int chinese_score;
	int math_score;
	int english_score;
	int total_score;
	int school_number;
};
bool ranking_student_scores(student x,student y)
{
	if(x.total_score>y.total_score)
	{
		return x.total_score>y.total_score;
	}
	else
	{
		if(x.total_score<y.total_score)
		{
			return x.total_score>y.total_score;
		}
		else
		{
			if(x.chinese_score>y.chinese_score)
			{
				return x.chinese_score>y.chinese_score;
			}
			else
			{
				if(x.chinese_score<y.chinese_score)
				{
					return x.chinese_score>y.chinese_score;
				}
				else
				{
					return x.school_number<y.school_number;
				}
			}
		}
	}
}
int main()
{
	student stu[10000];
	int n,i;
	while(cin>>n)
	{
		for(i=0;i<n;i++)
		{
			cin>>stu[i].chinese_score>>stu[i].math_score>>stu[i].english_score;
			stu[i].school_number=i+1;
			stu[i].total_score=stu[i].chinese_score+stu[i].math_score+stu[i].english_score;
		}
		sort(stu,stu+n,ranking_student_scores);
		for(i=0;i<5;i++)
		{
			cout<<stu[i].school_number<<" "<<stu[i].total_score<<endl;
		}
		return 0;
	}
	
}

