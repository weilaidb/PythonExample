#define __ASM_AVR32_TRAPS_H
struct undef_hook ;
void register_undef_hook(struct undef_hook *hook);
void unregister_undef_hook(struct undef_hook *hook);
