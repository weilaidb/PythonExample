#define SCALE_SHIFT 14
static u32 *samples;
int spu_prof_running;
static unsigned int profiling_interval;
#define NUM_SPU_BITS_TRBUF 16
#define SPUS_PER_TB_ENTRY   4
#define SPU_PC_MASK	     0xFFFF
DEFINE_SPINLOCK(oprof_spu_smpl_arry_lck);
unsigned long oprof_spu_smpl_arry_lck_flags;
void set_spu_profiling_frequency(unsigned int freq_khz, unsigned int cycles_reset)
static void spu_pc_extract(int cpu, int entry)
static int cell_spu_pc_collection(int cpu)
static enum hrtimer_restart profile_spus(struct hrtimer *timer)
static struct hrtimer timer;
int start_spu_profiling_cycles(unsigned int cycles_reset)
void start_spu_profiling_events(void)
void stop_spu_profiling_cycles(void)
void stop_spu_profiling_events(void)
