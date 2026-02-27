#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Function Declarations */
void reverseString(char str[]);
void concatenateString(char str[]);
void checkPalindrome(char str[]);
void copyString(char str[]);
void stringLength(char str[]);
void charFrequency(char str[]);
void countVowelsConsonants(char str[]);
void countSpacesDigits(char str[]);

int main() {
    char str[100];
    int choice;
    char cont;

    do {
        /* Taking string input from user */
        printf("\nEnter a string: ");
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';   // Remove newline character

        /* Menu */
        printf("\n------ STRING OPERATIONS MENU ------\n");
        printf("1. Reverse a string\n");
        printf("2. Concatenate strings\n");
        printf("3. Check Palindrome\n");
        printf("4. Copy a string\n");
        printf("5. Length of the string\n");
        printf("6. Frequency of a character\n");
        printf("7. Count vowels and consonants\n");
        printf("8. Count blank spaces and digits\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear buffer

        switch (choice) {
            case 1:
                reverseString(str);
                break;
            case 2:
                concatenateString(str);
                break;
            case 3:
                checkPalindrome(str);
                break;
            case 4:
                copyString(str);
                break;
            case 5:
                stringLength(str);
                break;
            case 6:
                charFrequency(str);
                break;
            case 7:
                countVowelsConsonants(str);
                break;
            case 8:
                countSpacesDigits(str);
                break;
            default:
                printf("\nInvalid choice! No operation performed.\n");
        }

        /* Ask user to continue */
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &cont);
        getchar();

    } while (cont == 'y' || cont == 'Y');

    printf("\nThank you for using the String Application!\n");
    return 0;
}

/* Function Definitions */

void reverseString(char str[]) {
    int i, len = strlen(str);
    printf("\nReversed String: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

void concatenateString(char str[]) {
    char str2[100];
    printf("\nEnter another string to concatenate: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    strcat(str, str2);
    printf("Concatenated String: %s\n", str);
}

void checkPalindrome(char str[]) {
    int i, len = strlen(str);
    int flag = 1;

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("\nThe string is a Palindrome.\n");
    else
        printf("\nThe string is NOT a Palindrome.\n");
}

void copyString(char str[]) {
    char copy[100];
    strcpy(copy, str);
    printf("\nCopied String: %s\n", copy);
}

void stringLength(char str[]) {
    printf("\nLength of the string: %lu\n", strlen(str));
}

void charFrequency(char str[]) {
    char ch;
    int count = 0;

    printf("\nEnter character to find frequency: ");
    scanf(" %c", &ch);
    
	int i;
    for (i = 0; str[i] != '\0'; i++) 
	{
        if (str[i] == ch)
            count++;
    }

    printf("Frequency of '%c': %d\n", ch, count);
}

void countVowelsConsonants(char str[]) {
    int vowels = 0, consonants = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            char ch = tolower(str[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("\nVowels: %d\nConsonants: %d\n", vowels, consonants);
}

void countSpacesDigits(char str[]) {
    int spaces = 0, digits = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i]))
            spaces++;
        else if (isdigit(str[i]))
            digits++;
    }

    printf("\nBlank Spaces: %d\nDigits: %d\n", spaces, digits);
}

