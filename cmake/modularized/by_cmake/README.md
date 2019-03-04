# Project goal

The goal of this demo is to show how to isolate main from library, header files from source files.

Since the main will call the library, we are expecting to see some lines that connects the main to the library in the CMakeLists.txt in the root dir.

So to grasp this project, first picture the **modularized entities** in your mind and then think about **how they are connected**.  



# Structure of this project

## Principles

I recommend to follow the following the principles when structuring a project. The following each principle is structured by stating what to do and then the benefit of   adhere to it. The bold words are the entities to separate. 

* Separate **client code** (main.c) from **serving code** (lib). So the lib is reusable and can be compiled separately.
* Separate function, class **declaration** from **implementation**. Or put it in another way, separate header files from source when developing a lib. This is good for dividing work among a team. After designing the interface for  each function, members in a team can work independently. 
* When compiling the project, build in out-of-source model, which means separate **Makefiles** generated when your run CMake from **source code** (including header files) and separate built **libraries**, static or shared, and **executable** from source code and Makefiles.

## Entities and linker

The table shows what entities to separate and the code or file that serves as the linker.

| entity    | entity     | linker                                            |
| --------- | ---------- | ------------------------------------------------- |
| hello_app | libgreeter | ./CMakeLists.txt: add_subdirectory                |
|           |            | ./libgreeter/CMakeList.txt: target_link_libraries |
|           |            |                                                   |

## Set properties of an entity

Apart from the linking mechanisms, e.g.  target_link_libraries, which link an entity to another entity, another mechanism is to set the property of an entity. When making the header files visible by the main.c, 



# How to run

* rm the build folder
* In the root dir, run ```cmake-H. -Bbuild```. Then run ```cmake --build build```. A executable file named ```hello_app``` is supposed to generated in ```output/bin/```
* run ```./output/bin/hello_app```, you will see "hello Xiaokang" 

# Reference

## source

This demo is from the [link](http://cprieto.com/posts/2017/03/cmake-and-libraries-part-1.html)

## materials

1. [target_link_libraries, target_include_directories](https://schneide.blog/2016/04/08/modern-cmake-with-target_link_libraries/)

2. [how to structure your project](https://cliutils.gitlab.io/modern-cmake/chapters/basics/structure.html)

   