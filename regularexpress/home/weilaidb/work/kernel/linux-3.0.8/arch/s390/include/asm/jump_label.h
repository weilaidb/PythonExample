#define _ASM_S390_JUMP_LABEL_H
#define JUMP_LABEL_NOP_SIZE 6
#define ASM_PTR ".quad"
#define ASM_ALIGN ".balign 8"
#define ASM_PTR ".long"
#define ASM_ALIGN ".balign 4"
static __always_inline bool arch_static_branch(struct jump_label_key *key)
typedef unsigned long jump_label_t;
struct jump_entry ;
