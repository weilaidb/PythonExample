#if defined(__clang_analyzer__) && !defined(SDL_DISABLE_ANALYZE_MACROS)
#define SDL_DISABLE_ANALYZE_MACROS 1
double
SDL_atan(double x)
double
SDL_atan2(double x, double y)
double
SDL_acos(double val)
double
SDL_asin(double val)
double
SDL_ceil(double x)
double
SDL_copysign(double x, double y)
double
SDL_cos(double x)
float
SDL_cosf(float x)
double
SDL_fabs(double x)
double
SDL_floor(double x)
double
SDL_log(double x)
double
SDL_pow(double x, double y)
double
SDL_scalbn(double x, int n)
double
SDL_sin(double x)
float
SDL_sinf(float x)
double
SDL_sqrt(double x)
float
SDL_sqrtf(float x)
double
SDL_tan(double x)
float
SDL_tanf(float x)
int SDL_abs(int x)
#if defined(HAVE_CTYPE_H)
int SDL_isdigit(int x)
int SDL_isspace(int x)
int SDL_toupper(int x)
int SDL_tolower(int x)
int SDL_isdigit(int x)
int SDL_isspace(int x)
int SDL_toupper(int x)
int SDL_tolower(int x)
#if defined(_MSC_VER)
#define __FLTUSED__
__declspec(selectany) int _fltused = 1;
#if (_MSC_VER >= 1400) && defined(_WIN64) && !defined(_DEBUG) && !(_MSC_VER >= 1900 && defined(_MT))
void * memcpy ( void * destination, const void * source, size_t num )
void
__declspec(naked)
_ftol()
void
_ftol2_sse()
void
__declspec(naked)
_allmul()
void
__declspec(naked)
_alldiv()
void
__declspec(naked)
_aulldiv()
void
__declspec(naked)
_allrem()
void
__declspec(naked)
_aullrem()
void
__declspec(naked)
_alldvrm()
void
__declspec(naked)
_aulldvrm()
void
__declspec(naked)
_allshl()
void
__declspec(naked)
_allshr()
void
__declspec(naked)
_aullshr()
