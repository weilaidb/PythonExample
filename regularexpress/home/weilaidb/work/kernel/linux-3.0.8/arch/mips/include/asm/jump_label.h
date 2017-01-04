#define _ASM_MIPS_JUMP_LABEL_H
#define JUMP_LABEL_NOP_SIZE 4
#define WORD_INSN ".dword"
#define WORD_INSN ".word"
static __always_inline bool arch_static_branch(struct jump_label_key *key)
typedef u64 jump_label_t;
typedef u32 jump_label_t;
struct jump_entry ;
