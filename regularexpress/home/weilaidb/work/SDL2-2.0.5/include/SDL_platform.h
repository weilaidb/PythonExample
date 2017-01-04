#define _SDL_platform_h
#if defined(_AIX)
#undef __AIX__
#define __AIX__     1
#if defined(__HAIKU__)
#undef __HAIKU__
#define __HAIKU__   1
#if defined(bsdi) || defined(__bsdi) || defined(__bsdi__)
#undef __BSDI__
#define __BSDI__    1
#if defined(_arch_dreamcast)
#undef __DREAMCAST__
#define __DREAMCAST__   1
#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
#undef __FREEBSD__
#define __FREEBSD__ 1
#if defined(hpux) || defined(__hpux) || defined(__hpux__)
#undef __HPUX__
#define __HPUX__    1
#if defined(sgi) || defined(__sgi) || defined(__sgi__) || defined(_SGI_SOURCE)
#undef __IRIX__
#define __IRIX__    1
#if (defined(linux) || defined(__linux) || defined(__linux__))
#undef __LINUX__
#define __LINUX__   1
#if defined(ANDROID) || defined(__ANDROID__)
#undef __ANDROID__
#undef __LINUX__
#define __ANDROID__ 1
#if defined(__APPLE__)
#if TARGET_OS_TV
#undef __TVOS__
#define __TVOS__ 1
#if TARGET_OS_IPHONE
#undef __IPHONEOS__
#define __IPHONEOS__ 1
#undef __MACOSX__
#undef __MACOSX__
#define __MACOSX__  1
#if MAC_OS_X_VERSION_MIN_REQUIRED < 1060
# error SDL for Mac OS X only supports deploying on 10.6 and above.
#if defined(__NetBSD__)
#undef __NETBSD__
#define __NETBSD__  1
#if defined(__OpenBSD__)
#undef __OPENBSD__
#define __OPENBSD__ 1
#if defined(__OS2__)
#undef __OS2__
#define __OS2__     1
#if defined(osf) || defined(__osf) || defined(__osf__) || defined(_OSF_SOURCE)
#undef __OSF__
#define __OSF__     1
#if defined(__QNXNTO__)
#undef __QNXNTO__
#define __QNXNTO__  1
#if defined(riscos) || defined(__riscos) || defined(__riscos__)
#undef __RISCOS__
#define __RISCOS__  1
#if defined(__sun) && defined(__SVR4)
#undef __SOLARIS__
#define __SOLARIS__ 1
#if defined(WIN32) || defined(_WIN32) || defined(__CYGWIN__) || defined(__MINGW32__)
#if (defined(_MSC_VER) && (_MSC_VER >= 1700) && !_USING_V110_SDK71_)
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#undef __WINDOWS__
#define __WINDOWS__   1
#elif WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#undef __WINRT__
#define __WINRT__ 1
#undef __WINDOWS__
#define __WINDOWS__   1
#if defined(__WINDOWS__)
#undef __WIN32__
#define __WIN32__ 1
#if defined(__PSP__)
#undef __PSP__
#define __PSP__ 1
#if defined(__native_client__)
#undef __LINUX__
#undef __NACL__
#define __NACL__ 1
#if defined(__pnacl__)
#undef __LINUX__
#undef __PNACL__
#define __PNACL__ 1
#define __SDL_NOGETPROCADDR__
extern DECLSPEC const char * SDLCALL SDL_GetPlatform (void);
