To create a dynamic library, we must first compile all of our .c files using this command:

gcc -c fPIC *.c
The -c flag tells the compiler that we only want the object code of our files and the -fPIC flag indicated that we are compiling position independent code, a characteristic required by shared libraries.

After running the above command, your directory should be filled with files that end with a .o extension, indicating that they are object code files. The next step is to actually create a dynamic library from these .o files using the following command:

gcc -shared -o libname.so *.o
The -shared flag tells the compiler to produce a shared object which can then be linked with other objects to form an executable and the -o flag simply takes the following argument and uses it as a filename for our output. With all this said, we now have a dynamic library!

In order to actually use our newly-made dynamic library, we need to compile our program in a certain way. So let’s say we’re trying to compile a program called main.c , then if we want to link it to our dynamic library we will have to use the following command:

gcc main.c -L. -lname -o run
The command above will make an executable file for main.c and use any functions in our libname.a library. The -L. flag tells the linker that the library we are using is in our current directory. The -lname portion of our command is actually our library’s name sans the liband .a with a -l stuck to the front of it. The linker adds those portions of the library name back while searching for the library file.

Before running your executable, it is also important that you create an environment variable to your library path so it can be found. You can do so using the following command:

$LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
Now your program is linked to your dynamic library and ready to go!