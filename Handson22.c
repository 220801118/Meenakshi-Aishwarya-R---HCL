#include <stdio.h>
#include <string.h>

#define MAX_WORDS 20
#define MAX_LEN   20

struct Word {
    char word[MAX_LEN];
    int count;
};

void countFrequencies(char words[][MAX_LEN], int n, struct Word result[], int *uniqueCount) {
    *uniqueCount=0;

    for (int i=0; i<n; i++) {
        int found=0;

        for (int j=0; j<*uniqueCount; j++) {
            if (strcmp(result[j].word, words[i])==0) {
                result[j].count++;
                found=1;
                break;
            }
        }

        if (!found) {
            strcpy(result[*uniqueCount].word, words[i]);
            result[*uniqueCount].count=1;
            (*uniqueCount)++;
        }
    }
}

int main() {
    int n;
    char words[MAX_WORDS][MAX_LEN];
    struct Word result[MAX_WORDS];
    int uniqueCount;

    printf("Enter number of words: ");
    scanf("%d", &n);

    printf("Enter %d words:\n", n);
    for (int i=0; i<n; i++) {
        scanf("%s", words[i]);
    }

    countFrequencies(words, n, result, &uniqueCount);

    printf("\nWord Frequencies:\n");
    for (int i=0; i<uniqueCount; i++) {
        printf("%s : %d\n", result[i].word, result[i].count);
    }
    return 0;
}