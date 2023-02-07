#include <iostream>
#include <string.h>

class Materia {
private:
  char *Nombre;
  int Clave;
  char *ProfesorTit;
  char *LibroTexto;

public:
  Materia(char *nombre, int clave, char *profesorTit, char *libroTexto)
    : Nombre(nombre), Clave(clave), ProfesorTit(profesorTit), LibroTexto(libroTexto) {}

  void setClave(int clave) { Clave = clave; }
  void setProfesorTit(char *profesorTit) { ProfesorTit = profesorTit; }
  void setLibroTexto(char *libroTexto) { LibroTexto = libroTexto; }
  void Imprime() {
    std::cout << "Nombre: " << Nombre << std::endl;
    std::cout << "Clave: " << Clave << std::endl;
    std::cout << "ProfesorTit: " << ProfesorTit << std::endl;
    std::cout << "Libro: " << LibroTexto << std::endl;
}

  char* getNombre() const { return Nombre; }
  int getClave() const { return Clave; }
  char* getProfesorTit() const { return ProfesorTit; }
  char* getLibroTexto() const { return LibroTexto; }
};

int main() {
  Materia Programacion("Programacion", 1, "Juan","P1");
  Materia BasesDatos("Bases de Datos", 2, "Maria","BD1");

  int opcion = 0;
  do {
    std::cout << "1. Cambiar clave de Programacion" << std::endl;
    std::cout << "2. Cambiar ProfesorTit de Bases de Datos" << std::endl;
    std::cout << "3. Imprimir Bases de Datos" << std::endl;
    std::cout << "4. Imprimir Programacion" << std::endl;
    std::cout << "Seleccione una opcion: ";
    std::cin >> opcion;

    switch (opcion) {
      case 1:
        int nuevaClave;
        std::cout << "Ingrese la nueva clave: ";
        std::cin >> nuevaClave;
        Programacion.setClave(nuevaClave);
        break;

      case 2:
        char nuevoProfesorTit[50];
        std::cout << "Ingrese el nuevo ProfesorTit: ";
        std::cin >> nuevoProfesorTit;
        BasesDatos.setProfesorTit(nuevoProfesorTit);
        break;
      case 3:
        BasesDatos.Imprime();
        break;

      case 4:
        Programacion.Imprime();
        break;
    }
  }while(true);

  return 0;
}
