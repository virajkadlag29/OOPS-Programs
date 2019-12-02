#include<iostream>
#include<iterator>
#include<vector>
using namespace std;

void create(vector<int> &v)
{
	int x,y;
	cout<<"Enter the number of elements in the vector "<<endl;
	cin>>x;

	for(int i=0;i<x;i++)
	{
		cout<<"Enter values"<<endl;
		cin>>y;
		v.push_back(y);
	}

}

vector<int> modify(vector<int> &v)
{
	int i,j;
	cout<<"Enter the position of the element you want to modify :"<<endl;
	cin>>i;
	cout<<"Enter Replacement value:"<<endl;
	cin>>j;
	vector<int>::iterator itr;
	itr = v.begin();
	itr = itr + i - 1;
	*itr = j;
	cout<<"Value Modified!"<<endl;
	return v;
}

vector<int> del(vector<int> &v)
{
	int p;
	cout<<"Enter the position of the element you want to delete"<<endl;
	cin>>p;
	vector<int>::iterator it = v.begin();
	it = it + p -1;
	v.erase(it);
	cout<<"Vector element deleted!";
	return v;
}

void display(vector<int> &v)
{
	cout<<"('";
    for(int i=0;i<v.size()-1;i++)
    {
        cout<<v[i]<<",";
    }
    cout<<v[v.size()-1];
    cout<<"')\n";
}

vector<int> multiply(vector<int> &v)
{
	int m;
	cout<<"Enter the value to multiply: "<<endl;
	cin>>m;
	for(int k=0;k<v.size();k++)
	{
		v[k] *= m;
	}
	cout<<"Vector Multiplied!\n"<<endl;
	return v;
}

int main()
{
	vector<int> v;
	int ch;
	do
	{

	cout<<"1.Create\n2.Modify\n3.Multiply\n4.Display\n5.Delete\n6.Exit\n";
	cout<<"\nEnter a choice\n";
	cin>>ch;

	switch(ch)
	{
		case 1:create(v);
			   break;

		case 2:v = modify(v);
			   break;

		case 3:v = multiply(v);
			   break;

		case 4:display(v);
			   break;

		case 5:v = del(v);
			   break;

		/*case 6:v.clear();
			   cout<<"All the elements of the vector have been destroyed!"<<endl;
			   break;*/

		case 7:cout<<"Program Terminated!";
			   break;
	}
	}while(ch!=6);
}
