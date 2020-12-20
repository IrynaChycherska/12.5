#include <iostream>
using namespace std;
typedef int Info;
struct Elem
{
	Elem* link;
	Info info;
};
void push(Elem*& top, Info value);
Info pop(Elem*& top);
int CountMark(Elem*& top, char* str1);
int kilkist(Elem*& top, char* str2);
int CountMark(Elem*& top, char* str1 )
{
	int k = 10;
	while (str1[k]<0)
	{
		char str[] = { '10', '9', '8', '7', '6', '5', '4', '3', '2', '1' };
		k++;
	}
	return k;
}
int kilkist(Elem*& top, char* str2)
{
	int p = 10;
	while (str2[p]>0)
	{
		char str[] = { '-1','-2', '-3', '-4', '-5', '-6', '-7', '-8', '-9', '-10' };
		p++;
	}
	return p;
}
int kil(Elem*& top, char* str3)
{
	int m = 1;
	while (str3[m]=0)
	{
		m++;
	}
	return m;
}

int main()
{

	Elem* top = NULL;
	for (int i = -10; i <= 10; i++)
		push(top, i);
	while (top != NULL)
		cout << pop(top) << " ";
	char str1[] = {'10','9','8','7','6','5','4','3','2','1', '-1','-2', '-3', '-4', '-5', '-6', '-7', '-8', '-9', '-10' };
	cout << endl;
	cout << CountMark(top, str1) << endl;
	char str2[] = { '-1','-2', '-3', '-4', '-5', '-6', '-7', '-8', '-9', '-10' };
	cout << kilkist(top, str2) << endl;
	char str3[] = { '0' };
	cout << kil(top, str3) << endl;
	cout << endl;
	return 0;
}
void push(Elem*& top, Info value)
{
	Elem* tmp = new Elem; 
	tmp->info = value; 
	tmp->link = top; 
	top = tmp; 
}
Info pop(Elem*& top)
{
	Elem* tmp = top->link; 
	Info value = top->info; 
	delete top; 
	top = tmp; 
	return value; 
}
