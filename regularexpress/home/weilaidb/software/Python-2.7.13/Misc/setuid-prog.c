#error "You must define FULL_PATH somewhere"
#define UMASK           077
#if defined(__STDC__) && defined(__sgi)
#define environ _environ
char def_IFS[] = "IFS= \t\n";
char def_PATH[] = "PATH=/usr/bsd:/usr/bin:/bin:/usr/local/bin:/usr/sbin";
char def_PATH[] = "PATH=/usr/ucb:/usr/bin:/bin:/usr/local/bin";
char def_CDPATH[] = "CDPATH=.";
char def_ENV[] = "ENV=:";
void
clean_environ(void)
int
main(int argc, char **argv)
