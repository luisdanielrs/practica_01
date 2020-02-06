
#include <iostream>
using namespace std;
class Gato{
private:
int suEdad;
float suPeso;




void Edad(int edad);
int Edad();
void Peso(float peso);
float Peso();
void Maullar();
};
void Gato::Edad(int edad){
suEdad = edad;
}
int Gato::Edad(){
return suEdad;
}
void Gato::Peso(float peso){
suPeso = peso;
}
float Gato::Peso(){
return suPeso;
}
void Gato::Maullar(){
cout << "Miauuuuu" << endl;
}

int main (void){
Gato Pelusa;
Pelusa.Edad(5);
Pelusa.Peso(3.5);
cout << "El peso de pelusa es: " << Pelusa.Edad() << endl;
cout << "La edad de Pelusa es: " << Pelusa.Peso() << endl;
Pelusa.Maullar();

}

/* EJERCICIO 2.4
  TIPO DE ERROR:
  E:error: 'void Gato::Edad(int)' is private
     el error que aparece se refiere a que estamos intentando acceder a una parte de la clase la cual es privada y no tenemos acceso a esa parte
     la queremos usar cuando no lo pusismos como publico

*/
