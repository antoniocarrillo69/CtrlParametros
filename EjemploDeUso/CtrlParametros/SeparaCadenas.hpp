//////////////////////////////////////////////////////////////////////////////////////////////
// Clase para separar subcadenas dentro de una cadena                                       //
//                                                                                          //
// An�lisis y Dise�o y Programaci�n:                                                        //
//                                                                                          //
// Nombre:   Antonio Carrillo Ledesma                                                       //
// E-mail:   acl@www.mmc.geofisica.unam.mx                                                  //
// P�gina:   http://www.mmc.geofisica.unam.mx/acl                                           //
//                                                                                          //
//                                                                                          //
// Este programa es software libre. Puede redistribuirlo y/o modificarlo                    //
// bajo los t�rminos de la Licencia P�blica General de GNU seg�n es                         //
// publicada por la Free Software Foundation, bien de la versi�n 2 de                       //
// dicha Licencia o bien (seg�n su elecci�n) de cualquier versi�n                           //
// posterior.                                                                               //
//                                                                                          //
// Este programa se distribuye con la esperanza de que sea �til, pero SIN                   //
// NINGUNA GARANT�A, incluso sin la garant�a MERCANTIL impl�cita o sin                      //
// garantizar la CONVENIENCIA PARA UN PROP�SITO PARTICULAR. V�ase la                        //
// Licencia P�blica General de GNU para m�s detalles.                                       //
//                                                                                          //
// Deber�a haber recibido una copia de la Licencia P�blica General junto                    //
// con este programa. Si no ha sido as�, escriba a la Free Software                         //
// Foundation, Inc., en 675 Mass Ave, Cambridge, MA 02139, EEUU.                            //
//                                                                                          //
//                                                                                          //
//////////////////////////////////////////////////////////////////////////////////////////////




#ifndef __SEPARACADENAS_HPP__
#define __SEPARACADENAS_HPP__

#include "Cadenas.hpp"


/// Clase para separar subcadenas dentro de una cadena
/** @author Antonio Carrillo Ledesma
    @date primavera 2009
    @version 1.0.1
    @bug No hay errores conocidos
*/
class SeparaCadenas : public Cadenas
{
private:
   // Varables usadas para separar una cadena en sus componentes indicados por un separador dado
   bool             Arreglo_inicializado;
   char           **Arreglo;
   int              Arreglo_num_columnas_maximas;
   int              Arreglo_num_columnas_encontradas;
   int              Arreglo_tamano_columna;



public:
   /// Constructor de la clase
   SeparaCadenas(void)
   {
      Arreglo = NULL;
      Arreglo_inicializado = false;
   }
   /// Destructor de la clase
   ~SeparaCadenas()
   {
      arregloLibera();
   }

   /// Libera la memoria ocupada por el arreglo
   void             arregloLibera(void);
   /// Inicializa el arreglo de trabajo
   void             arregloInicializa(const int num_col_max, const int tam);
   /// Separar una cadena en sus componentes indicados por un separador dado retornado el numero de elementos encontrado
   int              arregloSeparaElementos(const char *xcad, const char sep);
   /// Retorna los componentes de una cadena indicados por un separador dado
   char            *arregloRetornaElemento(const int in);


};

#endif



