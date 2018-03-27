#include <iostream>
#include "FuncionesPerimetroRectangulo.h"

void pedirValores(int &largo, int &ancho) {
    do {
      std::cout << "Introduce la longitud del largo " << std::endl;
      std::cout << ">>> ";
      std::cin >> largo;
    } while (largo >= 100000000);

    do {
      std::cout << "Introduce la longitud del ancho " << std::endl;
      std::cout << ">>> ";
      std::cin >> ancho;
    } while (ancho >= 100000000);
} //  pedirValores

int perimetroRectangulo(int largo, int ancho){
  //  Variables
  unsigned int perimetro = 0;

  //  Desarrollo de la funcion
  perimetro = (2*largo) + (2*ancho);
  return perimetro;
} // perimetroRectangulo
