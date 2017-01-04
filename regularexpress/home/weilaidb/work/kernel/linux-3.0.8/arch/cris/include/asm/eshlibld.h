#define _cris_relocate_h
#undef SANITYCHECK_RELOC
#undef RELOC_DEBUG
# if (defined(__KERNEL__) || !defined(RELOC_DEBUG)) \
&& !defined(CONFIG_SHARE_SHLIB_CORE)
#  define SHARE_LIB_CORE 0
# else
#  define SHARE_LIB_CORE 1
# endif
extern int
perform_cris_aout_relocations(unsigned long text, unsigned long tlength,
unsigned long data, unsigned long dlength,
unsigned long baddr, unsigned long blength,
unsigned char *trel, unsigned long tsrel,
unsigned long dsrel,
unsigned char *symbols, unsigned long symlength,
unsigned char *strings, unsigned long stringlength,
char **env, int envc,
int euid, int is_suid);
struct task_reloc_debug ;
#if SHARE_LIB_CORE
struct shlibdep;
extern void
shlibmod_exit(struct shlibdep **deps);
extern int
shlibmod_fork(struct shlibdep **deps);
# define shlibmod_exit(x)
# define shlibmod_fork(x) 1 _cris_relocate_h
