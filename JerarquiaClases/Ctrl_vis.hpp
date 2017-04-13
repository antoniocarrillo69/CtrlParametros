//////////////////////////////////////////////////////////////////////////////////////////////
// Clase para visualizar n�meros de distinto tipo                                           //
// Revisi�n: 6 de Junio del 2006                                                            //
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

#ifndef __Ctrl_vis__
#define __Ctrl_vis__

#include <stdio.h>


/// Clase para visualizar n�meros sobrecargando la funcion
/** @author Antonio Carrillo Ledesma
    @date primavera 2009
    @version 1.0.1
    @bug No hay errores conocidos
*/
class Ctrl_visualizacion
{

public:
   /// Visualiza un n�mero char
   void visualiza(char v)
   {
      printf(" %+d ",(int)v);
   }

   /// Visualiza un n�mero int
   void visualiza(int v)
   {
      printf(" %+d ",v);
   }

   /// Visualiza un n�mero double con formato %+1.10le
   void visualiza_e(double v)
   {
      printf(" %+1.10le ",v);
   }

   /// Visualiza un n�mero double con formato %+1.10le y cambia de linea
   void visualiza_en(double v)
   {
      printf(" %+1.10le\n",v);
   }

   /// Visualiza un n�mero double con formato %+1.10lf
   void visualiza_n(double v)
   {
      printf(" %+1.10lf ",v);
   }

   /// Visualiza un n�mero double con formato %+1.10lf y cambia de linea
   void visualiza_nn(double v)
   {
      printf(" %+1.10lf\n",v);
   }

   /// Visualiza un n�mero long double con formato %+1.10Le
   void visualiza_e(long double v)
   {
      printf(" %+1.10Le ",v);
   }

   /// Visualiza un n�mero long double con formato %+1.10Le y cambia de linea
   void visualiza_en(long double v)
   {
      printf(" %+1.10Le\n",v);
   }

   /// Visualiza un n�mero long double con formato %+1.10Lf
   void visualiza_n(long double v)
   {
      printf(" %+1.10Lf ",v);
   }

   /// Visualiza un n�mero long double con formato %+1.10Lf y cambia de linea
   void visualiza_nn(long double v)
   {
      printf(" %+1.10Lf\n",v);
   }

};


#endif
