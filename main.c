#include <stdio.h>
#include <string.h>

void printNotes(char notes[][150])
{
    for (int i = 0; i < sizeof(notes) / sizeof(notes[0]); i++)
    {
        if (notes[i])
        {
            printf("%s\n", notes[i]);
        }
    }
}

int main()
{
    printf("\n\nHello, this is your personal todo system.\n");
    printf("Instructions:\n");
    printf("1 - Add new note\n");
    printf("2 - Edit note\n");
    printf("3 - Delete note\n\n");

    char notes[][150] = {"test1", "test2"};

    int instruction;
    int value;

    printNotes(notes);

    printf("Instruction:\n- ");
    scanf("%d", &instruction);
    printf("Value:\n- ");
    scanf("%s", &value);

    if (instruction == 1)
    {
    }

    return 0;
}
