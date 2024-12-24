#include <stdio.h>
#include <string.h>

int countOccurrences(const char* str, const char* substr) {
    int count = 0;
    const char* temp = str;

    
    while ((temp = strstr(temp, substr)) != NULL) {
        count++;             
        temp += strlen(substr);
    }

    return count;
}

int main() {
    char str[256], substr[256];

    
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    
    printf("Enter a substring: ");
    fgets(substr, sizeof(substr), stdin);
    substr[strcspn(substr, "\n")] = '\0'; 

    
    int occurrences = countOccurrences(str, substr);

    printf("Number of occurrences of a substring \"%s\" in the string \"%s\": %d\n", substr, str, occurrences);

    return 0;
}

