#include <iostream>
#include <vector>
using namespace std;

class sumatoria
{
	private:
		vector<int> n;
		int nn;
	public:
		void load();
		~sumatoria();
};

void sumatoria::load()
{
	bool asd=false;
	while(asd==false)
	{
		cout<<"Ingrese un valor entero: ";
		cin>>nn;
		if(nn!=0) n.push_back(nn);
		else asd=true;
	}
}
sumatoria::~sumatoria()
{
	nn=0;
	cout<<endl;
	cout<<"Suma de todos los valores: "<<endl;
	for(int i=0; i<n.size(); i++) nn=nn+n[i];
	cout<<nn;
}

int main()
{
	sumatoria a;
	a.load();
	
    return 0;
}
