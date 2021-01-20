# uwuTerm
## an awful terminal emulator, made in C

### What is uwuTerm?
uwuTerm is an awful terminal emulator that i wrote because i was bored on online lessons. It has no config file, no customizable colors, no anything. Its basically a TTY in a box, but it can scroll and it has a diffrent font. You shouldnt use it ever.

### Why are you putting it on github then?
because some guy in a discord server asked me lol

### How do i install it?
On arch: `makepkg -si`

On diffrent distros: put the `uwuTerm` binary into /usr/bin, or see **compiling**

## Compiling

to compile uwuTerm, download the source run this command:
`gcc -O2 -Wall $(pkg-config --cflags vte-2.91) main.c -o term $(pkg-config --libs vte-2.91)` and then put the `term` binary into into /usr/bin, thats it!

:wq
