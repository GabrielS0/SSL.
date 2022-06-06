Version:
    gcc versión 11.3.1 20220421 (Red Hat 11.3.1-2) (GCC)

Pasos:
    1)Preprocesador:
        a)
        b)Hicimos el Hello.i, Dandonos cuenta de todas las declaraciones que son necesarias solamente para el preprocesador y como este varia de sistema en sistema.
        c)Escribimos el codigo de hello3.c
        d)La linea 1, es una declaracion de una funcion llamada printf que retorna un int,que espera al menos un argumento,tambien sabemos que s apunta a un puntero que no puede modificar pero en cambio s si puede modificarse.
        e)La diferencia entre hello2.i y hello3.i es que al no utilizar include no llamamos a todas las referencias de stdio.h, ya que declaramos printf en el archivo, ademas el hello3.c no tiene diferencia con el hello3.i si cambiamos algunas opciones al compilar en el preprocesador.
    2)Compilacion:
        c)Estan registrando el basepointer y el stackpointer para reservar espacio de invocacion, luego se llama a la funcion main, y luego hace nuevamente espacio para la variable i, se hace espacio para el llamado de funcion prontf, y luego se le asigna el valor 0 a eax para que sea el retorno de la funcion.

    3)Vinculacion:
        a)No se puede vincular ya que no esta declarada la funcion prontf y tampoco esta declarada la libreria stdio.h
        b)