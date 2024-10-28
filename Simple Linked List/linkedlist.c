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
    inicializarLista(lista);

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
    if(lista->size == 0){
        return TRUE;
    }
    else{
        return FALSE;
    }
};

void insertarFinal(LISTA *lista, NODO nuevoItem){

    navigator aux1, aux2;

    aux1 = malloc(sizeof(NODO));

    // Validar que se haya podido crear un espacio de memoria válido.
    if(aux1 == NULL){
        printf("Error al crear espacio de memoria para insertar un nuevo elemento en la lista %s", VAR_NAME(*lista));
        exit(EXIT_FAILURE);
    }else{

        *aux1 = nuevoItem;

        // Validar si la lista está vacía, si es así entonces se inserta como primer elemento.
        if(lista->head == NULL && lista->tail == NULL && lista->size == 0){
            
            aux1->next = NULL;
            lista->head = aux1;
            lista->tail = lista->head;
        }
        else{

            *aux1 = nuevoItem;
            aux1->next = lista->tail->next;
            lista->tail->next = aux1;
            lista->tail = aux1;
        }

        // Indiferentemente si la lista estaba vacía o no, se aumenta el tamaño de la lista después de insertar.
        (lista->size)++;

        return;
    }
};

void mostrarLista(LISTA *lista){
    
    navigator aux1;
    aux1 = lista->head;

    printf("\n\t[ ");
    while(aux1){
        printf("%d ", aux1->ID);
        if(aux1->next != NULL){
            printf("- ");
        }
        else{
            printf("]\n");
        }
        aux1 = aux1->next;
    }
    return;
};

void showLinks(LISTA *lista){

    navigator aux1;
    aux1 = lista->head;
    while(aux1 != NULL){
        printf("NODO=%p  -  next=%p\n", aux1, aux1->next);
        aux1 = aux1->next;
    }
};