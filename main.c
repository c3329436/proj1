/*
This program can encrypt and decrypt a rotation cipher with a known numerical key. 
This program can encrypt and decrypt a substitution cipher with a known alphabetical key.
This program can decrypt a rotation cipher with an unknown numerical key.
User interface notes - The program first requires the user to enter the text to be encrypted or decrypted.
The program then offers the user a menu detailing possible operations.
A number between 1 and 5 is entered by the user matching the operation the user wishes to execute.
The user is then prompted for a key. The length and nature of the key is specified by the program for the users conveniance. 
Program uses scanf() statements which can be controlled in Eclipse Che by entering ./a.out into the terminal after opening this
in terminal.
Flow control - Program is controlled via main(. User is prompted to enter a number between 1 and 5 which executes desired option. 
This is controlled via a switch case statement. 
The switch case statement directs the program to the relevant function. 
The function is then run. The result of the operations within the function is printed to the terminal via a printf() statement.
The program then returns to main, where a break statement in the switch case operation ends the program. 
USER INSTRUCTIONS FOR PROGRAM FIVE ARE LOCATED IN THE COMMENTS ABOVE IT.
*/

#include <stdio.h>
#include <string.h> // <string.h> header allows access to string.h library.

void RotationEncrypt(char *message, int key); //Function prototype for operation 1.
void RotationDecrypt(char *message, int key); //Function prototype for operation 2.
void SubstitutionEncrypt(char *message, char *encryptionKey); // Function prototype for operation 3.
void SubstitutionDecrypt(char *message, char *encryptionKey); // Function prototype for operation 4.
void RotationDecrypt_NO_Key(char *message, int key); // Function prototype for operation 5. 

int main()
{

    char message[100]; // Array of type char to store ciphertext/plaintext message. 
    int key=0; // Declare a variable of type int to store key rotation number for operation 1 and operation 2.
    int operation; // Declare a variable of type int to allow user to choose what operation to complete. 
    char encryptionKey[27]; // Array of type char to store encryption key for operation 3 and operation 4. 
    printf("Enter text to be encrypted or decrypted: \n"); 
    scanf("%[^\n]", message); // Scans input plaintext or ciphertext. Ignores spaces and will read all text until end of line.
    printf("Select operation to be completed: \n"); // Allows user to declare which operation to complete. 
    printf("1. Encryption of a message with a rotation cipher given the message text and rotation amount. \n"); // Option 1 description. 
    printf("2. Decryption of a message encrypted with a rotation cipher given cipher text and rotation amount. \n"); // Option 2 description.
    printf("3. Encryption of a message with a substitution cipher given message text and alphabet substitution. \n"); // Option 3 descritpion.
    printf("4. Decryption of a message encrypted with a substitution cipher given cipher text and substitutions. \n"); // Option 4 descritpion.
    printf("5. Decryption of a message encrypted with a rotation cipher given cipher text only. \n"); // Option 5 descritpion. 

    scanf("%d", &operation); // Reads user input to indicate which option shall be completed. 
    printf("Read %d\n", operation); // Informs user via stdio standard out of operation they have selected. 

        switch (operation) // Switch (operation) takes user input from scanf statement above and begins to execute a function/operation. 
        {
            case 1: 
                   RotationEncrypt(message, key); // Function for option 1. This executes the function body found below main. 
                        break; // Once function has been executed, break will 'jump-out' of the switch statement. This prevents other functions from being executed.
    
            case 2: 
                    RotationDecrypt(message, key); // Function for option 2. This executes the function body found below main. 
                        break; // Once function has been executed, break will 'jump-out' of the switch statement. This prevents other functions from being executed.
    
            case 3:
                    SubstitutionEncrypt(message, encryptionKey); // Function for option 3. This executes the function body found below main. 
                        break; // Once function has been executed, break will 'jump-out' of the switch statement. This prevents other functions from being executed.
    
            case 4: 
                    SubstitutionDecrypt(message, encryptionKey); // Function for option 4. This executes the function body found below main. 
                        break; // Once function has been executed, break will 'jump-out' of the switch statement. This prevents other functions from being executed.
    
            case 5:         
                    RotationDecrypt_NO_Key(message, key); // Function for option 5. This executes the function body found below main. 
                        break; // Once function has been executed, break will 'jump-out' of the switch statement. This prevents other functions from being executed.
    
            default: // This option is only present if user selects a number outside the range of 1-5. If this occurs, default (operation) is executed. 
                    printf("Please enter an integer between 1 and 5"); // Statement prompting user to enter a valid option. 
                        break; // Once function has been executed, break will 'jump-out' of the switch statement. This prevents other functions from being executed.
        } 
