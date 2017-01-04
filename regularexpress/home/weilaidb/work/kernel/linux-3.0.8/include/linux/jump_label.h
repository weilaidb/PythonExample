#define _LINUX_JUMP_LABEL_H
#if defined(CC_HAVE_ASM_GOTO) && defined(CONFIG_JUMP_LABEL)
struct jump_label_key ;
# include <asm/jump_label.h>
# define HAVE_JUMP_LABEL
enum jump_label_type ;
struct module;
#define JUMP_LABEL_INIT
#define JUMP_LABEL_INIT
static __always_inline bool static_branch(struct jump_label_key *key)
extern struct jump_entry __start___jump_table[];
extern struct jump_entry __stop___jump_table[];
extern void jump_label_lock(void);
extern void jump_label_unlock(void);
extern void arch_jump_label_transform(struct jump_entry *entry,
enum jump_label_type type);
extern void arch_jump_label_text_poke_early(jump_label_t addr);
extern int jump_label_text_reserved(void *start, void *end);
extern void jump_label_inc(struct jump_label_key *key);
extern void jump_label_dec(struct jump_label_key *key);
extern bool jump_label_enabled(struct jump_label_key *key);
extern void jump_label_apply_nops(struct module *mod);
#define JUMP_LABEL_INIT
struct jump_label_key ;
static __always_inline bool static_branch(struct jump_label_key *key)
static inline void jump_label_inc(struct jump_label_key *key)
static inline void jump_label_dec(struct jump_label_key *key)
static inline int jump_label_text_reserved(void *start, void *end)
static inline void jump_label_lock(void)
static inline void jump_label_unlock(void)
static inline bool jump_label_enabled(struct jump_label_key *key)
static inline int jump_label_apply_nops(struct module *mod)
