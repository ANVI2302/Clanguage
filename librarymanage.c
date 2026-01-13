
#include <stdio.h>
#include <string.h>

#define MAX 100   // maximum number of books

struct Book {
    int id;               // Book ID (5-digit number)
    char name[50];        // Book Name (up to 50 characters)
    char publisher[15];   // Publisher Name (up to 15 characters)
    int edition;          // Edition (1–10)
};

int main() {
    struct Book books[MAX];
    int count = 0;  // number of books added
    int choice;

    do {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Search Book\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear input buffer

        switch (choice) {
            case 1: {
                if (count >= MAX) {
                    printf("Library is full! Cannot add more books.\n");
                } else {
                    struct Book b;

                    printf("\nEnter Book ID (5-digit number): ");
                    scanf("%d", &b.id);
                    getchar(); // clear newline

                    if (b.id < 10000 || b.id > 99999) {
                        printf("Invalid Book ID! Must be a 5-digit number.\n");
                        break;
                    }

                    printf("Enter Book Name: ");
                    scanf(" %[^\n]", b.name);

                    printf("Enter Publisher Name: ");
                    scanf(" %[^\n]", b.publisher);

                    printf("Enter Edition (1-10): ");
                    scanf("%d", &b.edition);

                    if (b.edition < 1 || b.edition > 10) {
                        printf("Invalid Edition! Must be between 1 and 10.\n");
                        break;
                    }

                    books[count] = b;
                    count++;

                    printf("\nBook added successfully!\n");
                }
                break;
            }

            case 2: {
                if (count == 0) {
                    printf("No books in the library yet.\n");
                } else {
                    int searchID, found = 0;
                    printf("\nEnter Book ID to search: ");
                    scanf("%d", &searchID);

                    for (int i = 0; i < count; i++) {
                        if (books[i].id == searchID) {
                            printf("\nBook Found!\n");
                            printf("Book ID: %d\n", books[i].id);
                            printf("Book Name: %s\n", books[i].name);
                            printf("Publisher: %s\n", books[i].publisher);
                            printf("Edition: %d\n", books[i].edition);
                            
                            
                            found = 1;
                            break;
                        }
                    }

                    if (!found)
                        printf(" Book not found in the library.\n");
                }
                break;
            }

            case 3:
                printf("Exiting program... Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }

    } while (choice != 3);

    return 0;
}
