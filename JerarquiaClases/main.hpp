/** @mainpage Grupo de Modelaci�n Matem�tica y Computacional
 *
 * @section intro_sec Introducci�n
 *
 * La presente documentaci�n es un esfuerzo del grupo de Modelaci�n Matem�tica 
 * y Computacional en que se llevan a cabo actividades como el acopio, 
 * la organizaci�n, la documentaci�n y publicaci�n de algoritmos, m�todos, 
 * modelos, paquetes, sitios afines, etc, para el uso de investigadores y 
 * estudiantes interesados en dichas disciplinas. 
 *
 * @subsection sub1 �Para que fue desarrollado el programa? 
 * El programa ha sido desarrollado con fines acad�micos y de investigaci�n, m�s espec�ficamente, para probar diferentes m�todos de discretizaci�n usados en la soluci�n 
 * de problemas de ecuaciones diferenciales parciales con valores en la frontera. Este trabajo es realizado por alumnos del posgrado (en ciencias de la tierra como de 
 * ciencias en computaci�n de la UNAM) para probar las metodolog�as que desarrollan en sus respectivos trabajos acad�micos. Estos programas son liberados como software
 * libre bajo la licencia GPL. 

 * @subsection sub2 �Qu� es el software libre? 
 * En primer lugar, un software cuyo secreto de fabricaci�n (el llamado "c�digo fuente", algo as� como los "planos" del programa) es conocido y difundido libremente. El 
 * autor del software concede a cualquiera el derecho a usar su obra, a modificarla y a adaptarla a sus necesidades espec�ficas. Este derecho de libre uso a veces se 
 * otorga sin restricciones (licencias tipo BSD) y otras veces con la �nica condici�n de que toda mejora se distribuya con las mismas condiciones de uso que tiene 
 * originalmente y por tanto siga estando libremente disponible para todo el mundo (licencias tipo copyleft, como la GPL de la Free Software Foundation). A diferencia de 
 * lo que sucede con el software propietario cuyo �nico objetivo es la rentabilidad econ�mica y no el hacer buenas herramientas, la comunidad del software libre se 
 * empe�a en la b�squeda de una buena adecuaci�n entre las necesidades y el propio producto, esto es, busca a la vez la calidad y la eficiencia social que otorga la 
 * libertad de uso. 

 * @subsection sub3 �Qu� tipo de dato de punto flotante se usa en el programa? 
 * Se pueden usar double y long double, el tipo de dato se define en el archivo Definiciones.hpp al comentar o descomentar la directiva de compilaci�n __Double__, por 
 * omisi�n el tipo de dato usado es double, al ser este aceptado en todos los compiladores de C++. 

 * @section comp_sec �C�mo compilo y ejecuto el programa? 
 * Primeramente hay que bajar los fuentes de cada ejemplo (en el c�digo de los ejemplos s�lo cambia la funci�n principal Principal.cpp y el archivo Problema.cpp).
 
 * Si compila en LINUX o UNIX usar: 

 * $ g++ -O1 *.cpp -o ejemp 

 * Para ejecutar el programa ya compilado 

 * $ ./ejemp 

 * Si compila en Windows, recomendamos el uso del compilador MinGW Minimalist GNU for Windows (Compilador de linea para C, C++, Fortran, Ada, Java, Pascal, ObjC, etc, 
 *  para 32 y 64 bits) usando las mismas opciones que anteriormente se describieron. 


 * @section license_sec Licencia
 * Este programa es software libre. Puede redistribuirlo y/o modificarlo 
 * bajo los t�rminos de la Licencia P�blica General de GNU seg�n es                  
 * publicada por la Free Software Foundation, bien de la versi�n 2 de               
 * dicha Licencia o bien (seg�n su elecci�n) de cualquier versi�n                   
 * posterior.                                                               
                                                                         
 * Este programa se distribuye con la esperanza de que sea �til, pero SIN   
 * NINGUNA GARANT�A, incluso sin la garant�a MERCANTIL impl�cita o sin      
 * garantizar la CONVENIENCIA PARA UN PROP�SITO PARTICULAR. V�ase la        
 * Licencia P�blica General de GNU para m�s detalles.                       
                                                                         
 * Deber�a haber recibido una copia de la Licencia P�blica General junto    
 * con este programa. Si no ha sido as�, escriba a la Free Software         
 * Foundation, Inc., en 675 Mass Ave, Cambridge, MA 02139, EEUU.            
 * 
 * 
 */

