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
		cout<<"������ѧ�����:";
		cin>>bh;
		cout<<endl;
		cout<<"������ѧ������:";
		cin>>mz;
		cout<<endl;
		cout<<"������ѧ���Ա�:";
		cin>>xb;
		cout<<endl;
		cout<<"������ѧ��רҵ:";
		cin>>zy;
		cout<<endl;
		cout<<"������ѧ���༶:";
		cin>>bj;
		cout<<endl;
		cout<<"������ѧ���꼶:";
		cin>>nj;
		cout<<endl;
		cout<<"������ѧ����ַ:";
		cin>>dz;
		cout<<endl;
		cout<<"������ѧ���绰:";
		cin>>dh;
		cout<<endl;
		}
		void scXX()
		{
			cout<<"�������ѧ����Ϣ����:"<<endl;
			cout<<"ѧ�����:"<<bh<<"    "<<endl;
			cout<<"ѧ������:"<<mz<<"    "<<endl;
			cout<<"ѧ���Ա�:"<<xb<<"    "<<endl;
			cout<<"ѧ��רҵ:"<<zy<<"    "<<endl;
			cout<<"ѧ���༶:"<<bj<<"    "<<endl;
			cout<<"ѧ���꼶:"<<nj<<"    "<<endl;
			cout<<"ѧ����ַ:"<<dz<<"    "<<endl;
			cout<<"ѧ���绰:"<<dh<<"    "<<endl;
		}
};
int main()
{
	STUDENT s1;
	s1.srBh();
	s1.scXX();
	return 0;
}
