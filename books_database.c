#include "main.h"

book[] books = { book("name", 1, "author", "genre"), book("name2", 2, "author", "genre"), book("name03", 3, "author2", "genre2")};

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
 * @param name The book's ISBN to search for
 * @return The book with the given ISBN number, or NULL if not found.
 */
book get_book(int ISBN)
{

}

/**
 * Lists all the books with an exactly matching name.
 * This is not a general search! The given name must EXACTLY match
 * the books FULL name.
 * @param name The book's exact name to search for
 * @return an array of all the books whose name exactly matches the given name.
 */
book *list_books_with_name(char *name)
{

}

/**
 * Lists all books by the given author. Spelling must match exactly.
 * @param author the book's author's name to search.
 * @return an array of all the books from the given author
 */
book *list_books_by_author(char *author)
{

}

/**
 * List all books in the given genre. Spelling must match exactly.
 * @param genre genre to list any/all books in.
 * @return an array of all books in the given genre, if any.
 */
book *list_books_in_genre(char *genre)
{

}

/**
 * Search for books matching the given info
 * @param _ don't know yet
 * @param ... info to search for, up to 3 arguments
 * (name, author, genre) Doesn't include ISBN because
 * if you know that, you can already find the book.
 * @return an array of books that match the given info.
 */
book *find_books_from_info(char _, ...)
{

}