#define _LINUX_VT_H
#define MIN_NR_CONSOLES 1
#define MAX_NR_CONSOLES	63
#define MAX_NR_USER_CONSOLES 63
#define VT_OPENQRY	0x5600
struct vt_mode ;
#define VT_GETMODE	0x5601
#define VT_SETMODE	0x5602
#define		VT_AUTO		0x00
#define		VT_PROCESS	0x01
#define		VT_ACKACQ	0x02
struct vt_stat ;
#define VT_GETSTATE	0x5603
#define VT_SENDSIG	0x5604
#define VT_RELDISP	0x5605
#define VT_ACTIVATE	0x5606
#define VT_WAITACTIVE	0x5607
#define VT_DISALLOCATE	0x5608
struct vt_sizes ;
#define VT_RESIZE	0x5609
struct vt_consize ;
#define VT_RESIZEX      0x560A
#define VT_LOCKSWITCH   0x560B
#define VT_UNLOCKSWITCH 0x560C
#define VT_GETHIFONTMASK 0x560D
struct vt_event ;
#define VT_WAITEVENT	0x560E
struct vt_setactivate ;
#define VT_SETACTIVATE	0x560F
extern int vt_kmsg_redirect(int new);
static inline int vt_kmsg_redirect(int new)
#define vt_get_kmsg_redirect() vt_kmsg_redirect(-1)
