#include <stdio.h>

int main() {
    char _c;
    int v_count = 0;

    FILE *input_file;
    input_file = fopen("vowel_input.txt", "r");



    while (fscanf(input_file, "%c", &_c) != EOF) {
        if (_c == 'a' || _c == 'e' || _c == 'i' || _c == 'o' || _c == 'u' ||
            _c == 'A' || _c == 'E' || _c == 'I' || _c == 'O' || _c == 'U') {
            v_count++;
        }

      
        printf("_caracter: %c, Vowel: %s\n", _c, (_c == 'a' || _c == 'e' || _c == 'i' || _c == 'o' || _c == 'u' ||
                                                  _c == 'A' || _c == 'E' || _c == 'I' || _c == 'O' || _c == 'U') ? "Yes" : "No");
    }

   
    printf("Number of vowels: %d\n", v_count);

  
    fclose(input_file);

    return 0;
}
