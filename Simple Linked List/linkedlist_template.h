/**
 *  @file   linkedlist_template.h
 * 
 *  @brief  This file contains the definition of Linked List data structure
 * 
 *  @author Rico Monroy Misael
 * 
 *  @date   11/October/2024   
 */
#ifndef __TADLista_H
#define __TADLista_H
#define TRUE 1  /** Etiqueta tipo TRUE con valor 1*/
#define FALSE 0 /** Etiqueta tipo FALSE con valor 0*/
#define VAR_NAME(var) #var

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
    //char *nombre;
    //char *apellidoP;
    //char *apellidoM;
    //int edad;
    //int telefono;
    int ID;
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

/**
 *  Función que retorna el elemento ubicado en la posición o índice según el parámetro. Recibe una lista [LISTA]
 *  y un index [int]; devuelve el elemento en la posición del entero.
 * 
 *  @param lista [LISTA *] (Referencia a la lista que se va a eliminar).
 *  @param index [int] Número entero que servirá de indice para retornar ese elemento de la lista.
 *  @return findedItem [navigator] Elemento ubicado en la posición index de la lista.
 *  @warning Se debe crear una lista tipo [LISTA *] y el parámetro lista tiene la
 *  referencia a esta lista.
 */
navigator posicionLista(LISTA *lista, int index);

/**
 *  Función que retorna el tamaño de la lita. Recibe una lista [LISTA] y retorna el número de elementos
 *  que contiene la lista.
 * 
 *  @param lista [LISTA *] (Referencia a la lista que se va a eliminar).
 *  @return tamanio [int] Número de elementos que contiene la lista.
 *  @warning Se debe crear una lista tipo [LISTA *] y el parámetro lista tiene la
 *  referencia a esta lista.
 */
int tamanioLista(LISTA *lista);

/**
 *  Función que retorna TRUE (1) en caso de que la lista no tenga ningún elemento, en caso
 *  contrario retorna FALSE (0).
 * 
 *  @param lista [LISTA *] (Referencia a la lista que se va a eliminar).
 *  @return flag [boolean] Retorna TRUE si la lista está vacía, de cualquier otra manera retorna FALSE.
 *  @warning Se debe crear una lista tipo [LISTA *] y el parámetro lista tiene la
 *  referencia a esta lista.
 */
boolean vacioLista(LISTA *lista);

/**
 *  Función que inserta un elemento a la lista en la última posición, Recibe una lista [LISTA] y un
 *  elemento (NODO), recorre todos los elementos de la lista e inserta el nuevo elemento en
 *  la última posición.
 * 
 *  @param lista [LISTA *] (Referencia a la lista que se le va a insertar un elemento).
 *  @param nuevoIteam [NODO] Elemento que se va a insertar a la lista.
 *  @return void
 *  @warning Se debe crear una lista tipo [LISTA *] y el parámetro lista tiene la
 *  referencia a esta lista.
 */
void insertarFinal(LISTA *lista, NODO nuevoItem);

/**
 *  Función que inserta un elemento a la lista al inicio, Recibe una lista [LISTA] y un
 *  elemento (NODO) e inserta un elemento al inicio, recorriendo todos los elementos existentes una posición.
 * 
 *  @param lista [LISTA *] (Referencia a la lista que se le va a insertar un elemento).
 *  @param nuevoIteam [NODO] Elemento que se va a insertar a la lista.
 *  @return void
 *  @warning Se debe crear una lista tipo [LISTA *] y el parámetro lista tiene la
 *  referencia a esta lista.
 */
void insertarIncio(LISTA *lista, NODO nuevoItem);

/**
 *  Función que imprime en consola todos los elementos de la lista. Recibe una lista [LISTA], recorre todos
 *  los elementos de la lista e imprime en consola cada elemento uno a uno.
 * 
 *  @param lista [LISTA *] (Referencia a la lista que se va a imprimir).
 *  @return void
 *  @warning Se debe crear una lista tipo [LISTA *] y el parámetro lista tiene la
 *  referencia a esta lista.
 */
void mostrarLista(LISTA *lista);

/**
 *  Función que imprime en consola las direcciones de memoria involucradas en la lista. Recibe una lista [LISTA], recorre
 *  todos los elementos de la lista e imprime la dirección de la memoria del nodo y el nodo que tiene como siguiente.
 * 
 *  @param lista [LISTA *] (Referencia a la lista que se va a imprimir).
 *  @return void
 *  @warning Se debe crear una lista tipo [LISTA *] y el parámetro lista tiene la
 *  referencia a esta lista.
 */
void showLinks(LISTA *lista);

#endif      // __TADLista_H