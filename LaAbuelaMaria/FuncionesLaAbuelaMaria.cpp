#include <iostream>

void rellenarDientes(int *dientes, int numeroDientes) {
  for (int i = 0; i < numeroDientes; i++) {
    std::cout << "Introduce el valor del diente nº " << i+1 << " " << std::endl;
    std::cout << ">>> ";
    std::cin >> dientes[i];
  }
} // Rellenar dientes superiores e inferiores

void mostrarDientes(int *dientes, int numeroDientes) {
  for (int i = 0; i < numeroDientes; i++) {
    std::cout << dientes[i] << " ";
  }
}

void dientesEncajan(int *dientesSuperiores, int *dientesInferiores, int numeroDientes) {
  //  Variables
  int primerDienteSuperior = 0;
  int segundoDienteInferior = 0;
  int diferencia = 0;
  bool dientesEncajan = true;

  //  Desarrollo de la función
  primerDienteSuperior = dientesSuperiores[0];
  segundoDienteInferior = dientesInferiores[0];
  if (primerDienteSuperior >= segundoDienteInferior) {
    diferencia = primerDienteSuperior - segundoDienteInferior;
  } else {
    diferencia = segundoDienteInferior - primerDienteSuperior;
  }

  for (int i = 1; i < numeroDientes; i++) {
    if (diferencia == (dientesSuperiores[i] - dientesInferiores[i]) || (diferencia * -1) == (dientesSuperiores[i] - dientesInferiores[i])) {
      std::cout << "..." << std::endl;
    } else {
      dientesEncajan = false;
    }
  }

  if (dientesEncajan == false) {
    std::cout << "NO" << std::endl;
  }else {
    std::cout << "SI" << std::endl;
  }
}
