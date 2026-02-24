#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Node structure
struct Node {
    char song[50];
    struct Node *next;
};

// Add a new song at the end
void addSong(struct Node **head, const char *name) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    strcpy(newNode->song, name);

    if (*head == NULL) {
        // First node: points to itself
        newNode->next = newNode;
        *head = newNode;
        return;
    }

    // Find last node (whose next is head)
    struct Node *temp = *head;
    while (temp->next != *head) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = *head;
}

// Remove a song by name
void removeSong(struct Node **head, const char *name) {
    if (*head == NULL) {
        printf("Playlist is empty.\n");
        return;
    }

    struct Node *curr = *head;
    struct Node *prev = NULL;

    // Case: only one node
    if (curr->next == curr && strcmp(curr->song, name) == 0) {
        free(curr);
        *head = NULL;
        printf("Removed song: %s\n", name);
        return;
    }

    // Search for the node to delete
    do {
        if (strcmp(curr->song, name) == 0)
            break;
        prev = curr;
        curr = curr->next;
    } while (curr != *head);

    // If not found
    if (strcmp(curr->song, name) != 0) {
        printf("Song not found: %s\n", name);
        return;
    }

    // If deleting head node
    if (curr == *head) {
        // Find last node
        struct Node *last = *head;
        while (last->next != *head) {
            last = last->next;
        }
        *head = curr->next;
        last->next = *head;
        free(curr);
    } else {
        prev->next = curr->next;
        free(curr);
    }

    printf("Removed song: %s\n", name);
}

// Traverse playlist for k iterations
void traverse(struct Node *head, int k) {
    if (head == NULL) {
        printf("Playlist is empty.\n");
        return;
    }

    struct Node *temp = head;
    printf("\nPlaying playlist for %d iterations:\n", k);

    int count = 0;
    while (count < k) {
        printf("Now playing: %s\n", temp->song);
        temp = temp->next;
        count++;
    }
}

int main() {
    struct Node *playlist = NULL;

    // Add at least 5 songs
    addSong(&playlist, "Song A");
    addSong(&playlist, "Song B");
    addSong(&playlist, "Song C");
    addSong(&playlist, "Song D");
    addSong(&playlist, "Song E");

    // Traverse for 8 iterations to show looping
    traverse(playlist, 8);

    // Remove a song
    removeSong(&playlist, "Song C");

    // Traverse again to show updated playlist
    traverse(playlist, 8);

    return 0;
}