#include "main.h"
#include <stdlib.h>

#ifndef NULL_BOOK
#define NULL_BOOK ((book_t) { .name = "", .ISBN = 0, .author = "", .genre = "", .stock = 0 })

#endif

book_t books[] = {
		{.name = "name", .ISBN = 1, .author = "author", .genre = "genre", .stock = 12},
		{.name = "name2", .ISBN = 2, .author = "author", .genre = "genre", .stock = 17},
		{.name = "name03", .ISBN = 3, .author = "author2", .genre = "genre2", .stock = 14},
		NULL_BOOK
};

/**
 * Adds a book to the database
 * @param ISBN ISBN numb of book to add
 */
void add_book(int ISBN)
{

}

/**
 * Removes a book from the database
 * @param ISBN ISBN numb of book to remove
 */
void remove_book(int ISBN)
{

}

/**
 * Gets the book with the corresponding ISBN number.
 * @param ISBN The book's ISBN to search for
 * @return The book with the given ISBN number, or NULL if not found.
 */
book_t get_book(int ISBN)
{

}

/**
 * Lists all the books with an exactly matching name.
 * This is not a general search! The given name must EXACTLY match
 * the books FULL name.
 * @param name The book's exact name to search for
 * @return an array of all the books whose name exactly matches the given name.
 */
book_t *list_books_with_name(char *name)
{

}

/**
 * Lists all books by the given author. Spelling must match exactly.
 * @param author the book's author's name to search.
 * @return an array of all the books from the given author
 */
book_t *list_books_by_author(char *author)
{

}

/**
 * List all books in the given genre. Spelling must match exactly.
 * @param genre genre to list any/all books in.
 * @return an array of all books in the given genre, if any.
 */
book_t *list_books_in_genre(char *genre)
{

}

/**
 * Search for books matching the given info
 *
 * @param name The book's exact name to search for.
 * This should be NULL if you don't want to search with this.
 * @param author The book's author's name to search.
 * This should be NULL if you don't want to search with this.
 * @param genre The genre to search in.
 * This should be NULL if you don't want to search with this.
 *
 * @return an array of books that exactly match the non-null given info.
 */
book_t *find_books_from_info(char *name, char *author, char *genre)
{
	int name_matches[] = {};
	int author_matches[] = {};
	int genre_matches[] = {};
	int matches[] = {}; /* ISBN of all matching books. 0 is null terminator */
	int i = 0, name_i = 0, author_i = 0, genre_i = 0, matches_i = 0, name_len = 0, author_len = 0, genre_len = 0;

	if (name != NULL)
	{
		for (name_len = 0; list_books_with_name(name)[name_len].ISBN !=
						   NULL_BOOK.ISBN; name_len++)
			name_matches[name_len] = list_books_with_name(name)[name_len].ISBN;
	}
	name_matches[name_len] = NULL_BOOK.ISBN;

	if (author != NULL)
	{
		for (author_len = 0; list_books_by_author(author)[author_len].ISBN !=
							 NULL_BOOK.ISBN; author_len++)
			author_matches[author_len] = list_books_by_author(
					author)[author_len].ISBN;
	}
	author_matches[author_len] = NULL_BOOK.ISBN;

	if (genre != NULL)
	{
		for (genre_len = 0; list_books_in_genre(genre)[genre_len].ISBN !=
							NULL_BOOK.ISBN; genre_len++)
			genre_matches[genre_len] = list_books_in_genre(
					genre)[genre_len].ISBN;
	}
	genre_matches[genre_len] = NULL_BOOK.ISBN;

	if (name != NULL && author != NULL && genre != NULL)
	{
		int matches_found[] = {};

		while (name_matches[name_i])
		{
			if (name_matches[name_i] == author_matches[name_i] &&
				name_i <= author_len)
			{
				matches_found[i] = name_matches[name_i];
				i++;
			}
			name_i++;
		}
		i = 0;

		while (matches_found[matches_i])
		{
			if (matches_found[matches_i] == genre_matches[matches_i] &&
				matches_i <= genre_len)
			{
				matches[i] = matches_found[matches_i];
				i++;
			}
			matches_i++;
		}
		matches[matches_i] = NULL_BOOK.ISBN;
	}

	/*
	 * NOTE: This function is a WIP. It does not yet return anything,
	 * it only searches if no parameters are NULL, and the logic may
	 * need to be reworked a little. Additionally, it relies on functions
	 * that are not yet implemented.
	 */

}
