#ifndef SORT_H
#define SORT_H

/* Headers */

#include <stdio.h>
#include <stdlib.h>

/* Structs */

/**
  *struct listint_s - Doubly linked list node
  *
  * @n: Integer stored in the node
  * @prev: Pointer to the previous element of the list
  * @next: Pointer to the next element of the list
  */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Prototypes */

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
int lomuto_sort(int *array, int low_point, int high_point, size_t size);
void partition(int *array, int low_point, int high_point, size_t size);
void swap_func(int *array, int number1, int number2, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void swap_down(listint_t **list, listint_t *search);
void swap_up(listint_t **list, listint_t *search);

#endif
