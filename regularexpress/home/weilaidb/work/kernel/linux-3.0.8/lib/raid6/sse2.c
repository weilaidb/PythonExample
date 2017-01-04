#if (defined(__i386__) || defined(__x86_64__)) && !defined(__arch_um__)
static const struct raid6_sse_constants  raid6_sse_constants  __attribute__((aligned(16))) = ;
static int raid6_have_sse2(void)
static void raid6_sse21_gen_syndrome(int disks, size_t bytes, void **ptrs)
const struct raid6_calls raid6_sse2x1 = ;
static void raid6_sse22_gen_syndrome(int disks, size_t bytes, void **ptrs)
const struct raid6_calls raid6_sse2x2 = ;
#if defined(__x86_64__) && !defined(__arch_um__)
static void raid6_sse24_gen_syndrome(int disks, size_t bytes, void **ptrs)
const struct raid6_calls raid6_sse2x4 = ;
