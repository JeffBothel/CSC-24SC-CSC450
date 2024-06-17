# Module 5 - Critical Thinking Assignment
The task is to create a program that will take input from a user and work with files on the system.This needs to be accomplished in the C++ programming language.

## Design Requirements
The original provided statements of requirements for the program are as follows:

*Demonstrate an understanding of C++ programming concepts by completing the following:*
* *Program: Create a C++ program that will obtain input from a user and store it into the provided CSC450_CT5_mod5.txt Download CSC450_CT5_mod5.txtfile.*
* *Download CSC450_CT5_mod5.txt Download CSC450_CT5_mod5.txtfile. Your program should append it to the provided text file, without deleting the existing data:*
    * *Store the provided data in the CSC450_CT5_mod5.txt file.*
    * *Create a reversal method that will reverse all of the characters in the CSC450_CT5_mod5.txt file and store the result in a CSC450-mod5-reverse.txt file.*
* *Compile and submit your pseudocode, source code, and screenshots of the application executing the application, the results and your GIT repository in a single document.*

Which is where I believe that this program would need to meet these following requirements:
* The program collects a string from the user of the program.
* Those strings are then written to the provided file from the course item, ```CSC450_CT5_mod5.txt```, as appended to the existing file.
* Text from the file ```CSC450_CT5_mod5.txt``` is then read into the program.
* The text is then reversed and written to the new file ```CSC450-mod5-reverse.txt```.

## Pseudocode for the Program
```
start program
    <includes for program>

    Write out program introduction

    Write out line request
    read string line

    open file CSC450_CT5_mod5.txt
    write file to CSC450_CT5_mod5.txt
    close file CSC450_CT5_mod5.txt

    open file CSC450_CT5_mod5.txt
    read CSC450_CT5_mod5.txt in reverse --> reversed string variable
    write reversed string --> CSC450-mod5-reverse.txt
    close file CSC450-mod5-reverse.txt
    close file CSC450_CT5_mod5.txt
    
end program
```

## Diagrams for the Program Flow
```Mermaid
flowchart TD
    start([Start])
    introduce(Introduce the program)
    gather(Gather User Input)
    openFile1(Open CSC450_CT5_mod5.txt)
    writeFile(Write user collected string to file)
    closeFile1(Close file after used string written)
    openFile2(Open CSC450_CT5_mod5.txt)
    readFile(Read file CSC450_CT5_mod5.txt in reverse)
    openRevFile(Open CSC450-mod5-reverse.txt)
    writeRevFile(Write the string to the reverse file)
    closeRevFile(Close CSC450-mod5-reverse.txt)
    finish([End Program])

    start --> introduce
    introduce --> gather
    gather --> openFile1
    openFile1 --> writeFile
    writeFile --> closeFile1
    closeFile1 --> openFile2
    openFile2 --> readFile
    readFile --> openRevFile
    openRevFile --> writeRevFile
    writeRevFile --> closeRevFile
    closeRevFile --> finish
```