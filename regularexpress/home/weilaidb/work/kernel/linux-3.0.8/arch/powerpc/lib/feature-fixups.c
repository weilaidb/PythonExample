struct fixup_entry ;
static unsigned int *calc_addr(struct fixup_entry *fcur, long offset)
static int patch_alt_instruction(unsigned int *src, unsigned int *dest,
unsigned int *alt_start, unsigned int *alt_end)
static int patch_feature_section(unsigned long value, struct fixup_entry *fcur)
void do_feature_fixups(unsigned long value, void *fixup_start, void *fixup_end)
void do_lwsync_fixups(unsigned long value, void *fixup_start, void *fixup_end)
#define check(x)	\
if (!(x)) printk("feature-fixups: test failed at line %d\n", __LINE__);
static struct fixup_entry fixup;
static long calc_offset(struct fixup_entry *entry, unsigned int *p)
void test_basic_patching(void)
static void test_alternative_patching(void)
static void test_alternative_case_too_big(void)
static void test_alternative_case_too_small(void)
static void test_alternative_case_with_branch(void)
static void test_alternative_case_with_external_branch(void)
static void test_cpu_macros(void)
static void test_fw_macros(void)
static void test_lwsync_macros(void)
static int __init test_feature_fixups(void)
late_initcall(test_feature_fixups);
