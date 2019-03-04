# Project goal

The goal of this project is to show how to include a third party library when compiling your application. The secret source is the [pkg-config](https://en.wikipedia.org/wiki/Pkg-config) and the syntax for reusing the result of a command (here is pkg-config). 



# How to compile and run

Since in main.c depends on the package gtk, we need to pass all the include path and linking path gtk depends on. So we use ```pkg-config --cflags gtk+-3.0``` to get all the include paths and ```pkg-config --libs gtk+-3.0``` to get a list of libraries.

Following is the results of these two commands. We don't have to manually type in the include path and linking path when compile main.c. Instead, we can use **backticks** or **$(command)** to reuse the result of the command when compiling main.c (see ref 2).

**pkg-config --cflags gtk+-3.0**

-pthread -I/usr/include/gtk-3.0 -I/usr/include/at-spi2-atk/2.0 -I/usr/include/at-spi-2.0 -I/usr/include/dbus-1.0 -I/usr/lib/x86_64-linux-gnu/dbus-1.0/include -I/usr/include/gtk-3.0 -I/usr/include/gio-unix-2.0/ -I/usr/include/cairo -I/usr/include/pango-1.0 -I/usr/include/harfbuzz -I/usr/include/pango-1.0 -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libpng16 -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include

**pkg-config --libs gtk+-3.0**

-lgtk-3 -lgdk-3 -lpangocairo-1.0 -lpango-1.0 -latk-1.0 -lcairo-gobject -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lgobject-2.0 -lglib-2.0



With these being said, to compile main.c, you can run:

**gcc $(pkg-config --cflags gtk+-3.0) main.c $(pkg-config --libs gtk+-3.0)**

 **gcc `pkg-config --cflags gtk+-3.0` main.c `pkg-config --libs gtk+-3.0`**





# Reference

1. [source for main.c](http://cprieto.com/posts/2017/05/cmake-and-libraries-part-2-third-party-libraries.html)
2. [command substituion](http://www.gnu.org/software/bash/manual/html_node/Command-Substitution.html#Command-Substitution)

