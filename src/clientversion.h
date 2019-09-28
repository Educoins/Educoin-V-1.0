#ifndef CLIENTVERSION_H
#define CLIENTVERSION_H

#if defined(HAVE_CONFIG_H)
#include "bitcoin-config.h"
#else

//
// client versioning
//

// These need to be macros, as version.cpp's and bitcoin-qt.rc's voodoo requires it
#define CLIENT_VERSION_MAJOR       1
#define CLIENT_VERSION_MINOR       2
#define CLIENT_VERSION_REVISION    0
#define CLIENT_VERSION_BUILD       0

// Converts the parameter X to a string after macro replacement on X has been performed.
// Don't merge these into one macro!
#define STRINGIZE(X) DO_STRINGIZE(X)
#define DO_STRINGIZE(X) #X

// Copyright year (2009-this)
// Todo: update this when changing our copyright comments in the source
#define COPYRIGHT_YEAR 2019

#endif //HAVE_CONFIG_H

#endif // CLIENTVERSION_H
