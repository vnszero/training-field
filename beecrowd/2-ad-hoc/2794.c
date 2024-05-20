#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef struct ChainLink{
    int distance;
    int tonality;
    struct ChainLink *next;
} ChainLink;

typedef struct Chain {
    int size;
    ChainLink *begin;
    ChainLink *end;
} Chain;

int emptyChain(Chain *chain_list);
void showChain(Chain *chain_list);
void insertInOrderOfDistance(Chain *chain_list, ChainLink *incoming);
int tonalityRuler(Chain *chain_list);

int main()
{
    int N, D, T;
    while(scanf("%d", &N) != EOF)
    {
        Chain *mountains = (Chain*) malloc(sizeof(Chain));
        for (int i = 0; i < N; i++)
        {
            scanf("%d %d", &D, &T);
            ChainLink *incoming = (ChainLink*) malloc(sizeof(ChainLink));
            incoming->distance = D;
            incoming->tonality = T;
            insertInOrderOfDistance(mountains, incoming);
        }
        // showChain(mountains);
        if(tonalityRuler(mountains))
        {
            printf("S\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}

int emptyChain(Chain *chain_list)
{
    return (chain_list->begin == NULL && chain_list->end == NULL) ? TRUE : FALSE;
}

void showChain(Chain *chain_list)
{
    ChainLink *current = chain_list->begin;
    if(!emptyChain(chain_list))
    {
        while(current != chain_list->end)
        {
            printf("%d -> %d\n", current->distance, current->tonality);
            current = current->next;
        }
        printf("%d -> %d\n", current->distance, current->tonality);
    }
}

void insertInOrderOfDistance(Chain *chain_list, ChainLink *incoming)
{   
    chain_list->size += 1;

    if (emptyChain(chain_list))
    {
        chain_list->begin = incoming;
        chain_list->end = incoming;
    }
    else if (incoming->distance < chain_list->begin->distance)
    {
        incoming->next = chain_list->begin;
        chain_list->begin = incoming;
    }
    else
    {
        ChainLink *current = chain_list->begin;
        ChainLink *previous = chain_list->begin;

        while (current != NULL && incoming->distance > current->distance)
        {
            previous = current;
            current = current->next;
        }

        previous->next = incoming;
        incoming->next = current;

        if (current == NULL)
        {
            chain_list->end = incoming;
        }
    }
}

int tonalityRuler(Chain *chain_list)
{
    ChainLink *current = chain_list->begin;
    ChainLink *next = chain_list->begin->next;
    if(!emptyChain(chain_list))
    {
        while(next != chain_list->end && next != NULL)
        {
            if (current->tonality <= next->tonality)
            {
                return FALSE;
            }
            current = current->next;
            next = next->next;
        }
        if (next != NULL)
        {
            if (current->tonality <= next->tonality)
            {
                return FALSE;
            }
        }
    }
    return TRUE; 
}