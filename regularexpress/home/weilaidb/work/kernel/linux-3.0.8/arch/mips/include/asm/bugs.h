#define _ASM_BUGS_H
extern int daddiu_bug;
extern void check_bugs64_early(void);
extern void check_bugs32(void);
extern void check_bugs64(void);
static inline void check_bugs_early(void)
static inline void check_bugs(void)
static inline int r4k_daddiu_bug(void)
