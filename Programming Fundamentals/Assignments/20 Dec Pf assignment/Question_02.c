#include <stdio.h>
#include <conio.h>
#include <string.h>
void func_encrypt(char array[], int key)
{
    int i;
    for (i = 0; array[i] != '\0'; i++)
    {if (array[i] >= 'A' && array[i] <= 'Z'){
            array[i] += 32;
        }
        else if (array[i] >= 'a' && array[i] <= 'z'){
            array[i] -= 32;
        }
    }
    for (i = 0; array[i] != '\0'; i++){
        if (array[i] >= 'a' && array[i] <= 'z'){
            array[i] += key;
            if (array[i] > 'z'){
                array[i] = array[i] - 'z' + 'a' - 1;
            }
        }
        if (array[i] >= 'A' && array[i] <= 'Z'){
            array[i] += key;
            if (array[i] > 'Z'){
                array[i] = array[i] - 'Z' + 'A' - 1;
            }
        }
    }
    puts(array);
}
void func_decrypt(char array[], int key)
{   int i;
    for (i = 0; array[i] != '\0'; i++){
        if (array[i] >= 'a' && array[i] <= 'z'){
            array[i] -= key;
            if (array[i] < 'a'){
                array[i] = array[i] + 'z' - 'a' + 1;
            }
        }
        if (array[i] >= 'A' && array[i] <= 'Z'){
            array[i] -= key;
            if (array[i] < 'A'){
                array[i] = array[i] + 'Z' - 'A' + 1;
            }
        }
    }
    for (i = 0; array[i] != '\0'; i++){
        if (array[i] >= 'A' && array[i] <= 'Z'){
            array[i] += 32;
        }
        else if (array[i] >= 'a' && array[i] <= 'z'){
            array[i] -= 32;
        }
    }
    puts(array);
}
int main()
{
    int i, key;
    char array[1000];
    printf("Enter the string you want to encrypt\n");
    fflush(stdin);
    gets(array);
    printf("\nEnter the key\n");
    scanf("%d", &key);
    printf("\nAfter Encryption the array becomes:\n");
    func_encrypt(array, key);
    printf("\nAfter decryption the array becomes:\n");
    func_decrypt(array, key);
}