/*
    test tokens
*/

int main(void) {
    // Declare variables
    int x = 10;
    float y = 5.5;
    double z = 3.14;


    // Check if x is greater than 0
    if (x > 0) {
        int fact = 1;
        do{
            fact = fact * x;
            x = x - 1;
        }while (x > 0) 
        
    } else {
        print(x); // Output if x <= 0
    }

    // Additional operations to include all signs
    int a = 10 + 5; // Addition
    int b = a - 3;  // Subtraction
    int c = b * 2;  // Multiplication
    float d = c / 4.0; // Division
    int e = (int)d % 3; // Modulus
    int f = e ^ 2; // Bitwise XOR
    int g = (f <= 10); // Less than or equal
    int h = (g != 0); // Not equal
    int i = (h >= 1); // Greater than or equal
    int j = (i > 0); // Greater than
    int k = (j == 1); // Equal
    int l = k; // Assignment

    // Array example
    int arr[5];
    arr[0] = arr[1] + arr[2]; // Array operations

    // Return statement
    return 0;
}


