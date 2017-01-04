#define _H_JFS_BTREE
#define BT_TYPE		0x07
#define	BT_ROOT		0x01
#define	BT_LEAF		0x02
#define	BT_INTERNAL	0x04
#define	BT_RIGHTMOST	0x10
#define	BT_LEFTMOST	0x20
#define	BT_SWAPPED	0x80
#define	BT_RANDOM		0x0000
#define	BT_SEQUENTIAL		0x0001
#define	BT_LOOKUP		0x0010
#define	BT_INSERT		0x0020
#define	BT_DELETE		0x0040
#define BT_IS_ROOT(MP) (((MP)->xflag & COMMIT_PAGE) == 0)
#define BT_PAGE(IP, MP, TYPE, ROOT)\
(BT_IS_ROOT(MP) ? (TYPE *)&JFS_IP(IP)->ROOT : (TYPE *)(MP)->data)
#define BT_GETPAGE(IP, BN, MP, TYPE, SIZE, P, RC, ROOT)\
#define BT_MARK_DIRTY(MP, IP)\
#define BT_PUTPAGE(MP)\
struct btframe ;
struct btstack ;
#define BT_CLR(btstack)\
(btstack)->top = (btstack)->stack
#define BT_STACK_FULL(btstack)\
( (btstack)->top == &((btstack)->stack[MAXTREEHEIGHT-1]))
#define BT_PUSH(BTSTACK, BN, INDEX)\
#define BT_POP(btstack)\
( (btstack)->top == (btstack)->stack ? NULL : --(btstack)->top )
#define BT_STACK(btstack)\
( (btstack)->top == (btstack)->stack ? NULL : (btstack)->top )
static inline void BT_STACK_DUMP(struct btstack *btstack)
#define BT_GETSEARCH(IP, LEAF, BN, MP, TYPE, P, INDEX, ROOT)\
#define BT_PUTSEARCH(BTSTACK)\
