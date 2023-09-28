#include <stdio.h>
#include "main.h"
unsigned int binary_to_uint(const char *b) {
if (b == NULL) {
return 0;
}
unsigned int result = 0;
int bit_index = 0;
while (b[bit_index] != '\0') {
if (b[bit_index] == '0' || b[bit_index] == '1') {
result = (result << 1) | (b[bit_index] - '0');
bit_index++;
} else {
return 0; // Invalid character found
}
}
return result;
}
int main() {
const char *binary_string = "1101010";
unsigned int result = binary_to_uint(binary_string);
printf("Binary to unsigned int: %u\n", result);
return 0;
}
