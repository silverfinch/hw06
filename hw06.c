include <stdio.h>
#include <string.h>

void caesar (int key, char message[]);

void caesar (int key, char message[])
{
    int length = strlen(message);
    char translated[length];
    for (int t=0; t < length; t++)
    {
        char c = message[t];
        if ( (c >= 'A' && c <= 'Z') )//if a capital letter
        {
            if (c + key > 'Z')//if the key moves the letter beyond Z then shift it back into the capital alphabet.
                translated[t] = c + key - 26;
            else
                translated[t] = c + key;
        }
        else if ( (c >= 'a' && c <= 'z') )//same case as with capital letters
        {
            if (c + key > 'z')
                translated[t] = c + key - 26;
            else
                translated[t] = c + key;
        }
        else
        {
                translated[t] = c;
        }
    }
    for (int t=0; t < length; t++)
    {
        printf("%c", translated[t]);//prints each letter as it is computed
    }
    printf("\n");
}

int main()
{
    for (int key = 1; key <= 26; key++)//cycles through all key values
    {
        caesar(key, "Sp S rkn kcuon zoyzvo grkd droi gkxdon, droi gyevn rkfo cksn pkcdob rybcoc.");
    }
}

