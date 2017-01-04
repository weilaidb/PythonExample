#define __ALPHA_A_OUT_H__
struct filehdr
;
struct aouthdr
;
struct scnhdr
;
struct exec
;
#define	a_info		ah.info
#define	a_text		ah.tsize
#define a_data		ah.dsize
#define a_bss		ah.bsize
#define a_entry		ah.entry
#define a_textstart	ah.text_start
#define	a_datastart	ah.data_start
#define	a_bssstart	ah.bss_start
#define	a_gprmask	ah.gprmask
#define a_fprmask	ah.fprmask
#define a_gpvalue	ah.gpvalue
#define N_TXTADDR(x) ((x).a_textstart)
#define N_DATADDR(x) ((x).a_datastart)
#define N_BSSADDR(x) ((x).a_bssstart)
#define N_DRSIZE(x) 0
#define N_TRSIZE(x) 0
#define N_SYMSIZE(x) 0
#define AOUTHSZ		sizeof(struct aouthdr)
#define SCNHSZ		sizeof(struct scnhdr)
#define SCNROUND	16
#define N_TXTOFF(x) \
((long) N_MAGIC(x) == ZMAGIC ? 0 : \
(sizeof(struct exec) + (x).fh.f_nscns*SCNHSZ + SCNROUND - 1) & ~(SCNROUND - 1))
#define SET_AOUT_PERSONALITY(BFPM, EX) \
set_personality (((BFPM->taso || EX.ah.entry < 0x100000000L \
? ADDR_LIMIT_32BIT : 0) | PER_OSF4))
