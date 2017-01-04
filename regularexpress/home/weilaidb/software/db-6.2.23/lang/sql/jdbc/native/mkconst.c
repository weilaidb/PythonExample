#if HAVE_SQLITE3
#if HAVE_SQLITE2
#if defined(_WIN32) || (HAVE_SQLITE3)
#define PCONST(code)							\
printf("\n", code);				\
printf("    public static final int "#code" = %d;\n", code);
#define PCONST(code)							\
printf("\n");						\
printf("    public static final int "#code" = %d;\n", code);
#define QCONST(code)							\
printf("    public static final int "#code" = %d;\n", code);
int
main()
