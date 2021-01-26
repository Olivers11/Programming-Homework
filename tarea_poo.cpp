#include <iostream>
using namespace std;

#define cl system("cls")
#define pa system("pause")




class Coche{
    private:
	string color;
	int velocidad;
	float tamanio;

    public:
	
	// == constructor ==
	Coche(string c, int v, float t)
	{
	    this->color = c;
	    this->velocidad = v;
	    this->tamanio = t;
	}


	void Avanzar()
	{
	    cout << "Se ha avanzado a " << this->velocidad << "km/h \n";
	}

	void Parar()
	{
	    cout << "Auto detenido";
	}


	void girarIzquierda()
	{
	    cout << "Se ha girado a la izquierda \n";
	}

	void girarDerecha()
	{
	    cout << "se ha girado a la derecha \n";
	}
};



int main()
{
    string c_carro;
    int v_carro;
    float t_carro;

    cout << "Color: "; cin >> c_carro;
    cout << "Velocidad: "; cin >> v_carro;
    cout << "Tamaño: "; cin >> t_carro;



    Coche mazda = Coche(c_carro, v_carro, t_carro);

    int opcion;
    do
    {
	cl;
	cout << "ACCIONES DEL AUTOMOVIL \n";
	cout << "[1] Avanzar \n";
	cout << "[2] Detener \n";
	cout << "[3] Girar a la Izquierda \n";
	cout << "[4] Girar a la Derecha \n";
	cout << "[5] Salir \n";
	cin >> opcion;

	if(opcion == 1)
	{
	    cl;
	    mazda.Avanzar();
	    pa;
	}
	else if(opcion == 2)
	{
	    cl;
	    mazda.Parar();
	    pa;
	}
	else if(opcion == 3)
	{
	    cl;
	    mazda.girarIzquierda();
	    pa;
	}
	else if(opcion == 4)
	{
	    cl;
	    mazda.girarDerecha();
	    pa;
	}
    }while(opcion != 5);
		


}
