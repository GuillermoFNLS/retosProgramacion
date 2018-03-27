/* El perímetro de un polígno es la suma de la longitud de todos sus lados.
   ¿Eres capaz de calcular el perímetro de un rectangulo?

   ENTRADA

   La entrada consta de una serie de casos de prueba. Cada uno contiene, en una
   sola línea, la definición de un rectángulo. Un rectángulo se especifica
   proporcionando las coordenadas de la esquina superior derecha. Se debe
   considerar que la esquina inferior izquierda está siempre en el origen de
   coordenadas, es decir en (0,0). Se garantiza que la longitud de un lado no
   superará 10^8.

   El último caso de prueba, que no debe procesarse, contendrá un valor negativo
   en alguno de los ejes.

   SALIDA

   Para caso de prueba se escribirá, en una línea independiente, el perímetro
   del rectangulo
*/

   #include <iostream>
   #include "FuncionesPerimetroRectangulo.h"

   int main () {
      //  Variables
      int largo = 0, ancho = 0;
      unsigned int perimetro = 0;
      
      //  Desarrollo del programa
      do {
        pedirValores(largo,ancho);
        if (largo <= 0 || ancho <= 0) {
          return(-1);
        } else{
          perimetro = perimetroRectangulo(largo,ancho);
        }

        std::cout << "El perimetro es: " << perimetro << std::endl;
    } while (largo >= 0 || ancho >= 0);
    return 0;
   }
