static const char copyright[] =
"Copyright (c) 1996, 2016 Oracle and/or its affiliates.  All rights reserved.\n";
typedef struct hashhdr185  HASHHDR185;
typedef struct htab185	  HTAB185;
typedef struct hashhdr186  HASHHDR186;
typedef struct htab186	  HTAB186;
typedef struct _epgno  EPGNO;
typedef struct _epg  EPG;
typedef struct _cursor  CURSOR;
typedef struct _btree  BTREE;
void	db_btree __P((DB *, int));
void	db_hash __P((DB *, int));
void	dbt_dump __P((DBT *));
void	dbt_print __P((DBT *));
int	main __P((int, char *[]));
int	usage __P((void));
int
main(argc, argv)
int argc;
char *argv[];
void
db_hash(dbp, pflag)
DB *dbp;
int pflag;
void
db_btree(dbp, pflag)
DB *dbp;
int pflag;
static char hex[] = "0123456789abcdef";
void
dbt_dump(dbtp)
DBT *dbtp;
void
dbt_print(dbtp)
DBT *dbtp;
int
usage()
