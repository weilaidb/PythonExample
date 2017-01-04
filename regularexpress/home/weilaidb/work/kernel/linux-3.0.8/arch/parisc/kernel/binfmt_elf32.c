#define ELF_CLASS	ELFCLASS32
#define ELF_CORE_COPY_REGS(dst, pt)	\
memset(dst, 0, sizeof(dst)); \
\
dst[40] = (elf_greg_t) pt->iaoq[0]; dst[41] = (elf_greg_t) pt->iaoq[1]; \
dst[42] = (elf_greg_t) pt->iasq[0]; dst[43] = (elf_greg_t) pt->iasq[1]; \
dst[44] = (elf_greg_t) pt->sar;   dst[45] = (elf_greg_t) pt->iir; \
dst[46] = (elf_greg_t) pt->isr;   dst[47] = (elf_greg_t) pt->ior; \
dst[48] = (elf_greg_t) mfctl(22); dst[49] = (elf_greg_t) mfctl(0); \
dst[50] = (elf_greg_t) mfctl(24); dst[51] = (elf_greg_t) mfctl(25); \
dst[52] = (elf_greg_t) mfctl(26); dst[53] = (elf_greg_t) mfctl(27); \
dst[54] = (elf_greg_t) mfctl(28); dst[55] = (elf_greg_t) mfctl(29); \
dst[56] = (elf_greg_t) mfctl(30); dst[57] = (elf_greg_t) mfctl(31); \
dst[58] = (elf_greg_t) mfctl( 8); dst[59] = (elf_greg_t) mfctl( 9); \
dst[60] = (elf_greg_t) mfctl(12); dst[61] = (elf_greg_t) mfctl(13); \
dst[62] = (elf_greg_t) mfctl(10); dst[63] = (elf_greg_t) mfctl(15);
typedef unsigned int elf_greg_t;
#define elf_prstatus elf_prstatus32
struct elf_prstatus32
;
#define elf_prpsinfo elf_prpsinfo32
struct elf_prpsinfo32
;
#define init_elf_binfmt init_elf32_binfmt
#define ELF_PLATFORM  ("PARISC32\0")
#define SET_PERSONALITY(ex) \
set_thread_flag(TIF_32BIT); \
current->thread.map_base = DEFAULT_MAP_BASE32; \
current->thread.task_size = DEFAULT_TASK_SIZE32 \
#undef cputime_to_timeval
#define cputime_to_timeval cputime_to_compat_timeval
static __inline__ void
cputime_to_compat_timeval(const cputime_t cputime, struct compat_timeval *value)
