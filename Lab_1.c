#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct node_t 
{
    int val;
    struct node_t *next_ptr;
};
typedef struct node_t node;

/*These pointers will be used to search,add and delete nodes*/
node *current_ptr;
node *previous_ptr;

uint8_t found_flag;

int main ()
{
    /*Creating a node structure pointer to 4 elements in the linked list*/
    node *head_node_ptr = NULL; 
    node *second_node_ptr = NULL;
    node *third_node_ptr = NULL;
    node *new_node_ptr = NULL;

    /*Allocating memory in the heap for the nodes*/
    head_node_ptr = (node*)malloc(sizeof(node));
    second_node_ptr = (node*)malloc(sizeof(node));
    third_node_ptr = (node*)malloc(sizeof(node));

    /*Initializing the nodes*/
    head_node_ptr->val = 2;
    head_node_ptr->next_ptr=second_node_ptr;

    second_node_ptr->val = 3;
    second_node_ptr->next_ptr=third_node_ptr;

    third_node_ptr->val = 5;
    third_node_ptr->next_ptr=NULL;

    /*Inserting a new node into the list*/

    /*Allocating memory for the new node*/
    new_node_ptr = (node*)malloc(sizeof(node));
    new_node_ptr->val = 4;

    /*Initialize current and previous pointers 
    to use them in inserting the node in numerical order in the linked list*/
    current_ptr = head_node_ptr;
    previous_ptr = head_node_ptr;
    found_flag = 0;

    /*Loop to reach the last element in the list (whose next_ptr == NULL)*/
    /*if the current node > new node , this means that the new node should inserted before the current node*/
    /*if the current node isn't the head node , set the previous pointer next pointer to point to the new node */
    /*otherwise the new node will be the new head node*/
    /*since we found the place to put our node , we set the flag to one and break from the loop*/

    /*every iteration of the loop, we increment the value of both pointers */
    /*previous pointer is set to current pointer */
    /*and current pointer is set to next element*/
    while (previous_ptr->next_ptr != NULL)
    {
        if (current_ptr->val > new_node_ptr->val)
        {
            found_flag = 1;
            new_node_ptr->next_ptr = current_ptr;

            if (current_ptr != head_node_ptr)
            {
                previous_ptr->next_ptr = new_node_ptr;
            }
            else
            {
                head_node_ptr = new_node_ptr;
            }

            break;
        }

        previous_ptr = current_ptr;
        current_ptr = current_ptr->next_ptr;
    }
    
    /*if we didn't find a place for our node , that means it needs to be inserted at the end of the list*/
    if (!found_flag)
    {
        previous_ptr->next_ptr=new_node_ptr;
        new_node_ptr->next_ptr = NULL;

    }

    /*reset the flag*/
    found_flag = 0;

    /*deleting a node from the linked list*/

    /*initialize the pointers*/
    previous_ptr = head_node_ptr;
    current_ptr = head_node_ptr;

    /*Loop to reach the last element in the list (whose next_ptr == NULL)*/
    /*if the node we want to delete is the head node , we set the head node pointer to the next element (new head)*/
    /*else if it is the las element in the list , we set the previous node next pointer to NULL (new last element) */
    /*else we point set the next of the previous pointer to point to the next of the current pointer (skip over the current pointer)*/
    
    /*then delete the current node and deallocate the memory*/
    /*and increment both pointers like as before */
    while (previous_ptr->next_ptr != NULL)
    {
        if (current_ptr->val == 3)
        {
            if (current_ptr == head_node_ptr)
            {
                head_node_ptr = current_ptr->next_ptr;
            }
            else if (current_ptr->next_ptr == NULL)
            {
                previous_ptr->next_ptr = NULL;
            }
            else
            {
                previous_ptr->next_ptr = current_ptr->next_ptr;
            }

            free (current_ptr);
            break;

        }
    }
    
    previous_ptr = current_ptr;
    current_ptr = current_ptr->next_ptr;

}