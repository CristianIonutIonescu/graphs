#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<vector>

struct stack
{
	int info;
	struct stack *next;
};
struct stack *cap;

void push(int value)
{
	struct stack *temp;
	temp = (struct stack*)malloc(sizeof(struct stack));
	temp->info = value;

	if (cap == NULL)
	{
		cap = temp;
		cap->next = NULL;
	}
	else
	{
		temp->next = cap;
		cap = temp;
	}
}

int pop()
{
	int value;
	struct stack *temp;
	temp = cap;
	cap = cap->next;
	value = temp->info;
	free(temp);
	return value;
}
