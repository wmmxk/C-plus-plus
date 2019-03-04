# Project goal

The goal of this project is to show use **CMakeLists.txt** to include a third library. This is doing the same thing as the project in the folder named "manually".



# How to compile and run

```shell
cmake -H. -Bbuild
```

```cmake --build build```



# Dissect the CMakeLists.txt 

## What to do

Before diving into each line in the CMakeLists.txt file, we first think about what aspects we somehow should let cmake know.

1. find the PkgConfig package and use it to find the library called by the main.
2. set the include path and link path.
3. relate the detected library (here is gtk) to the main.

 

Remember when running ```pkg-config --cflags gtk+-3.0```,  not only flags related to include are related, but -pthread flag is returned. It turns out that 





# Reference

1. [source for main.c](http://cprieto.com/posts/2017/05/cmake-and-libraries-part-2-third-party-libraries.html)

   
