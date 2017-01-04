typedef struct filehdr  FILHDR;
#define FILHSZ  sizeof(FILHDR)
#define OMAGIC		0407
#define MIPSEBMAGIC	0x160
#define MIPSELMAGIC	0x162
typedef struct scnhdr  SCNHDR;
#define SCNHSZ		sizeof(SCNHDR)
#define SCNROUND	((long)16)
typedef struct aouthdr  AOUTHDR;
#define AOUTHSZ sizeof(AOUTHDR)
#define OMAGIC		0407
#define NMAGIC		0410
#define ZMAGIC		0413
#define SMAGIC		0411
#define LIBMAGIC        0443
#define N_TXTOFF(f, a) \
((a).magic == ZMAGIC || (a).magic == LIBMAGIC ? 0 : \
((a).vstamp < 23 ? \
((FILHSZ + AOUTHSZ + (f).f_nscns * SCNHSZ + 7) & 0xfffffff8) : \
((FILHSZ + AOUTHSZ + (f).f_nscns * SCNHSZ + SCNROUND-1) & ~(SCNROUND-1)) ) )
#define N_DATOFF(f, a) \
N_TXTOFF(f, a) + (a).tsize;
