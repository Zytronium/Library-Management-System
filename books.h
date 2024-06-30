/* NULL_ISBN is used to define the ISBN of NULL_BOOK, the null terminator for book_t */
#ifndef NULL_ISBN
#define NULL_ISBN 0

#endif

/* INVALID_ISBN is used to define the ISBN of INVALID_BOOK, an alternative to NULL_BOOK that doesn't null-terminate an array of books. */
#ifndef INVALID_ISBN
#define INVALID_ISBN -1

#endif

/* NULL_BOOK is used as the null terminator for book_t */
#ifndef NULL_BOOK
#define NULL_BOOK ((book_t) { .name = "", .ISBN = 0, .author = "", .genre = "", .stock = 0 })

#endif

/*
 * INVALID_BOOK is an alternative to NULL_BOOK that doesn't null-terminate an
 * array of books. It indicates that a book is invalid and/or could not be found
 */
#ifndef INVALID_BOOK
#define INVALID_BOOK ((book_t) { .name = "", .ISBN = -1, .author = "", .genre = "", .stock = 0 })

#endif

#ifndef BOOKS_H
#define BOOKS_H

typedef struct book {
	char name[32];
	int ISBN;
	char author[25];
	char genre[25];
	int stock;
} book_t;

book_t get_book(int ISBN);

book_t *list_books_with_name(char *name);

book_t *list_books_by_author(char *author);

book_t *list_books_in_genre(char *genre);

book_t *find_books_from_info(char *name, char *author, char *genre);

void add_book(int ISBN);

void remove_book(int ISBN);

book_t books[] = {
		{.name = "name", .ISBN = 1, .author = "author", .genre = "genre", .stock = 12},
		{.name = "name2", .ISBN = 2, .author = "author", .genre = "genre", .stock = 17},
		{.name = "name03", .ISBN = 3, .author = "author2", .genre = "genre2", .stock = 14},
		NULL_BOOK
};

#endif
