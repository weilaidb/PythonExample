# include "boot.h"
struct cpu_features cpu;
static u32 cpu_vendor[3];
static u32 err_flags[NCAPINTS];
static const int req_level = CONFIG_X86_MINIMUM_CPU_FAMILY;
static const u32 req_flags[NCAPINTS] =
;
#define A32(a, b, c, d) (((d) << 24)+((c) << 16)+((b) << 8)+(a))
static int is_amd(void)
static int is_centaur(void)
static int is_transmeta(void)
static int has_fpu(void)
static int has_eflag(u32 mask)
static void get_flags(void)
static int check_flags(void)
int check_cpu(int *cpu_level_ptr, int *req_level_ptr, u32 **err_flags_ptr)
