// libs
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// constants
#define BOOK_NUMBER_SIZE 4

// main
int main()
{
    // variables
    int N;
    char book[BOOK_NUMBER_SIZE];
    int comparison_flag;
    char* collection;
    
    // first read
    scanf("%d", &N);
    
    // loop
    do
    {
        // alloc dinamic continous memory
        collection = (char *) calloc(N*BOOK_NUMBER_SIZE,sizeof(char));

        // recover input
        for (int i=0; i<N; i++)
        {
            // recover book
            fgets(book, BOOK_NUMBER_SIZE, stdin);
            book[strcspn(book, "\n")] = '\0';
            
            // build collection
            for (int j=0; j<BOOK_NUMBER_SIZE; j++)
            {
                collection[BOOK_NUMBER_SIZE*i + j] = getchar();
            }
        }

        // sort collection
        for (int b=0; b<BOOK_NUMBER_SIZE*N; b+=BOOK_NUMBER_SIZE)
        {
            for (int s=b+BOOK_NUMBER_SIZE; s<BOOK_NUMBER_SIZE*N; s+=BOOK_NUMBER_SIZE)
            {
                // must rest flag for next book comparison
                comparison_flag = 0;
                
                // compare books
                for (int t=0; t<BOOK_NUMBER_SIZE; t++)
                {
                    if (collection[b+t] > collection[s+t])
                    {
                        comparison_flag = 1;
                        break;
                    }
                    else if (collection[b+t] < collection[s+t])
                    {
                        comparison_flag = 0;
                        break;
                    }
                    // else continue search
                }

                // take decision
                if(comparison_flag)
                {
                    // must swap them
                    for (int z=0; z<BOOK_NUMBER_SIZE; z++){
                        book[z] = collection[b+z];
                        collection[b+z] = collection[s+z];
                        collection[s+z] = book[z];
                    }
                }
            }
        }
        
        // show collection
        for (int k=0; k<N; k++)
        {
            for (int l=0; l<BOOK_NUMBER_SIZE; l++)
            {
                printf("%c",collection[BOOK_NUMBER_SIZE*k + l]);
            }
            printf("\n");
        }

        // free memory
        free(collection);

        // until EOF
    }while(scanf("%d", &N) != EOF);
    return 0;
}