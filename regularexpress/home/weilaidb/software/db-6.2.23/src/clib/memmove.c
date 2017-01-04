typedef	int word;
#undef	wsize
#define	wsize	sizeof(word)
#undef	wmask
#define	wmask	(wsize - 1)
void *
memcpy(dst0, src0, length)
void *
memmove(dst0, src0, length)
void
bcopy(src0, dst0, length)
void *dst0;
const void *src0;
register size_t length;
