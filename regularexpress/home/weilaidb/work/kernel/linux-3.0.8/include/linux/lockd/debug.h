#define LINUX_LOCKD_DEBUG_H
# define LOCKD_DEBUG		1
#undef ifdebug
#if defined(RPC_DEBUG) && defined(LOCKD_DEBUG)
# define ifdebug(flag)		if (unlikely(nlm_debug & NLMDBG_##flag))
# define ifdebug(flag)		if (0)
#define NLMDBG_SVC		0x0001
#define NLMDBG_CLIENT		0x0002
#define NLMDBG_CLNTLOCK		0x0004
#define NLMDBG_SVCLOCK		0x0008
#define NLMDBG_MONITOR		0x0010
#define NLMDBG_CLNTSUBS		0x0020
#define NLMDBG_SVCSUBS		0x0040
#define NLMDBG_HOSTCACHE	0x0080
#define NLMDBG_XDR		0x0100
#define NLMDBG_ALL		0x7fff
