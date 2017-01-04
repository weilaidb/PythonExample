#define _ASM_X86_JUMP_LABEL_H
#define JUMP_LABEL_NOP_SIZE 5
#define JUMP_LABEL_INITIAL_NOP ".byte 0xe9 \n\t .long 0\n\t"
static __always_inline bool arch_static_branch(struct jump_label_key *key)
typedef u64 jump_label_t;
typedef u32 jump_label_t;
struct jump_entry ;
