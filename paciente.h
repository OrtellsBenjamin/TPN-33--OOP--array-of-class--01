#ifndef paciente_h
#define paciente_h
#include <string>
using namespace std;

class Cpaciente {
public:
    Cpaciente(string nom,string dir,string tel, bool obra, bool al, int anio);
    Cpaciente();
    
    string getNombre();
    string getDireccion();
    string getTelefono();
    bool getObraSocial();
    bool getAlergias();
    int getAnioUltimaVisita();

private:
    string nombre;
    string direccion;
    string telefono;
    bool obraSocial;
    bool alergias;
    int anioUltimaVisita;
};

Cpaciente::Cpaciente() {
    
}

Cpaciente::Cpaciente(string nom, string dir, string tel, bool obra, bool al, int anio) {
    nombre = nom;
    direccion = dir;
    telefono = tel;
    obraSocial = obra;
    alergias = al;
    anioUltimaVisita = anio;
}

string Cpaciente::getNombre() {
    return nombre;
}

string Cpaciente::getDireccion() {
    return direccion;
}

string Cpaciente::getTelefono() {
    return telefono;
}

bool Cpaciente::getObraSocial() {
    return obraSocial;
}

bool Cpaciente::getAlergias() {
    return alergias;
}

int Cpaciente::getAnioUltimaVisita() {
    return anioUltimaVisita;
}


#endif

