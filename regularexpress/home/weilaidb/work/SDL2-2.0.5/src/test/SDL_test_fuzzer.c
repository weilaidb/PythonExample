#if defined(_MSC_VER) && _MSC_VER <= 1500
#define UINT8_MAX   ~(Uint8)0
#define UINT16_MAX  ~(Uint16)0
#define UINT32_MAX  ~(Uint32)0
#define UINT64_MAX  ~(Uint64)0
#define _GNU_SOURCE
static int fuzzerInvocationCounter = 0;
static SDLTest_RandomContext rndContext;
void
SDLTest_FuzzerInit(Uint64 execKey)
int
SDLTest_GetFuzzerInvocationCount()
Uint8
SDLTest_RandomUint8()
Sint8
SDLTest_RandomSint8()
Uint16
SDLTest_RandomUint16()
Sint16
SDLTest_RandomSint16()
Sint32
SDLTest_RandomSint32()
Uint32
SDLTest_RandomUint32()
Uint64
SDLTest_RandomUint64()
Sint64
SDLTest_RandomSint64()
Sint32
SDLTest_RandomIntegerInRange(Sint32 pMin, Sint32 pMax)
Uint64
SDLTest_GenerateUnsignedBoundaryValues(const Uint64 maxValue, Uint64 boundary1, Uint64 boundary2, SDL_bool validDomain)
Uint8
SDLTest_RandomUint8BoundaryValue(Uint8 boundary1, Uint8 boundary2, SDL_bool validDomain)
Uint16
SDLTest_RandomUint16BoundaryValue(Uint16 boundary1, Uint16 boundary2, SDL_bool validDomain)
Uint32
SDLTest_RandomUint32BoundaryValue(Uint32 boundary1, Uint32 boundary2, SDL_bool validDomain)
Uint64
SDLTest_RandomUint64BoundaryValue(Uint64 boundary1, Uint64 boundary2, SDL_bool validDomain)
Sint64
SDLTest_GenerateSignedBoundaryValues(const Sint64 minValue, const Sint64 maxValue, Sint64 boundary1, Sint64 boundary2, SDL_bool validDomain)
Sint8
SDLTest_RandomSint8BoundaryValue(Sint8 boundary1, Sint8 boundary2, SDL_bool validDomain)
Sint16
SDLTest_RandomSint16BoundaryValue(Sint16 boundary1, Sint16 boundary2, SDL_bool validDomain)
Sint32
SDLTest_RandomSint32BoundaryValue(Sint32 boundary1, Sint32 boundary2, SDL_bool validDomain)
Sint64
SDLTest_RandomSint64BoundaryValue(Sint64 boundary1, Sint64 boundary2, SDL_bool validDomain)
float
SDLTest_RandomUnitFloat()
float
SDLTest_RandomFloat()
double
SDLTest_RandomUnitDouble()
double
SDLTest_RandomDouble()
char *
SDLTest_RandomAsciiString()
char *
SDLTest_RandomAsciiStringWithMaximumLength(int maxLength)
char *
SDLTest_RandomAsciiStringOfSize(int size)
