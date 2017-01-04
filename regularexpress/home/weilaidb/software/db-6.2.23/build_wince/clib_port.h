#define	UINT16_MAX	65535
#define	UINT32_MAX	4294967295U
#if SIZEOF_INT == 4
#define	INT_MAX		2147483647
#if SIZEOF_INT == 8
#define	INT_MAX		9223372036854775807
#define	INT_MIN		(-INT_MAX-1)
#if SIZEOF_INT == 4
#define	UINT_MAX	4294967295U
#if SIZEOF_INT == 8
#define	UINT_MAX	18446744073709551615U
#if SIZEOF_LONG == 4
#define	LONG_MAX	2147483647
#if SIZEOF_LONG == 8
#define	LONG_MAX	9223372036854775807L
#define	LONG_MIN	(-LONG_MAX-1)
#if SIZEOF_LONG == 4
#define	ULONG_MAX	4294967295U
#if SIZEOF_LONG == 8
#define	ULONG_MAX	18446744073709551615UL
#if defined(HAVE_64BIT_TYPES)
#undef	INT64_MAX
#undef	INT64_MIN
#undef	UINT64_MAX
#define	INT64_MAX	_I64_MAX
#define	INT64_MIN	_I64_MIN
#define	UINT64_MAX	_UI64_MAX
#define	INT64_MAX	9223372036854775807LL
#define	INT64_MIN	(-INT64_MAX-1)
#define	UINT64_MAX	18446744073709551615ULL
#define	INT64_FMT	"%I64d"
#define	UINT64_FMT	"%I64u"
#define	EXIT_FAILURE	1
#define	EXIT_SUCCESS	0
#define	S_IREAD		0
#define	S_IWRITE	0
#define	S_IRUSR		S_IREAD
#define	S_IWUSR		S_IWRITE
#define	S_IXUSR		0
#define	S_IRGRP		0
#define	S_IWGRP		0
#define	S_IXGRP		0
#define	S_IROTH		0
#define	S_IWOTH		0
#define	S_IXOTH		0
#define	S_IRUSR		0000400
#define	S_IWUSR		0000200
#define	S_IXUSR		0000100
#define	S_IRGRP		0000040
#define	S_IWGRP		0000020
#define	S_IXGRP		0000010
#define	S_IROTH		0000004
#define	S_IWOTH		0000002
#define	S_IXOTH		0000001
#define	atoi		__db_Catoi
#define	atol		__db_Catol
#define	bsearch		__db_Cbsearch
#define	fclose		__db_Cfclose
#define	fgetc		__db_Cfgetc
#define	fgets		__db_Cfgets
#define	fopen		__db_Cfopen
#define	fwrite		__db_Cfwrite
#define	freeaddrinfo(a)		__db_Cfreeaddrinfo(a)
#define	getaddrinfo(a, b, c, d)	__db_Cgetaddrinfo(a, b, c, d)
#define	getcwd		__db_Cgetcwd
#define	getopt		__db_Cgetopt
#define	optarg		__db_Coptarg
#define	opterr		__db_Copterr
#define	optind		__db_Coptind
#define	optopt		__db_Coptopt
#define	optreset	__db_Coptreset
#define	isalpha		__db_Cisalpha
#define	isdigit		__db_Cisdigit
#define	isprint		__db_Cisprint
#define	isspace		__db_Cisspace
#define	localtime	__db_Clocaltime
#define	memcmp		__db_Cmemcmp
#define	memcpy		__db_Cmemcpy
#define	memmove		__db_Cmemmove
#define	printf		__db_Cprintf
#define	fprintf		__db_Cfprintf
#define	qsort		__db_Cqsort
#define	raise		__db_Craise
#define	rand		__db_Crand
#define	srand		__db_Csrand
#define	snprintf	__db_Csnprintf
#define	strcasecmp	__db_Cstrcasecmp
#define	strncasecmp	__db_Cstrncasecmp
#define	strcat		__db_Cstrcat
#define	strchr		__db_Cstrchr
#define	strdup		__db_Cstrdup
#define	strerror	__db_Cstrerror
#define	strncat		__db_Cstrncat
#define	strncmp		__db_Cstrncmp
#define	strrchr		__db_Cstrrchr
#define	strsep		__db_Cstrsep
#define	strtol		__db_Cstrtol
#define	strtoul		__db_Cstrtoul
#define	time		__db_Ctime
#define	vsnprintf	__db_Cvsnprintf
