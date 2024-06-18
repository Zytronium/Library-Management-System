#ifndef main_h
#define main_h

struct Node
{
	int data;
	struct Node *next;
};

struct user {
	char *name[25];
	int *DOB[3]; /* date of brith | { Month, Day, Year } */
	int userID;
	book[] checkedOutBooks;

} user;

typedef struct book
{
	char *name;
	int ISBN;
	char *author;
	char *genre;
	int stock;
} book;

book get_book(int ISBN);
book *list_books_with_name(char *name);
book *list_books_by_author(char *author);
book *list_books_in_genre(char *genre);
book *find_books_from_info(char _, ...);
void add_book(int ISBN);
void remove_book(int ISBN);

#endif
