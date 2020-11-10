#include <stdio.h>
#include <stdlib.h>


struct queue {
	unsigned int data;
	struct queue* next;
};

struct queue_head {
	struct queue *start;
	struct queue *end;
};

void queue_init (struct queue_head *head)
{
	head->start = head->end = NULL;
}

void queue_add_to_end (struct queue_head *head, struct queue *new_item)
{
	new_item->next = NULL;
	/* add new item to end of list */
	if (head->end) {
		head->end->next = new_item;
	} else {
		head->start = new_item;
	}

		head->end = new_item;

}

struct queue* queue_pop_head (struct queue_head *head)
{
	struct queue *item = NULL;


	if (head->start) {		// if the addr != NULL
		item = head->start;	// get addr of first item in list
		head->start = item->next;		// set head next addr to item's next addr
		if (item)
			item->next = NULL;		// set removed item next addr to NULL
	}
	return item;		// return begin addr of removed item
}


int main (int argc, char** argv)
{
	struct queue *head;
	struct queue *item;
	unsigned int i = 0;

	head = malloc(sizeof(struct queue));
	queue_init(head);

	for (i = 1; i <= 10; i += 1) {
		item = malloc(sizeof(struct queue));
		item->data = i;
		queue_add_to_end(head, item);
	}

	for (i = 0, item = queue_pop_head(head); item != NULL; item = queue_pop_head(head)) {
		printf("Item %u:\n", i++);
		printf("    Data: %u\n", item->data);
		free(item);
	}

	return 0;
}
