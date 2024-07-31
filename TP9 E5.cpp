#include <iostream>
using namespace std;

class estudiante
{
	private:
		string nombre;
		int edad, calificacion;
	public:
		string getNombre()
		{
			return nombre;
		}
		void setNombre(string nuevonombre)
		{
			nombre=nuevonombre;
		}
		int getEdad()
		{
            return edad;
        }
		void setEdad(int NuevaEdad)
		{
            if (NuevaEdad > 0) edad = NuevaEdad;
        }
        int getCalificacion()
        {
        	return calificacion;
		}
		void setCalificacion(int NuevaCalif)
		{
			calificacion=NuevaCalif;
		}
};


int main()
{
	estudiante a;
	a.setNombre("Juan");
	a.setEdad(15);
	a.setCalificacion(10);
	cout<<"Nombre: "<<a.getNombre()<<endl;
	cout<<"Edad: "<<a.getEdad()<<endl;
	cout<<"Calificacion: "<<a.getCalificacion()<<endl;
	
    return 0;
}
