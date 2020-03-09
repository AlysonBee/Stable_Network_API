# Stable_Network_API
A networking API that adds stability to using C sockets.

This project is for the purpose of making a stable API for sending large buffers and files in C without having to worry about
direct buffer control.

A library for Python is done (alongside a work-in-progress Ruby library) that allows for connecting multiple languages together

## The Overall Design

The design is largely inspired by the ZMQ project, with the main difference being that the sockets created by this library
work as direct C/C++ sockets and support the Standard C Socket API library functions, with the only added benefit being that
a call to these functions guarantees stability in terms of sending large buffers or large files without needing to manually
manage buffers.

Functions such as `select()`and `poll()` work with their specifiations with only initialization, sending and receiving being
changed from
```
send(), recv(), socket(...) , connect/bind
```
To
```
GoldiloxAPIClientConnection (for socket/connect),
SuperRecv (for send),
SuperSend (for recv),
```
# TODO
Functionality for starting up a server still needs be added.

Find the specification for each language's library in it's subfolder as shown above.

## Coded with Love
AlysonBee








