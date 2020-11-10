#include <stdio.h>
#include <string.h>
#include "employee.h"

#define OPTION_ADD  1
#define OPTION_DEL  2
#define OPTION_LIST 3
#define OPTION_QUIT 4


unsigned int print_menu ()
{
    unsigned int action;

    printf("       -= MENU =-\n");
    printf("[1] Add New Employee\n");
    printf("[2] Delete an Employee\n");
    printf("[3] List All by Age (Ascending)\n");
    printf("[4] Quit\n");
    printf("------------------------\n");
    printf("Selection: ");

    scanf("%u", &action);

    return action;
}


int main (int argc, char** argv)
{
    struct employee list[NUM_ELEMENTS];

    unsigned int running = 1;

    /* Set all bits in the employee array to zero */
    memset (list, 0, NUM_ELEMENTS*sizeof(struct employee));

    while (running) {
        switch (print_menu()) {
            case OPTION_ADD:
                employee_add(list);
                break;
            case OPTION_DEL:
                employee_delete(list);
                break;
            case OPTION_LIST:
                employee_print_all(list);
                break;
            case OPTION_QUIT:
                running = 0;
                break;
        };

    }

    return 0;
}
