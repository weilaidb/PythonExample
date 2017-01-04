#define ARCH__X86__MM__KMEMCHECK__SHADOW_H
enum kmemcheck_shadow ;
void *kmemcheck_shadow_lookup(unsigned long address);
enum kmemcheck_shadow kmemcheck_shadow_test(void *shadow, unsigned int size);
enum kmemcheck_shadow kmemcheck_shadow_test_all(void *shadow,
unsigned int size);
void kmemcheck_shadow_set(void *shadow, unsigned int size);
