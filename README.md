# slock - simple screen locker

simple screen locker utility for X. It's one of suckless utilities, more info [here](https://tools.suckless.org/slock/).

## Patches

As this is my own build, I've added some patches to it.

- [colormessage](https://tools.suckless.org/slock/patches/colormessage/)

## Requirements

In order to build slock you need the Xlib header files.


## Installation

Edit config.mk to match your local setup (slock is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install slock
(if necessary as root):

```bash
$ make clean install
```

## Running slock

Simply invoke the 'slock' command. To get out of it, enter your password.
