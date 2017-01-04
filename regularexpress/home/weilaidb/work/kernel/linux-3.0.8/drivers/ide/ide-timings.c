static struct ide_timing ide_timing[] = ;
struct ide_timing *ide_timing_find_mode(u8 speed)
EXPORT_SYMBOL_GPL(ide_timing_find_mode);
u16 ide_pio_cycle_time(ide_drive_t *drive, u8 pio)
EXPORT_SYMBOL_GPL(ide_pio_cycle_time);
#define ENOUGH(v, unit)		(((v) - 1) / (unit) + 1)
#define EZ(v, unit)		((v) ? ENOUGH(v, unit) : 0)
static void ide_timing_quantize(struct ide_timing *t, struct ide_timing *q,
int T, int UT)
void ide_timing_merge(struct ide_timing *a, struct ide_timing *b,
struct ide_timing *m, unsigned int what)
EXPORT_SYMBOL_GPL(ide_timing_merge);
int ide_timing_compute(ide_drive_t *drive, u8 speed,
struct ide_timing *t, int T, int UT)
EXPORT_SYMBOL_GPL(ide_timing_compute);
