#include "datatype.h"
//nguyen mau ham
void printBook(struct Book book[], int size);
int miniChoice(int mini);
int information(char info[]);
int length(char info[], int len);
int titleDuped(struct Book book[], int n, char title[]);
void saveBooks(struct Book book[], int *n);
void loadBooks(struct Book book[], int *n);
void addBook(struct Book book[], int *n);
void editBook(struct Book book[], int amount, int n);
void deleteBook(struct Book book[], int *n);
void sortBookDesc(struct Book book[], int n);
void sortBookAsc(struct Book book[], int n);
void searchBookName(struct Book book[], int *n);
