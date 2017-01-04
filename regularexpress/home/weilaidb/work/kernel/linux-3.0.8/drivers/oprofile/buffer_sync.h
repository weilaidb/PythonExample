#define OPROFILE_BUFFER_SYNC_H
int sync_start(void);
void sync_stop(void);
void sync_buffer(int cpu);
