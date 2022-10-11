#include "main.h"
/* *

   * _putchar - escribe el carácter c en stdout

   * @c: El caracter a imprimir

   *

   * Regreso: En caso de éxito 1.

   * En caso de error, se devuelve -1 y errno se establece correctamente.

    */

int  _putchar (char c)

{

	return (write (1 , &c, 1));

}

