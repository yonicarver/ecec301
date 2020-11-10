#include <stdio.h>
#include <string.h>

#include "employee.h"


/*
unsigned int employee_get_num (struct employee* list)
{
    unsigned int i;

    for (i = 0; list[i].name[0]; i++);

    return i;
}
*/

void employee_print (struct employee* e)
{
    printf ("Name: %s\n", e->name);
    printf (" Age: %u\n", e->age);
    printf ("Wage: %u\n", e->wage);
}

void employee_print_all (struct employee* list) {
	// print all employee info
	unsigned int i, id;

	printf("--------------\n");
	for (i = 0, id = 0; i < NUM_ELEMENTS; i++)
		if (list[i].age) {
			printf("Employee #%u\n", id);
			employee_print(list + i);			// print data for each employee
			printf("--------------\n");
			id++;							// next person in list
		}
}

void employee_sort (struct employee* list) {
	// bubble sorting alrogithm
	unsigned int i, j;
	struct employee tmp;

	for (i = 0; i < (NUM_ELEMENTS - 1); i++)
		for (j = 0; j < (NUM_ELEMENTS - 1); j++)
			if (list[j].age > list[j+1].age) {		// if the current age entry is greater than the next one
				tmp = list[j];					// store it in tmp
				list[j] = list[j+1];			// swap current and next
				list[j+1] = tmp;				// assign temp to next entry
			}
}

int employee_add (struct employee* list) {
	// add employee to record

	char firstname[128], lastname[128];
	struct employee new;
	//unsigned int* age;						// debugging
	//unsigned int* wage;						// debugging
	unsigned int i;

	printf("First Name: ");						// prompt user
	scanf("%s", firstname);						// get user input
	printf("Last Name: ");						// prompt user
	scanf("%s", lastname);						// get user input
	strcat(strcat(firstname, " "), lastname);		// combine first and last name (with space)
	strcpy(new.name, firstname);					// store name as "name" member of struct
	//printf("%s\n", list->name);					// debugging

	printf("Age: ");							// prompt user
	scanf("%u", &new.age);						// get user input
	//list->age = *age;							// debugging: store user input "age" as "age" member of struct
	//printf("%u years old\n", age);				// debugging

	printf("Wage: ");							// prompt user
	scanf("%u", &new.wage);						// get user input
	//list->wage = wage;						// debugging: store user input "wage" as "wage" member of struct
	//printf("$%u\n", list->wage);				// debugging

	for (i = 0; i < NUM_ELEMENTS; i++)
		if (list[i].age == 0) {					// if there is no entry
			list[i] = new;						// make the that entry the new entry
			employee_sort(list);				// sort the list in age ascending order

			return 0;
		}
	return 1;
}

int employee_delete (struct employee* list) {
	unsigned int sel_id, id;
	unsigned int i;

	printf("Enter ID # to delete: ");
	scanf("%u", &sel_id);

	for (i = 0, id = 0; i < NUM_ELEMENTS; i++) {
		if (list[i].age) {
			if (id == sel_id) {
				memset(&list[i], 0, sizeof *list);	// set memory of selected employee to 0
				employee_sort(list);			// sort employees
				printf("** Employee #%u Deleted **\n", sel_id);

				return 0;
			}
			id++;
		}
	}
	printf("** Invalid Selection **\n");
	// return to menu
	return 1;

}
