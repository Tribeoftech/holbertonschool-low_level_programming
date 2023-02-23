this is a readme for dynamic library
code the node dode.
To create a dynamic library in Linux, simply type the following command: gcc *.c -c -fPIC and hit return. This command essentially generates one object file .o for each source file .c . 

Next, type in the following command: gcc *.o -shared -o liball.so

Finally, we’ll need to export the path for libraries so that programs know where to look for them by executing the following command: export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH


