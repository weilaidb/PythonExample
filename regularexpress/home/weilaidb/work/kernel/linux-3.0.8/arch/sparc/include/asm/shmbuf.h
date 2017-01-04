#define _SPARC_SHMBUF_H
#if defined(__sparc__) && defined(__arch64__)
# define PADDING(x)
# define PADDING(x) unsigned int x;
struct shmid64_ds ;
struct shminfo64 ;
#undef PADDING
