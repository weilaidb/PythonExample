static int __lock_sort_cmp __P((const void *, const void *));
#define	MAX_PGNOS	0xffff
#define	RET_SIZE(size, count)  ((size) +				\
sizeof(u_int32_t) + (count) * 2 * sizeof(u_int16_t))
#define	PUT_COUNT(dp, count)	do  while (0)
#define	PUT_PCOUNT(dp, count)	do  while (0)
#define	PUT_SIZE(dp, size)	do  while (0)
#define	PUT_PGNO(dp, pgno)	do  while (0)
#define	COPY_OBJ(dp, obj)	do  while (0)
#define	GET_COUNT(dp, count)	do  while (0)
#define	GET_PCOUNT(dp, count)	do  while (0)
#define	GET_SIZE(dp, size)	do  while (0)
#define	GET_PGNO(dp, pgno)	do  while (0)
int
__lock_fix_list(env, list_dbt, nlocks)
ENV *env;
DBT *list_dbt;
u_int32_t nlocks;
int
__lock_get_list(env, locker, flags, lock_mode, list)
ENV *env;
DB_LOCKER *locker;
u_int32_t flags;
db_lockmode_t lock_mode;
DBT *list;
#define	UINT32_CMP(A, B)	((A) == (B) ? 0 : ((A) > (B) ? 1 : -1))
static int
__lock_sort_cmp(a, b)
const void *a, *b;
void
__lock_list_print(env, mbp, list)
ENV *env;
DB_MSGBUF *mbp;
DBT *list;
