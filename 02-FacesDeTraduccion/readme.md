Version:
    gcc versión 11.3.1 20220421 (Red Hat 11.3.1-2) (GCC)

Pasos:
    1)Preprocesador:
        a)
        b)Hicimos el Hello.i, Dandonos cuenta de todas las declaraciones que son necesarias solamente para el preprocesador y como este varia de sistema en sistema.
        c)Escribimos el codigo de hello3.c
        d)La linea 1, es una declaracion de una funcion llamada printf que retorna un int,que espera al menos un argumento,tambien sabemos que s apunta a un puntero que no puede modificar pero en cambio s si puede modificarse, el restrict nos indica que no hay solapamiento en la memoria con s.
        e)La diferencia entre hello2.i y hello3.i es que al no utilizar include no llamamos a todas las referencias de stdio.h, ya que declaramos printf en el archivo, ademas el hello3.c no tiene diferencia con el hello3.i si cambiamos algunas opciones al compilar en el preprocesador.
    2)Compilacion:
        c)Estan registrando el basepointer y el stackpointer para reservar espacio de invocacion, luego se llama a la funcion main, y luego hace nuevamente espacio para la variable i, se hace espacio para el llamado de funcion prontf, y luego se le asigna el valor 0 a eax para que sea el retorno de la funcion.

    3)Vinculacion:
        a)No se puede vincular ya que no esta declarada la funcion prontf y tampoco esta declarada la libreria stdio.h
        c)El programa ejecuto pero el resultado no es completamente el esperado ya que este cambia el valor constantemente, ya que esta mal hecho la pragmatica en la sentencia,
    4)Correcion de bug:
        a)Se puede solocionar de distintas formas como poniendo el 42 directo o poniendo la variable i
    5)Remocion de prototipo:
        b)Esto funciona ya que la funcion printf tiene una declaracion implicita con el compilador gcc,esto debido a que tiene una especie de exepcion para printf.
    6)Compilacion separada:Contratos y Modulos
        c)Lo que sucedera se compilara y linkear correctamente,aunque luego el ejecutable tendra un comportamiento indefinido
        d)iv) Las ventajas que trae son que al incluir los contratos tendra los prototipos, haciendo asi que se evitan los errores en el cliente haciendo asi que no haya comportamientos indefinidos.
    Extra)Las bibliotecas son un conjunto de entidades de objetos que pueden ser utilizadas sin que no tengamos que desarrollar,Estas se pueden distribuir de cierta manera compartiendo por ejemplo el archivo.o;No es portable cada biblioteca en el sentido de poder pasar el archivo.o, pero si es portable si se recompila en cada lugar que se desea portar osea pasando el .C, las desventajas que posee son que puede generar cierta dependencias a estas.