#define __LINUX_PKT_CLS_H
#define _TC_MAKE32(x) ((x))
#define _TC_MAKEMASK1(n) (_TC_MAKE32(1) << _TC_MAKE32(n))
#define _TC_MAKEMASK(v,n) (_TC_MAKE32((_TC_MAKE32(1)<<(v))-1) << _TC_MAKE32(n))
#define _TC_MAKEVALUE(v,n) (_TC_MAKE32(v) << _TC_MAKE32(n))
#define _TC_GETVALUE(v,n,m) ((_TC_MAKE32(v) & _TC_MAKE32(m)) >> _TC_MAKE32(n))
#define TC_MUNGED          _TC_MAKEMASK1(0)
#define SET_TC_MUNGED(v)   ( TC_MUNGED | (v & ~TC_MUNGED))
#define CLR_TC_MUNGED(v)   ( v & ~TC_MUNGED)
#define TC_OK2MUNGE        _TC_MAKEMASK1(1)
#define SET_TC_OK2MUNGE(v)   ( TC_OK2MUNGE | (v & ~TC_OK2MUNGE))
#define CLR_TC_OK2MUNGE(v)   ( v & ~TC_OK2MUNGE)
#define S_TC_VERD          _TC_MAKE32(2)
#define M_TC_VERD          _TC_MAKEMASK(4,S_TC_VERD)
#define G_TC_VERD(x)       _TC_GETVALUE(x,S_TC_VERD,M_TC_VERD)
#define V_TC_VERD(x)       _TC_MAKEVALUE(x,S_TC_VERD)
#define SET_TC_VERD(v,n)   ((V_TC_VERD(n)) | (v & ~M_TC_VERD))
#define S_TC_FROM          _TC_MAKE32(6)
#define M_TC_FROM          _TC_MAKEMASK(2,S_TC_FROM)
#define G_TC_FROM(x)       _TC_GETVALUE(x,S_TC_FROM,M_TC_FROM)
#define V_TC_FROM(x)       _TC_MAKEVALUE(x,S_TC_FROM)
#define SET_TC_FROM(v,n)   ((V_TC_FROM(n)) | (v & ~M_TC_FROM))
#define AT_STACK	0x0
#define AT_INGRESS	0x1
#define AT_EGRESS	0x2
#define TC_NCLS          _TC_MAKEMASK1(8)
#define SET_TC_NCLS(v)   ( TC_NCLS | (v & ~TC_NCLS))
#define CLR_TC_NCLS(v)   ( v & ~TC_NCLS)
#define S_TC_RTTL          _TC_MAKE32(9)
#define M_TC_RTTL          _TC_MAKEMASK(3,S_TC_RTTL)
#define G_TC_RTTL(x)       _TC_GETVALUE(x,S_TC_RTTL,M_TC_RTTL)
#define V_TC_RTTL(x)       _TC_MAKEVALUE(x,S_TC_RTTL)
#define SET_TC_RTTL(v,n)   ((V_TC_RTTL(n)) | (v & ~M_TC_RTTL))
#define S_TC_AT          _TC_MAKE32(12)
#define M_TC_AT          _TC_MAKEMASK(2,S_TC_AT)
#define G_TC_AT(x)       _TC_GETVALUE(x,S_TC_AT,M_TC_AT)
#define V_TC_AT(x)       _TC_MAKEVALUE(x,S_TC_AT)
#define SET_TC_AT(v,n)   ((V_TC_AT(n)) | (v & ~M_TC_AT))
enum ;
#define TCA_ACT_MAX __TCA_ACT_MAX
#define TCA_OLD_COMPAT (TCA_ACT_MAX+1)
#define TCA_ACT_MAX_PRIO 32
#define TCA_ACT_BIND	1
#define TCA_ACT_NOBIND	0
#define TCA_ACT_UNBIND	1
#define TCA_ACT_NOUNBIND	0
#define TCA_ACT_REPLACE		1
#define TCA_ACT_NOREPLACE	0
#define MAX_REC_LOOP 4
#define MAX_RED_LOOP 4
#define TC_ACT_UNSPEC	(-1)
#define TC_ACT_OK		0
#define TC_ACT_RECLASSIFY	1
#define TC_ACT_SHOT		2
#define TC_ACT_PIPE		3
#define TC_ACT_STOLEN		4
#define TC_ACT_QUEUED		5
#define TC_ACT_REPEAT		6
#define TC_ACT_JUMP		0x10000000
enum ;
#define TCA_ID_MAX __TCA_ID_MAX
struct tc_police ;
struct tcf_t ;
struct tc_cnt ;
#define tc_gen \
__u32                 index; \
__u32                 capab; \
int                   action; \
int                   refcnt; \
int                   bindcnt
enum ;
#define TCA_POLICE_MAX (__TCA_POLICE_MAX - 1)
#define TC_U32_HTID(h) ((h)&0xFFF00000)
#define TC_U32_USERHTID(h) (TC_U32_HTID(h)>>20)
#define TC_U32_HASH(h) (((h)>>12)&0xFF)
#define TC_U32_NODE(h) ((h)&0xFFF)
#define TC_U32_KEY(h) ((h)&0xFFFFF)
#define TC_U32_UNSPEC	0
#define TC_U32_ROOT	(0xFFF00000)
enum ;
#define TCA_U32_MAX (__TCA_U32_MAX - 1)
struct tc_u32_key ;
struct tc_u32_sel ;
struct tc_u32_mark ;
struct tc_u32_pcnt ;
#define TC_U32_TERMINAL		1
#define TC_U32_OFFSET		2
#define TC_U32_VAROFFSET	4
#define TC_U32_EAT		8
#define TC_U32_MAXDEPTH 8
enum ;
#define TCA_RSVP_MAX (__TCA_RSVP_MAX - 1 )
struct tc_rsvp_gpi ;
struct tc_rsvp_pinfo ;
enum ;
#define TCA_ROUTE4_MAX (__TCA_ROUTE4_MAX - 1)
enum ;
#define TCA_FW_MAX (__TCA_FW_MAX - 1)
enum ;
#define TCA_TCINDEX_MAX     (__TCA_TCINDEX_MAX - 1)
enum ;
#define FLOW_KEY_MAX	(__FLOW_KEY_MAX - 1)
enum ;
enum ;
#define TCA_FLOW_MAX	(__TCA_FLOW_MAX - 1)
enum ;
#define TCA_BASIC_MAX (__TCA_BASIC_MAX - 1)
enum ;
#define TCA_CGROUP_MAX (__TCA_CGROUP_MAX - 1)
struct tcf_ematch_tree_hdr ;
enum ;
#define TCA_EMATCH_TREE_MAX (__TCA_EMATCH_TREE_MAX - 1)
struct tcf_ematch_hdr ;
#define TCF_EM_REL_END	0
#define TCF_EM_REL_AND	(1<<0)
#define TCF_EM_REL_OR	(1<<1)
#define TCF_EM_INVERT	(1<<2)
#define TCF_EM_SIMPLE	(1<<3)
#define TCF_EM_REL_MASK	3
#define TCF_EM_REL_VALID(v) (((v) & TCF_EM_REL_MASK) != TCF_EM_REL_MASK)
enum ;
#define TCF_LAYER_MAX (__TCF_LAYER_MAX - 1)
#define	TCF_EM_CONTAINER	0
#define	TCF_EM_CMP		1
#define	TCF_EM_NBYTE		2
#define	TCF_EM_U32		3
#define	TCF_EM_META		4
#define	TCF_EM_TEXT		5
#define        TCF_EM_VLAN		6
#define	TCF_EM_MAX		6
enum ;
enum ;
