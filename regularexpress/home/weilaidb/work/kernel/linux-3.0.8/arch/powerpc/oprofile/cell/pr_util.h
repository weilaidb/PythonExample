#define PR_UTIL_H
#define SKIP_GENERIC_SYNC 0
#define SYNC_START_ERROR -1
#define DO_GENERIC_SYNC 1
#define SPUS_PER_NODE   8
#define DEFAULT_TIMER_EXPIRE  (HZ / 10)
extern struct delayed_work spu_work;
extern int spu_prof_running;
#define TRACE_ARRAY_SIZE 1024
extern spinlock_t oprof_spu_smpl_arry_lck;
struct spu_overlay_info ;
struct vma_to_fileoffset_map ;
struct spu_buffer ;
struct vma_to_fileoffset_map *create_vma_map(const struct spu *spu,
unsigned long objectid);
unsigned int vma_map_lookup(struct vma_to_fileoffset_map *map,
unsigned int vma, const struct spu *aSpu,
int *grd_val);
void vma_map_free(struct vma_to_fileoffset_map *map);
int start_spu_profiling_cycles(unsigned int cycles_reset);
void start_spu_profiling_events(void);
void stop_spu_profiling_cycles(void);
void stop_spu_profiling_events(void);
int spu_sync_start(void);
int spu_sync_stop(void);
void spu_sync_buffer(int spu_num, unsigned int *samples,
int num_samples);
void set_spu_profiling_frequency(unsigned int freq_khz, unsigned int cycles_reset);
