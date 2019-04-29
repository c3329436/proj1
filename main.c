#include <stdio.h>

void CaesarEncrypt(char *message, int key);          // Function prototype for operation 1. This must be declared before main to then be used in the main code.
void CaesarDecrypt(char *message, int key);          // Function prototype for operation 2.
void SubEncrypt(char *message, char *encryptionKey); // Function prototype for operation 3.
void SubDecrypt(char *message, char *encryptionKey); // Function prototype for operation 4.


int main()
{
    char message[100];       // Array of type char to store ciphertext/plaintext message. 
    int key=0;               // Declare a variable of type int to store key rotation number for operation 1 and operation 2.
    int operation;           // Declare a variable of type int to allow user to choose what operation to complete. 
    char encryptionKey[27];  // Array of type char to store encryption key for operation 3 and operation 4. 
    printf("Enter text to be encrypted or decrypted: \n"); 
    scanf("%[^\n]", message);// Scans input plaintext or ciphertext. Ignores spaces and will read all text until end of line.

    printf("Select operation: \n"); // Allows user to select which operation to execute. 
    printf("1. Encryption of a message with a rotation cipher given the message text and rotation amount. \n");        // Option 1 description. Note that detailed descriptions ensures smooth running of program.
    printf("2. Decryption of a message encrypted with a rotation cipher given cipher text and rotation amount. \n");   // Option 2 description.
    printf("3. Encryption of a message with a substitution cipher given message text and alphabet substitution. \n");  // Option 3 description.
    printf("4. Decryption of a message encrypted with a substitution cipher given cipher text and substitutions. \n"); // Option 4 description.
    scanf("%d", &operation);        // Reads user input to indicate which option shall be completed. 
    printf("Read %d\n", operation); // Informs user via stdio standard out of operation they have selected. 

    switch (operation)              // Switch (operation) takes user input from scanf statement above and begins to execute a function/operation. 
    {
    case 1: 
        CaesarEncrypt(message, key);// Function for option 1. This executes the function body found below main. 
    break;                          // Once function has been executed, break will exit the switch statement preventing the other functions from being executed.
    
    case 2: 
        CaesarDecrypt(message, key); // Function for option 2. This executes the function body found below main. 
    break;                           // Once function has been executed, break will exit the switch statement.
    
    case 3:
        SubEncrypt(message, encryptionKey); // Function for option 3. This executes the function body found below main. 
    break;                                  // Once function has been executed, break will exit the switch statement.
    
    case 4: 
        SubDecrypt(message, encryptionKey); // Function for option 4. This executes the function body found below main. 
    break;                                  // Once function has been executed, break will exit the switch statement. This prevents other functions from being executed.
    
    default: // This option is only present if user selects a number outside the range of 1-5. If this occurs, default (operation) is executed. 
        printf("An error has occurred. Please check you have entered an integer between 1 and 4"); // Statement prompting user to enter a valid option. 
    break;   // Once function has been executed, break will exit the switch statement
return 0;
    } 
