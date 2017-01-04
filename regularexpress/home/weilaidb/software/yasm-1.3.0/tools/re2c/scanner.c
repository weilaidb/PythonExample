#line 1 "scanner.re"
#define MAX(a,b) (((a)>(b))?(a):(b))
#define	BSIZE	8192
#define	YYCTYPE		unsigned char
#define	YYCURSOR	cursor
#define	YYLIMIT		s->lim
#define	YYMARKER	s->ptr
#define	YYFILL(n)
#define	RETURN(i)
static unsigned char *fill(Scanner*, unsigned char*);
void
Scanner_init(Scanner *s, FILE *i)
static unsigned char *
fill(Scanner *s, unsigned char *cursor)
#line 79 "scanner.re"
int
Scanner_echo(Scanner *s, FILE *out)
int
Scanner_scan(Scanner *s)
')	goto yy61;
goto yy93;
yy93:	yych = *++YYCURSOR;
goto yy94;
yy94:
#line 172 "scanner.re"
#line 566 "scanner.c"
}
#line 201 "scanner.re"
code:
#line 573 "scanner.c"
#line 626 "scanner.c"
yy103:	yych = *++YYCURSOR;
goto yy104;
yy104:
#line 217 "scanner.re"
#line 632 "scanner.c"
yy105:	yyaccept = 0;
yych = *(YYMARKER = ++YYCURSOR);
if(yych == '\n')	goto yy104;
goto yy112;
yy106:	yyaccept = 0;
yych = *(YYMARKER = ++YYCURSOR);
if(yych == '\n')	goto yy104;
goto yy108;
yy107:	++YYCURSOR;
if(YYLIMIT == YYCURSOR) YYFILL(1);
yych = *YYCURSOR;
goto yy108;
yy108:	if(yych <= '&') else
yy109:	YYCURSOR = YYMARKER;
switch(yyaccept)
yy110:	++YYCURSOR;
if(YYLIMIT == YYCURSOR) YYFILL(1);
yych = *YYCURSOR;
if(yych == '\n')	goto yy109;
goto yy107;
yy111:	++YYCURSOR;
if(YYLIMIT == YYCURSOR) YYFILL(1);
yych = *YYCURSOR;
goto yy112;
yy112:	if(yych <= '!') else
yy113:	++YYCURSOR;
if(YYLIMIT == YYCURSOR) YYFILL(1);
yych = *YYCURSOR;
if(yych == '\n')	goto yy109;
goto yy111;
}
#line 218 "scanner.re"
comment:
#line 685 "scanner.c"
#line 233 "scanner.re"
}
void
Scanner_fatal(Scanner *s, const char *msg)
