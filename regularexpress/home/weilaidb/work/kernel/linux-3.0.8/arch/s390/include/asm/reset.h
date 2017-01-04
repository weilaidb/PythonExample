#define _ASM_S390_RESET_H
struct reset_call ;
extern void register_reset_call(struct reset_call *reset);
extern void unregister_reset_call(struct reset_call *reset);
extern void s390_reset_system(void);
