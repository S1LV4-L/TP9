#include <iostream>
using namespace std;

class operaciones
{
	private:
		int n1, n2;
	public:
		operaciones();
		void srmd();
};

operaciones::operaciones()
{
	cout<<"Ingrese el primer valor: ";
	cin>>n1;
	cout<<"Ingrese el segundo valor: ";
	cin>>n2;
}
void operaciones::srmd()
{
	cout<<endl;
	cout<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
	cout<<n1<<" - "<<n2<<" = "<<n1-n2<<endl;
	cout<<n1<<" * "<<n2<<" = "<<n1*n2<<endl;
	cout<<n1<<" / "<<n2<<" = "<<n1/n2<<endl;
}

int main()
{
	operaciones a;
	a.srmd();
	
    return 0;
}
