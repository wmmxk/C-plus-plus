## Project goal

This project is to show how to compile and include a shared library. The main.c and lib are the same as in the folder named ```include_lib_shared```



## How to compile?

* Compile source code to objects.

  ```cc -fPIC -c ./src/mymath.c -Iinclude -o ./bin/mymath.o```

  -fPIC: position independent code.

* Link the object to a shared libary

  ```ld -shared ./bin/mymath.o -o ./bin/libmymath.so```

  The above two steps can be merged into one: ``` cc -fPIC -shared ./src/mymath.c  -o ./bin/libmymath.so -Iinclude```

*  Compile the main. Link the shared library and save the load path the executable.

  ``` cc ./app/main.c -lmymath -Ilib/include -L./lib/bin -Wl,-rpath=lib/bin -o ./bin/main```

  **Note**: 

  **-L** is the path to the shared, provided so that the **linker** knows where to look for it.

  **-rpath** designates the run-time search path hard-coded in an executable file or library. Dynamic linking loaders use the rpath to find required libraries as the path is baked into the executable. 

  

  

  

  



# Naming convention of shared library



# Caveats

There are at least three things that can go wrong when trying to link with a library that is in a non-standard location on your machine:

1. The compiler can't find the .h header files.

   Use **-I** flag or **CPATH** variable to solve this issue. 

2. The linker can't find the library's binary .a or .so files.

   To solve this, you can either use the **-L** flag to pass the path of the shared lib or add your path to the environment variable, **LIBRARY_PATH.**

3. At run time, your binary can't find the library's .so file.

   Likewise, there are two ways to address this issue: use the **-Wl, rpath** flag or add the path to the **LD_LIBRARY_PATH**.

   **Note**

   Since LD_LIBRARY_PATH is environment variable, you can check for the default value and that after you add your path to the variable. (TODO, this is wrong)

   



# Ramp-up

## Look into the shared library.

Run ```nm -gC ./lib/bin/libmymath.so```



## List the shared library and run-time search path

We can specify the run-time search path, so there must be a way that we check for the run-time search path for the library. Run ```ldd ./bin/main```





# Reference

1. [how to compile](https://www.fayewilliams.com/2015/07/07/creating-a-shared-library/)

2. [Ramp-up](http://gernotklingler.com/blog/creating-using-shared-libraries-different-compilers-different-operating-systems/)

   

   

   