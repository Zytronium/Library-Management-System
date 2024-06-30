#include "books.h"

#ifndef USERS_H
#define USERS_H

/* I don't remember what this is, so I'm leaving it here. */
struct Node {
	int data;
	struct Node *next;
};

struct user {
	char name[25];
	int DOB[3]; /* date of brith | { Month, Day, Year } */
	int userID;
	book_t checkedOutBooks[];
} user;

#endif
