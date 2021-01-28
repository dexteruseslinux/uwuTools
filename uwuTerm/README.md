#Term

## A terminal emulator that breadtard wrote as a joke. Most of the readme is still the same.

### How do i install it?
On arch: `makepkg -si`

On diffrent distros: put the `Term` binary into /usr/bin, or see **compiling**

## Compiling

to compile Term, download the source run this command:
`gcc -O2 -Wall $(pkg-config --cflags vte-2.91) main.c -o term $(pkg-config --libs vte-2.91)` and then put the `term` binary into into /usr/bin, thats it!

:wq
