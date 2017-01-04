#if defined(__i386__) && !defined(__arch_um__)
extern const struct raid6_mmx_constants  raid6_mmx_constants;
static int raid6_have_sse1_or_mmxext(void)
static void raid6_sse11_gen_syndrome(int disks, size_t bytes, void **ptrs)
const struct raid6_calls raid6_sse1x1 = ;
static void raid6_sse12_gen_syndrome(int disks, size_t bytes, void **ptrs)
const struct raid6_calls raid6_sse1x2 = ;
