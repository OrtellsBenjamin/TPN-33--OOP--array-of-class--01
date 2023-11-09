#include <iostream>
#include "paciente.h"

using namespace std;

void MostrarDatos(Cpaciente *arreglo) {
    for (int i = 0; i < 5; i++) {
        cout << "Nombre: " << arreglo[i].getNombre() << endl;
        cout << "Direccion: " << arreglo[i].getDireccion() << endl;
        cout << "Telefono: " << arreglo[i].getTelefono() << endl;
        cout << "Tiene obra social?: " << (arreglo[i].getObraSocial() ? "Si" : "No") << endl;
        cout << "Tiene Alergias?: " << (arreglo[i].getAlergias() ? "Si" : "No") << endl;
        cout << "Anio de la ultima visita: " << arreglo[i].getAnioUltimaVisita() << endl;
         cout<<endl;
    }
   
    
}

void ListarPacientesConObraSocial(Cpaciente *arreglo) {
    cout << "Pacientes con obra social:" << endl;
    for (int i = 0; i < 5; i++) {
        if (arreglo[i].getObraSocial()) {
            cout << "- " << arreglo[i].getNombre() << endl;
        }
    }
}

void ListarPacientesSinAlergias(Cpaciente *arreglo) {
    cout << "Pacientes sin alergias:" << endl;
    for (int i = 0; i < 5; i++) {
        if (!arreglo[i].getAlergias()) {
            cout << "- " << arreglo[i].getNombre() <<endl;
        }
    }
}

int main() {
    Cpaciente *pacientes = new Cpaciente[5];

    pacientes[0] = Cpaciente("Felipe", "San Luis 1720", "2235426697", false, true, 2018);
    pacientes[1] = Cpaciente("Ana", "Tucuman 2000", "2231423863", true, false, 2019);
    pacientes[2] = Cpaciente("Carlos", "Gianelli 400", "2235456590", true, true, 2020);
    pacientes[3] = Cpaciente("Luisa", "Av. Trabajador 1223", "2232889231", false, false, 2022);
    pacientes[4] = Cpaciente("Sofia", "Bolivar 1200", "2234526288", true, true, 2016);

    MostrarDatos(pacientes);
    ListarPacientesConObraSocial(pacientes);
    ListarPacientesSinAlergias(pacientes);

    delete[] pacientes;

    return 0;
}

