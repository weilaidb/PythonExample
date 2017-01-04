#define _SPARC_SEMBUF_H
#if defined(__sparc__) && defined(__arch64__)
# define PADDING(x)
# define PADDING(x) unsigned int x;
struct semid64_ds ;
#undef PADDING
