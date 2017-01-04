#define ASM_IA64_CYCLONE_H
extern int use_cyclone;
extern void __init cyclone_setup(void);
#define use_cyclone 0
static inline void cyclone_setup(void)
