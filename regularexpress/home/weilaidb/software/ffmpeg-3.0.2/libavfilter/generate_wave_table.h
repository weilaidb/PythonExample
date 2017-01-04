#define AVFILTER_GENERATE_WAVE_TABLE_H
enum WaveType ;
void ff_generate_wave_table(enum WaveType wave_type,
enum AVSampleFormat sample_fmt,
void *table, int table_size,
double min, double max, double phase);
