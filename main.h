#ifndef main_h
#define main_h

struct Node
{
	int data;
	struct Node *next;
};

typedef struct book
{
	char name[32];
	int ISBN;
	char author[25];
	char genre[25];
	int stock;
} book;

struct user {
	char name[25];
	int DOB[3]; /* date of brith | { Month, Day, Year } */
	int userID;
	book checkedOutBooks[];
} user;

book get_book(int ISBN);
book *list_books_with_name(char *name);
book *list_books_by_author(char *author);
book *list_books_in_genre(char *genre);
book *find_books_from_info(char _, ...);
void add_book(int ISBN);
void remove_book(int ISBN);

#endif
