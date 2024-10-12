/**
 *  @file   linkedlist_template.h
 * 
 *  @brief  This file contains the definition of Linked List data structure
 * 
 *  @author Rico Monroy Misael
 * 
 *  @date   11/October/2024   
 */

#define TRUE 1  /**< Etiqueta tipo TRUE con valor 1*/
#define FALSE 0 /**< Etiqueta tipo FALSE con valor 0*/

/// @brief etiqueta para crear elemento de tipo booleano.
typedef unsigned char boolean;

/**
 *  @struct NODO
 *  @brief Estructura que servirá para contener valores propios de los elementos de la lista.
 * 
 *  La estrucrura NODO es el contenedor que contiene valores o templates que comparten todos los
 *  elementos de la lista: nombre, apellidoP, apellidoM, edad, teléfono, apuntador al siguiente nodo.
 */
typedef struct nodo {
    char *nombre;
    char *apellidoP;
    char *apellidoM;
    int edad;
    int telefono;
    struct nodo *next;
} NODO;

/// @brief Apuntador de tipo NODO* que servirá para referenciar a elementos tipo NODO de la lista.
typedef NODO* navigator;

/**
 *  @struct LISTA
 *  @brief Estructura que servirá para referenciar a todos los elementos
 *        de la lista.
 *  La estrucrura lista es el contenedor que contiene referencias a elementos
 *  los cuales indicarán la posición del principio, final y tamaño de la estructura de datos.
 */
typedef struct list {
    navigator head;     /**< Frente o inicio de la lista.*/
    navigator tail;     /**< Cola o final de la lista.*/
    int size;           /**< Tamaño o número de elementos de la lista.*/
}LISTA;

/**
 *  Función para inicializar una lista. Recibe una lista [LISTA] e inicializar
 *  todos sus valores y/o elementos en null para evitar estar refenrenciando a
 *  elementos basura antes de su uso.
 * 
 *  @param lista [LISTA *] (Referencia a la lista que se va a inicializar).
 *  @return void
 *  @warning Se debe crear una lista tipo [LISTA *] y el parámetro lista tiene la
 *  referencia a esta lista.
 */
void inicializarLista(LISTA *lista);

/**
 *  Función para eliminar completamente una lista. Recibe una lista [LISTA] y
 *  la libera completamente de la memoria. Una vez terminado restaura todos sus
 *  elementos para que se inicialicen en valores null o ceros.
 * 
 *  @param lista [LISTA *] (Referencia a la lista que se va a eliminar).
 *  @return void
 *  @warning Debe existir una lista tipo [LISTA] para que pueda ser borrada.
 */
void eliminarLista(LISTA *lista);

/**
 *  Función que retorna el último elemento de la lista. Recibe una lista [LISTA] y
 *  busca el último elemento.
 * 
 *  @param lista [LISTA *] (Referencia a la lista que se va a eliminar).
 *  @return nav [navigator] (Último elemento de la lista) en caso de que la lista se
 *  encuentre vacía, devolverá nulo.
 *  @warning Se debe crear una lista tipo [LISTA *] y el parámetro lista tiene la
 *  referencia a esta lista.
 */
navigator finalLista(LISTA *lista);

/**
 *  Función que retorna el primer elemento de la lista. Recibe una lista [LISTA] y
 *  busca el primer elemento.
 * 
 *  @param lista [LISTA *] (Referencia a la lista que se va a eliminar).
 *  @return nav [navigator] (Primer elemento de la lista) en caso de que la lista se
 *  encuentre vacía, devolvera nulo.
 *  @warning Se debe crear una lista tipo [LISTA *] y el parámetro lista tiene la
 *  referencia a esta lista.
 */
navigator inicioLista(LISTA *lista);

/**
 *  Función que retorna el siguiente elemento de la lista dado previamete un elemento o
 *  posición. Recibe una lista [LISTA] y un elemento [navigator] y devuelve el siguiente
 *  elemento.
 * 
 *  @param lista [LISTA *] (Referencia a la lista que se va a eliminar).
 *  @param posicion [navigator] (Posición o elemento inciial para buscar el siguiente elemento).
 *  @return siguienteItem [navigator] Siguiente elemento contiguo al elemento posición, en caso de que la lista se
 *  encuentre vacía, devolvera nulo.
 *  @warning Se debe crear una lista tipo [LISTA *] y el parámetro lista tiene la
 *  referencia a esta lista.
 */
navigator siguienteLista(LISTA *lista, navigator posicion);