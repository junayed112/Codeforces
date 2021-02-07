#include <cstdio>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#define MAX_DFA_STATES 10
#define MAX_ALPHABET_SIZE 10
using namespace std;

int transitions[MAX_DFA_STATES][MAX_ALPHABET_SIZE];
bool finalStates[MAX_DFA_STATES];
char input_string[100000];

int main()  {
    int N, M, F, X, Y, A, state, symbol, i, j;
    char* p;

    ifstream fin("dfa.txt");
    fin >> N >> M >> F;
    for(i=0; i<F; i++)  {
        fin >> X;
        finalStates[X] = true;
    }
    memset(transitions, -1, MAX_DFA_STATES * MAX_ALPHABET_SIZE * sizeof(int));
    while(!fin.eof())   {
        fin >> X >> A >> Y;
        transitions[X][A] = Y;
    }
    fin.close();

    for(i=0; i<N; i++)
        for(j=1; j<=M; j++)
            if(transitions[i][j] < 0 || transitions[i][j] >= N) {
                printf("DFA not defined properly.\n");
                return -1;
            }

    printf("Enter a string ('.' to exit) : ");
    scanf("%[^\n]%*c", input_string);
    while(input_string[0] != '.')   {
        state = 0;
        p = strtok(input_string, " ");
        while(p)    {
            symbol = atoi(p);
            if(symbol <= 0 || symbol > M)   {
                printf("Invalid input symbol %d.\n", symbol);
                return -1;
            } else {
                state = transitions[state][symbol];
            }
            p = strtok(NULL, " ");
        }
        if(finalStates[state])
            printf("String accepted.\n");
        else
            printf("String rejected.\n");

        printf("Enter a string ('.' to exit) : ");
        scanf("%[^\n]%*c", input_string);
    }

    return 0;
}
