//////////////////////////////////////////////////////////////////////////////////////////////
// Clase con multiples comportamientos para manipular memoria                               //
//                                                                                          //
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



#ifndef __CtrlMemoria__
#define __CtrlMemoria__

#include <stdlib.h>
#include <stdio.h>
#include "Definiciones.hpp"



/// Clase con multiples comportamientos para manipular memoria
/** @author Antonio Carrillo Ledesma
    @date verano 2009
    @version 1.0.0
    @bug No hay errores conocidos
*/
class CtrlMemoria
{

public:

   /// Visualiza el error indicado por falta de memoria
   /** @param cad Puntero a la cadena de error */
   void errorSolicitudMemoria(const char *cad)
   {
      printf("\nError no hay memoria: %s\n",cad);
      exit(1);
   }

   /// Asigna memoria para un arreglo INT
   /** @param n N�mero de columnas
       @param cad Puntero a la cadena de error
       @return Puntero a un arreglo int */
   int *asignaMemoriaINT(int n, const char *cad)
   {
      int *var = new int[n];
      if (!var) errorSolicitudMemoria(cad);
      return var;
   }

   /// Libera memoria de un arreglo INT
   /** @param var Puntero al arreglo */
   void liberaMemoriaINT(int *var)
   {
      if (var) delete []var;
      var = NULL;
   }

   /// Asigna memoria para un arreglo ldouble
   /** @param n N�mero de columnas
       @param cad Puntero a la cadena de error
       @return Puntero a un arreglo ldouble */
   ldouble *asignaMemoriaLDOUBLE(int n, const char *cad)
   {
      ldouble *var = new ldouble[n];
      if (!var) errorSolicitudMemoria(cad);
      return var;
   }

   /// Libera memoria de un arreglo ldouble
   /** @param var Puntero al arreglo */
   void liberaMemoriaLDOUBLE(ldouble *var)
   {
      if (var) delete []var;
      var = NULL;
   }

   /// Asigna memoria para una matriz int
   /** @param n N�mero de renglones
       @param m N�mero de columnas
       @param cad Puntero a la cadena de error
       @return Puntero a la matriz int */
   int **asignaMemoriaINT(int n, int m, const char *cad)
   {
      int **var = new int*[n];
      if (!var) errorSolicitudMemoria(cad);
      int i;
      for (i = 0; i < n; i++)
      {
         var[i] = new int[m];
         if (!var[i]) errorSolicitudMemoria(cad);
      }
      return var;
   }

   /// Libera memoria de una matriz int
   /** @param n N�mero de renglones
       @param var Puntero a la matriz int */
   void liberaMemoriaINT(int n, int **var)
   {
      int i;
      if (var)
      {
         for (i = 0; i < n; i++)
         {
            delete []var[i];
            var[i] = NULL;
         }
         delete []var;
         var = NULL;
      }
   }

   /// Asigna memoria para una matriz ldouble
   /** @param n N�mero de renglones
       @param m N�mero de columnas
       @param cad Puntero a la cadena de error
       @return Puntero a la matriz ldouble */
   ldouble **asignaMemoriaLDOUBLE(int n, int m, const char *cad)
   {
      ldouble **var = new ldouble*[n];
      if (!var) errorSolicitudMemoria(cad);
      int i;
      for (i = 0; i < n; i++)
      {
         var[i] = new ldouble[m];
         if (!var[i]) errorSolicitudMemoria(cad);
      }
      return var;
   }

   /// Libera memoria de una matriz ldouble
   /** @param n N�mero de renglones
       @param var Puntero a la matriz ldouble */
   void liberaMemoriaLDOUBLE(int n, ldouble **var)
   {
      int i;
      if (var)
      {
         for (i = 0; i < n; i++)
         {
            delete []var[i];
            var[i] = NULL;
         }
         delete []var;
         var = NULL;
      }
   }


};


#endif


