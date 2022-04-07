# include<iostream>
# include<cstdlib>
# include<cstdio>
# include<cstring>
# include <windows.h>
# include <ctime>
# include <wchar.h>

using namespace std;

class CajaAhorro {
    private:
        char apellido[10];
        char nombre[10];
        int cuenta;
        float saldo;
    public:
        CajaAhorro(int cuen, float sal=0){
            cuenta=cuen;
            if (sal<0){
                cout << "ingrese un importe valido";
            }
            else {
                 saldo=sal;
            }
        }
        ///sets
            void setApellido(const char *ape){strcpy(apellido,ape);}
            void setNombre(const char *nom){strcpy(nombre,nom);}
            void setCuenta(int cuen){cuenta=cuen;}
            void setSaldo(float sal){saldo=sal;}
        ///gets
            const char *getApellido(){return apellido;}
            const char *getNombre(){return nombre;}
            int getCuenta(){return cuenta;}
            float getSaldo(){return saldo;}
        void Extraccion(float);
        void Deposito(float);
};

void CajaAhorro::Extraccion(float cantidad){
    if (saldo<cantidad){
        cout << "no se puede extraer";
    }
    else if (cantidad<0) {
        cout << "ingrese un importe valido";
    }
    else {
        saldo-=cantidad;
    }
}

void CajaAhorro::Deposito(float cantidad){
    if (cantidad<0){
        cout << "ingrese un importe valido";
    }
    else {
        saldo+=cantidad;
    }
}

main (){
	setlocale(LC_ALL, "");
    CajaAhorro Agustin(12);
    Agustin.setApellido("Santillan");
	return 0;

}
