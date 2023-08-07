#include <stdio.h>

#define MAX_ARRAY_SIZE 128

// This function takes an array of integers, the size of the array, and a string as input.
// The function then iterates through the string, and increments the corresponding element in the array if the character at the current index is not a quotation mark.
void fill_array(int* array, int size_array, char* str) {
  int index = 0;
  while(str[index] != '\0') {
    // Check if the current character is not a quotation mark.
    if (str[index] != '"') {
      // Increment the corresponding element in the array.
      array[str[index]] += 1;
    }
    index += 1;
  }
}

// This function takes an array of integers and the size of the array as input.
// The function then iterates through the array, and prints the value of each element if the value is greater than 0.
void print_array(int* array, int size_array) {
  int index = 0;
  while(index < size_array) {
    // Check if the current element in the array is greater than 0.
    if (array[index] > 0) {
      // Print the value of the current element in the array.
      printf("%c:%d\n", index, array[index]);
    }
    index += 1;
  }
}

// This is the main function of the program.
// The function takes the number of arguments as input, and then iterates through the arguments.
// For each argument, the function calls the `fill_array` function to fill the array, and then calls the `print_array` function to print the array.
int main(int ac, char **av) {
  int index = 1;
  int array[MAX_ARRAY_SIZE] = {0};
  while(index < ac) {
    // Fill the array with the characters in the current argument.
    fill_array(&array[0], MAX_ARRAY_SIZE, av[index]);
    index += 1;
  }
  // Print the array.
  print_array(&array[0], MAX_ARRAY_SIZE);
  return 0;
}