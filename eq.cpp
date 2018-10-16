#include<iostream.h>
#include<stdio.h>
class STUDENT
{
	private:
		long bh;
		char mz[20];
		char xb[2];
		char zy[40];
		char bj[10];
		char nj[10];
		char dz[40];
		long dh;
	public:
		void srBh()
		{
		cout<<"请输入学生编号:";
		cin>>bh;
		cout<<endl;
		cout<<"请输入学生名字:";
		cin>>mz;
		cout<<endl;
		cout<<"请输入学生性别:";
		cin>>xb;
		cout<<endl;
		cout<<"请输入学生专业:";
		cin>>zy;
		cout<<endl;
		cout<<"请输入学生班级:";
		cin>>bj;
		cout<<endl;
		cout<<"请输入学生年级:";
		cin>>nj;
		cout<<endl;
		cout<<"请输入学生地址:";
		cin>>dz;
		cout<<endl;
		cout<<"请输入学生电话:";
		cin>>dh;
		cout<<endl;
		}
		void scXX()
		{
			cout<<"你输入的学生信息如下:"<<endl;
			cout<<"学生编号:"<<bh<<"    "<<endl;
			cout<<"学生名字:"<<mz<<"    "<<endl;
			cout<<"学生性别:"<<xb<<"    "<<endl;
			cout<<"学生专业:"<<zy<<"    "<<endl;
			cout<<"学生班级:"<<bj<<"    "<<endl;
			cout<<"学生年级:"<<nj<<"    "<<endl;
			cout<<"学生地址:"<<dz<<"    "<<endl;
			cout<<"学生电话:"<<dh<<"    "<<endl;
		}
};
int main()
{
	STUDENT s1;
	s1.srBh();
	s1.scXX();
	return 0;
}
