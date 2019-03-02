# Project Title

Modularize your project

The goal of this demo is to show how to isolate main from library, header files from source files.

Since the main will call the library, we are expecting to see some lines that connects the main to the library in the CMakeLists.txt in the root dir.

So to grasp this project, first picture the **modularized entities** in your mind and then think about **how they are connected**.  



# Structure of this project

I recommend to follow the following the principles when structuring a project.

* Separate client code (main.c) from serving code (lib). So the lib is reusable and can be compiled separately.
* Separate function, class declaration from implementation. Or put it in another way, separate header files from source when developing a lib. 
* When compl

# Reference

## source

This demo is from the [link](http://cprieto.com/posts/2017/03/cmake-and-libraries-part-1.html)

## materials

1. [target_link_libraries, target_include_directories](https://schneide.blog/2016/04/08/modern-cmake-with-target_link_libraries/)
2. [how to structure your project](https://cliutils.gitlab.io/modern-cmake/chapters/basics/structure.html)
3. 