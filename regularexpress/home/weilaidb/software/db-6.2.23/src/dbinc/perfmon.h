#define	_DB_PERFMON_H_
#define	STAT_PERFMON1(env, cat, id, a1)		PERFMON1(env, cat, id, (a1))
#define	STAT_PERFMON2(env, cat, id, a1, a2)	\
PERFMON2(env, cat, id, (a1), (a2))
#define	STAT_PERFMON3(env, cat, id, a1, a2, a3)	\
PERFMON3(env, cat, id, (a1), (a2), (a3))
#define	STAT_PERFMON1(env, cat, id, a1)		NOP_STATEMENT
#define	STAT_PERFMON2(env, cat, id, a1, a2)	NOP_STATEMENT
#define	STAT_PERFMON3(env, cat, id, a1, a2, a3)	NOP_STATEMENT
#if defined(HAVE_PERFMON) && defined(HAVE_STATISTICS)
struct _db_page;
struct __bh;
struct __db_dbt;
struct __sh_dbt;
struct __db_mutex_t;
#if defined(HAVE_DTRACE)
#define	PERFMON0(env, cat, id)		bdb_##cat##_##id()
#define	PERFMON1(env, cat, id, a1)	bdb_##cat##_##id(a1)
#define	PERFMON2(env, cat, id, a1, a2)					\
bdb_##cat##_##id((a1), (a2))
#define	PERFMON3(env, cat, id, a1, a2, a3)				\
do  while (0)
#define	PERFMON4(env, cat, id, a1, a2, a3, a4)				\
do  while (0)
#define	PERFMON5(env, cat, id, a1, a2, a3, a4, a5)			\
do  while (0)
#define	PERFMON6(env, cat, id, a1, a2, a3, a4, a5, a6)			\
do  while (0)
#define	PERFMON_ENABLED(env, cat, id)	 bdb_##cat##_##id##_enabled()
#define	PERFMON0(env, cat, id)				NOP_STATEMENT
#define	PERFMON1(env, cat, id, a1)			NOP_STATEMENT
#define	PERFMON2(env, cat, id, a1, a2)			NOP_STATEMENT
#define	PERFMON3(env, cat, id, a1, a2, a3)		NOP_STATEMENT
#define	PERFMON4(env, cat, id, a1, a2, a3, a4)		NOP_STATEMENT
#define	PERFMON5(env, cat, id, a1, a2, a3, a4, a5)	NOP_STATEMENT
#define	PERFMON6(env, cat, id, a1, a2, a3, a4, a5, a6)	NOP_STATEMENT
#define	PERFMON_ENABLED(env, cat, id)			FALSE
