#define _SPARC_MSGBUF_H
#if defined(__sparc__) && defined(__arch64__)
# define PADDING(x)
# define PADDING(x) unsigned int x;
struct msqid64_ds ;
#undef PADDING
