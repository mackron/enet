/*
This is an amalgamation of all ENet .c files. This just makes it easier to compile.
*/
#ifndef __ENET_ENET_C__
#define __ENET_ENET_C__

#ifndef ENET_BUILDING_LIB
#define ENET_BUILDING_LIB 1
#endif
#include "include/enet/enet.h"

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable: 4245)  /* conversion from 'int' to 'enet_uint32', signed/unsigned mismatch */
#pragma warning(disable: 4100)  /* unreferenced formal parameter */
#pragma warning(disable: 4018)  /* signed/unsigned mismatch */
#pragma warning(disable: 4701)  /* potentially uninitialized local variable 'peer' used */
#endif

#if defined(_WIN32)
#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "winmm.lib")
#endif

#include "callbacks.c"
#include "compress.c"
#include "host.c"
#include "list.c"
#include "packet.c"
#include "peer.c"
#include "protocol.c"
#if defined(_WIN32)
#include "win32.c"
#else
#include "unix.c"
#endif

#if defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif /* __ENET_ENET_C__ */
