#include <stdio.h>
#include <stdlib.h>

struct node {
    char* name;
    int cost;
    int pageAmount;
    char* language;
    int weight;
    int yearOfDistribution;
    struct node* next;
};
struct node* head = NULL;

void printList() {
    struct node* p = head;
    while (p != NULL) {
        printf(p->name);
        printf(" -cost: %d - ", p->cost);
        printf("pages: %d - ", p->pageAmount);
        printf("language: %s ", p->language);
        printf("-weight: %d - ", p->weight);
        printf("year: %d\n", p->yearOfDistribution);
        p = p->next;
    }
}

void insertatbegin(char name[], int cost, int pageAmount, char language[], int weight, int yearOfDistribution) {
    struct node* lk = (struct node*)malloc(sizeof(struct node));

    lk->name = name;
    lk->cost = cost;
    lk->pageAmount = pageAmount;
    lk->language = language;
    lk->weight = weight;
    lk->yearOfDistribution = yearOfDistribution;
    lk->next = head;

    head = lk;
}

void insertatend(char name[], int cost, int pageAmount, char language[], int weight, int yearOfDistribution) {
    struct node* lk = (struct node*)malloc(sizeof(struct node));

    lk->name = name;
    lk->cost = cost;
    lk->pageAmount = pageAmount;
    lk->language = language;
    lk->weight = weight;
    lk->yearOfDistribution = yearOfDistribution;
    lk->next = NULL;

    struct node* linkedlist = head;

    while (linkedlist->next != NULL)
        linkedlist = linkedlist->next;

    linkedlist->next = lk;
}

int main() {
    insertatbegin("Harry Potter and the Philosopher's Stone", 380, 319, "Ukrainian", 100, 1997);
    insertatend("Harry Potter and the Chamber of Secrets", 380, 351, "Ukrainian", 110, 1998);
    insertatend("Harry Potter and the Prisoner of Azkaban", 380, 383, "Ukrainian", 120, 1999);
    insertatend("Harry Potter and the Goblet of Fire", 400, 670, "Ukrainian", 130, 2000);
    insertatend("Harry Potter and the Order of the Phoenix", 480, 815, "Ukrainian", 140, 2003);
    insertatend("Harry Potter and the Half-Blood Prince", 400, 576, "Ukrainian", 150, 2005);
    insertatend("Harry Potter and the Deathly Hallows", 400, 640, "Ukrainian", 160, 2007);
    printList();
    return 0;
}