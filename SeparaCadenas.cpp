//////////////////////////////////////////////////////////////////////////////////////////////
// Clase para manipulaci�n de cadenas                                                       //
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



#include <stdlib.h>
#include "SeparaCadenas.hpp"



// Libera la memoria ocupada por el arreglo
void SeparaCadenas::arregloLibera(void)
{
   if (!Arreglo_inicializado) return;
   int i;
   for (i = 0; i < Arreglo_num_columnas_maximas; i++)
   {
      delete []Arreglo[i];
      Arreglo[i] = NULL;
   }
   delete []Arreglo;
   Arreglo = NULL;

   Arreglo_inicializado = false;
}
// Inicializa el arreglo de trabajo
void SeparaCadenas::arregloInicializa(const int num_col_max, const int tam)
{
   if (Arreglo_inicializado) arregloLibera();
   Arreglo_tamano_columna = tam;
   Arreglo_num_columnas_maximas = num_col_max;
   Arreglo = new char *[Arreglo_num_columnas_maximas];
   int i;
   for (i = 0; i < Arreglo_num_columnas_maximas; i++)
   {
      Arreglo[i] = asignaPuntero(Arreglo_tamano_columna);
   }
   Arreglo_inicializado = true;
}

// Separar una cadena en sus componentes indicados por un separador dado
int SeparaCadenas::arregloSeparaElementos(const char *xcad, const char sep)
{
   if (!Arreglo_inicializado) arregloInicializa(10,1024);
   int i, j, k;
   for (i = 0; i < Arreglo_num_columnas_maximas; i++) Arreglo[i][0] = 0;

   j = i = k = 0;
   while (xcad[i])
   {
      if (xcad[i] == sep)
      {
         Arreglo[j][k] = 0;
         if ((j+1) >= Arreglo_num_columnas_maximas) break;
         j++, i++;
         k = 0;
      }
      Arreglo[j][k] = xcad[i];
      i++, k++;
   }
   Arreglo[j][k] = 0;
   return j;
}

// Retorna los componentes de una cadena indicados por un separador dado
char *SeparaCadenas::arregloRetornaElemento(const int in)
{
   if (!Arreglo_inicializado) return NULL;
   if (in < Arreglo_num_columnas_maximas)
   {
      return Arreglo[in];
   }
   return NULL;
}

