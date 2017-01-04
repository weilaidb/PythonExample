static const char copyright[] =
"Copyright (c) 1996, 2016 Oracle and/or its affiliates.  All rights reserved.\n";
static int	db185_close __P((DB185 *));
static int	db185_compare __P((DB *, const DBT *, const DBT *, size_t *));
static int	db185_del __P((const DB185 *, const DBT185 *, u_int));
static int	db185_fd __P((const DB185 *));
static int	db185_get __P((const DB185 *, const DBT185 *, DBT185 *, u_int));
static u_int32_t
db185_hash __P((DB *, const void *, u_int32_t));
static size_t	db185_prefix __P((DB *, const DBT *, const DBT *));
static int	db185_put __P((const DB185 *, DBT185 *, const DBT185 *, u_int));
static int	db185_seq __P((const DB185 *, DBT185 *, DBT185 *, u_int));
static int	db185_sync __P((const DB185 *, u_int));
DB185 *
__db185_open(file, oflags, mode, type, openinfo)
const char *file;
int oflags, mode;
DBTYPE type;
const void *openinfo;
static int
db185_close(db185p)
DB185 *db185p;
static int
db185_del(db185p, key185, flags)
const DB185 *db185p;
const DBT185 *key185;
u_int flags;
static int
db185_fd(db185p)
const DB185 *db185p;
static int
db185_get(db185p, key185, data185, flags)
const DB185 *db185p;
const DBT185 *key185;
DBT185 *data185;
u_int flags;
static int
db185_put(db185p, key185, data185, flags)
const DB185 *db185p;
DBT185 *key185;
const DBT185 *data185;
u_int flags;
static int
db185_seq(db185p, key185, data185, flags)
const DB185 *db185p;
DBT185 *key185, *data185;
u_int flags;
static int
db185_sync(db185p, flags)
const DB185 *db185p;
u_int flags;
static int
db185_compare(dbp, a, b, locp)
DB *dbp;
const DBT *a, *b;
size_t *locp;
static size_t
db185_prefix(dbp, a, b)
DB *dbp;
const DBT *a, *b;
static u_int32_t
db185_hash(dbp, key, len)
DB *dbp;
const void *key;
u_int32_t len;
