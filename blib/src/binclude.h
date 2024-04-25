#ifndef BINCLUDE_H_ // used to prevent the header file from being included more than once in the same file.
#define BINCLUDE_H_

#ifdef __cplusplus
extern "C" {  // ensures that the functions are exposed as C functions when included in C++ projects.
#endif

#include "bcore.h"
#include "butils.h"
#include "bnetwork.h"
#include "bstructures.h"
#include "berror.h"
#include "bcompress.h"
#include "bcrypto.h"
#include "bsockets.h"

#define BINCLUDE_VERSION "1.0"



#ifdef __cplusplus
}
#endif

#endif // BINCLUDE_H_