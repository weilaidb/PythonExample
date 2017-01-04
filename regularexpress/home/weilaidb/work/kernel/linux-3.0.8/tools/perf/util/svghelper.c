static u64 first_time, last_time;
static u64 turbo_frequency, max_freq;
#define SLOT_MULT 30.0
#define SLOT_HEIGHT 25.0
int svg_page_width = 1000;
#define MIN_TEXT_SIZE 0.01
static u64 total_height;
static FILE *svgfile;
static double cpu2slot(int cpu)
static double cpu2y(int cpu)
static double time2pixels(u64 __time)
static double round_text_size(double size)
void open_svg(const char *filename, int cpus, int rows, u64 start, u64 end)
void svg_box(int Yslot, u64 start, u64 end, const char *type)
void svg_sample(int Yslot, int cpu, u64 start, u64 end)
static char *time_to_string(u64 duration)
void svg_waiting(int Yslot, u64 start, u64 end)
static char *cpu_model(void)
void svg_cpu_box(int cpu, u64 __max_freq, u64 __turbo_freq)
void svg_process(int cpu, u64 start, u64 end, const char *type, const char *name)
void svg_cstate(int cpu, u64 start, u64 end, int type)
static char *HzToHuman(unsigned long hz)
void svg_pstate(int cpu, u64 start, u64 end, u64 freq)
void svg_partial_wakeline(u64 start, int row1, char *desc1, int row2, char *desc2)
void svg_wakeline(u64 start, int row1, int row2)
void svg_interrupt(u64 start, int row)
void svg_text(int Yslot, u64 start, const char *text)
static void svg_legenda_box(int X, const char *text, const char *style)
void svg_legenda(void)
void svg_time_grid(void)
void svg_close(void)
