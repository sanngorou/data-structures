/**
 *  @file   linkedlist.c
 * 
 *  @brief  This file contains all the method-construc about the template linkedlist_template.h
 * 
 *  @author Rico Monroy Misael
 * 
 *  @date   11/October/2024   
 */

#include <stdio.h>
#include <stdlib.h>
#include "linkedlist_template.h"

void inicializarLista(LISTA *lista){
    
    // Dejar todos sus elementos en null o cero para evitar que estén apuntando a elementos basura.
    lista->head = NULL;
    lista->tail = NULL;
    lista->size = 0;

    return;
};

void eliminarLista(LISTA *lista){

    // Se crea un nodo navegador que recorrerá toda la lista.
    navigator aux1;

    // Recorrer uno a uno los elementos de la lista mientras se van eliminando.
    while(lista->head != NULL){

        // Guardar la referencia al frente de la lista.
        aux1 = lista->head;

        // Cambiar el frente de la lista para avanzar a la siguiente posición.
        lista->head = lista->head->next;

        // Liberar o eliminar el antigüo frente de la lista.
        free(aux1);
    }

    // Ya que se borraron todos los elementos, solo queda reestablecer valores de la lista.
    inicializarLista(&lista);

    return;
};

navigator finalLista(LISTA *lista){

    // Validar si la lista cuenta con al menos un elemento de lo contrario, devolver NULL
    if(lista->size > 0){
        return lista->tail;
    }
    else{
        return NULL;
    }
};

navigator inicioLista(LISTA *lista){

    // Valida si la lista cuenta con al menos un elemento de lo contrario, devolver NULL
    if(lista->size > 0){
        return lista->head;
    }
    else{
        return NULL;
    }
};

navigator siguienteLista(LISTA *lista, navigator posicion){

    // Validar si la lista cuenta con al menos dos elementos, ya que si está vacía o solo tiene
    // un solo elemento, se devolverá NULL como sigiuente elemento
    if(lista->size >= 2){
        return posicion->next;
    }
    else{
        return NULL;
    }
};

navigator posicionLista(LISTA *lista, int index){

    navigator findedItem = NULL;

    // Validar que el número index se encuentre o sea un número menor al tamaño de la lista.
    if(index>0 && index<=lista->size){

        findedItem = lista->head;
        int iterator = 1;
        while(iterator < index){
            findedItem = findedItem->next;
        }

        return findedItem;
    }
    return findedItem;
};

int tamanioLista(LISTA *lista){

    return lista->size;
};

boolean vacioLista(LISTA *lista){

    // Retorna TRUE si la lista está vacía, si tiene al menos un elemento entonces retorna FALSE
    if(lista->size = 0){
        return TRUE;
    }
    else{
        return FALSE;
    }
};