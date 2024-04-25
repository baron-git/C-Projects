# blib

## About
blib (baronlib) is my own attempt at creating a cross-platform C library. Inspired by raylib, I thought to myself, "Wouldn't it be great to have my own C API I can use that works with any compiler and does exactly what you want it to despite all the differences between *nix and Windows and embedded systems?" That question caused me to create blib. Some of these are essentially just wrappers for WinAPI functions but at the end of the day, they make my life easier so they might make yours easier as well.

This is a huge WIP. Don't put any merit into any code that is uploaded.

## Structure
Each header file is technically it's own library with the only true dependency being **bcore.h**. 

| Header        	| Usage                                                                                   	|
|---------------	|-----------------------------------------------------------------------------------------	|
| bcore.h       	| Contains core functions essential to blib                                               	|
| butils.h      	| Utility functions that make life easier                                                 	|
| bnetwork.h      	| Networking functions for a number of protocols                                          	|
| bstructures.h 	| Contains implementations of a number of data structures (see .h file for complete list) 	|
| berror.h      	| Error handling functions                                                                	|
| bcompress.h   	| Compression functions for a number of data types (audio/video/data)                     	|
| bcrypto.h     	| Crypto implementation based on Monocypher and TweetNaCl                                 	|
| bsockets.h     	| Implementation of sockets from Beej's guide to Networking                                 |