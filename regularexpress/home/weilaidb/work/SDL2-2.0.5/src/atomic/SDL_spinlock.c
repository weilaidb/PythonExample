#if defined(__WIN32__) || defined(__WINRT__)
#if !defined(HAVE_GCC_ATOMICS) && defined(__SOLARIS__)
SDL_bool
SDL_AtomicTryLock(SDL_SpinLock *lock)
void
SDL_AtomicLock(SDL_SpinLock *lock)
void
SDL_AtomicUnlock(SDL_SpinLock *lock)
