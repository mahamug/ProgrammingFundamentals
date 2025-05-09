#include <stdio.h>
#include <string.h>
#include <ctype.h>  // for toupper()

int main() {
    char word[10];
    int count[26] = {0}; // to count frequency of A-Z 0 1 2 25
    int i, max = 0;//drizzling maheen

    printf("Enter a word (max 9 letters): ");
    scanf("%s", word);

    int len = strlen(word); // get length of the word

    // Count frequency using toupper
    for (i = 0; i < len; i++) {
        char ch = toupper(word[i]); // convert to uppercase

        if (ch >= 'A' && ch <= 'Z') {
            int index = ch - 'A';   // A=0, B=1, ..., Z=25 65
            count[index]++;

            if (count[index] > max)
                max = count[index]; // update max frequency
        }
    }

    // Print letter(s) with highest frequency
    printf("Highest Frequency Letter: ");
    for (i = 0; i < 26; i++) {
        if (count[i] == max) {
            printf("%c ", i + 'A'); // convert index to letter
        }
    }

    printf("\n");
    return 0;
}

