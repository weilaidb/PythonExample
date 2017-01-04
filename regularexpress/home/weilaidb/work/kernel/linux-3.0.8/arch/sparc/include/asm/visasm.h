#define _SPARC64_VISASM_H
#define VISEntry					\
rd		%fprs, %o5;			\
andcc		%o5, (FPRS_FEF|FPRS_DU), %g0;	\
be,pt		%icc, 297f;			\
sethi		%hi(297f), %g7;			\
sethi		%hi(VISenter), %g1;		\
jmpl		%g1 + %lo(VISenter), %g0;	\
or		%g7, %lo(297f), %g7;		\
297:	wr		%g0, FPRS_FEF, %fprs;		\
#define VISExit						\
wr		%g0, 0, %fprs;
#define VISEntryHalf					\
rd		%fprs, %o5;			\
andcc		%o5, FPRS_FEF, %g0;		\
be,pt		%icc, 297f;			\
sethi		%hi(298f), %g7;			\
sethi		%hi(VISenterhalf), %g1;		\
jmpl		%g1 + %lo(VISenterhalf), %g0;	\
or		%g7, %lo(298f), %g7;		\
clr		%o5;				\
297:	wr		%o5, FPRS_FEF, %fprs;		\
298:
#define VISExitHalf					\
wr		%o5, 0, %fprs;
static inline void save_and_clear_fpu(void)
extern int vis_emul(struct pt_regs *, unsigned int);
