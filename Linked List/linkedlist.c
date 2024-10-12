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