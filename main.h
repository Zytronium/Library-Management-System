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
} book_t;

struct user {
	char name[25];
	int DOB[3]; /* date of brith | { Month, Day, Year } */
	int userID;
	book_t checkedOutBooks[];
} user;

book_t get_book(int ISBN);
book_t *list_books_with_name(char *name);
book_t *list_books_by_author(char *author);
book_t *list_books_in_genre(char *genre);
book_t *find_books_from_info(char *name, char *author, char *genre);
void add_book(int ISBN);
void remove_book(int ISBN);

#endif
