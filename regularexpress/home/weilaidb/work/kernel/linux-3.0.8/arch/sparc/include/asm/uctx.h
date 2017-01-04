#define __SPARC64_UCTX_H
#define MC_TSTATE	0
#define MC_PC		1
#define MC_NPC		2
#define MC_Y		3
#define MC_G1		4
#define MC_G2		5
#define MC_G3		6
#define MC_G4		7
#define MC_G5		8
#define MC_G6		9
#define MC_G7		10
#define MC_O0		11
#define MC_O1		12
#define MC_O2		13
#define MC_O3		14
#define MC_O4		15
#define MC_O5		16
#define MC_O6		17
#define MC_O7		18
#define MC_NGREG	19
typedef unsigned long mc_greg_t;
typedef mc_greg_t mc_gregset_t[MC_NGREG];
#define MC_MAXFPQ	16
struct mc_fq ;
struct mc_fpu ;
typedef struct mc_fpu mc_fpu_t;
typedef struct  mcontext_t;
struct ucontext ;
typedef struct ucontext ucontext_t;
