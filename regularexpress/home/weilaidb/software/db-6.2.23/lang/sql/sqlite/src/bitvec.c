#define BITVEC_SZ        512
#define BITVEC_USIZE     (((BITVEC_SZ-(3*sizeof(u32)))/sizeof(Bitvec*))*sizeof(Bitvec*))
#define BITVEC_TELEM     u8
#define BITVEC_SZELEM    8
#define BITVEC_NELEM     (BITVEC_USIZE/sizeof(BITVEC_TELEM))
#define BITVEC_NBIT      (BITVEC_NELEM*BITVEC_SZELEM)
#define BITVEC_NINT      (BITVEC_USIZE/sizeof(u32))
#define BITVEC_MXHASH    (BITVEC_NINT/2)
#define BITVEC_HASH(X)   (((X)*1)%BITVEC_NINT)
#define BITVEC_NPTR      (BITVEC_USIZE/sizeof(Bitvec *))
struct Bitvec ;
Bitvec *sqlite3BitvecCreate(u32 iSize)
int sqlite3BitvecTest(Bitvec *p, u32 i)
int sqlite3BitvecSet(Bitvec *p, u32 i)
void sqlite3BitvecClear(Bitvec *p, u32 i, void *pBuf)
void sqlite3BitvecDestroy(Bitvec *p)
u32 sqlite3BitvecSize(Bitvec *p)
#define SETBIT(V,I)      V[I>>3] |= (1<<(I&7))
#define CLEARBIT(V,I)    V[I>>3] &= ~(1<<(I&7))
#define TESTBIT(V,I)     (V[I>>3]&(1<<(I&7)))!=0
int sqlite3BitvecBuiltinTest(int sz, int *aOp)
