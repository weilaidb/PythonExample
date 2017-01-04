#define	_ANSIDECL_H	1
#if defined (__STDC__) || defined (_AIX) || (defined (__mips) && defined (_SYSTYPE_SVR4)) || defined(WIN32)
#define	PTR		void *
#define	PTRCONST	void *CONST
#define	LONG_DOUBLE	long double
#define	AND		,
#define	NOARGS		void
#define	CONST		const
#define	VOLATILE	volatile
#define	SIGNED		signed
#define	DOTS		, ...
#define	EXFUN(name, proto)		name proto
#define	DEFUN(name, arglist, args)	name(args)
#define	DEFUN_VOID(name)		name(void)
#define PROTO(type, name, arglist)	type name arglist
#define PARAMS(paramlist)		paramlist
#define ANSI_PROTOTYPES			1
#define	PTR		char *
#define	PTRCONST	PTR
#define	LONG_DOUBLE	double
#define	AND		;
#define	NOARGS
#define	CONST
#define	const
#define	VOLATILE
#define	SIGNED
#define	DOTS
#define	EXFUN(name, proto)		name()
#define	DEFUN(name, arglist, args)	name arglist args;
#define	DEFUN_VOID(name)		name()
#define PROTO(type, name, arglist) type name ()
#define PARAMS(paramlist)		()
