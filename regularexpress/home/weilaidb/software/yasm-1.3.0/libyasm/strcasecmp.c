#undef yasm__strcasecmp
#undef yasm__strncasecmp
#if defined(LIBC_SCCS) && !defined(lint)
static char sccsid[] = "@(#)strcasecmp.c        8.1 (Berkeley) 6/4/93";
int
yasm__strcasecmp(const char *s1, const char *s2)
int
yasm__strncasecmp(const char *s1, const char *s2, size_t n)
