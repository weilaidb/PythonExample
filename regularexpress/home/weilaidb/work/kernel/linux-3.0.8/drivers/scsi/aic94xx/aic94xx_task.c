static void asd_unbuild_ata_ascb(struct asd_ascb *a);
static void asd_unbuild_smp_ascb(struct asd_ascb *a);
static void asd_unbuild_ssp_ascb(struct asd_ascb *a);
static void asd_can_dequeue(struct asd_ha_struct *asd_ha, int num)
static const u8 data_dir_flags[] = ;
static int asd_map_scatterlist(struct sas_task *task,
struct sg_el *sg_arr,
gfp_t gfp_flags)
static void asd_unmap_scatterlist(struct asd_ascb *ascb)
static void asd_get_response_tasklet(struct asd_ascb *ascb,
struct done_list_struct *dl)
static void asd_task_tasklet_complete(struct asd_ascb *ascb,
struct done_list_struct *dl)
static int asd_build_ata_ascb(struct asd_ascb *ascb, struct sas_task *task,
gfp_t gfp_flags)
static void asd_unbuild_ata_ascb(struct asd_ascb *a)
static int asd_build_smp_ascb(struct asd_ascb *ascb, struct sas_task *task,
gfp_t gfp_flags)
static void asd_unbuild_smp_ascb(struct asd_ascb *a)
static int asd_build_ssp_ascb(struct asd_ascb *ascb, struct sas_task *task,
gfp_t gfp_flags)
static void asd_unbuild_ssp_ascb(struct asd_ascb *a)
static int asd_can_queue(struct asd_ha_struct *asd_ha, int num)
int asd_execute_task(struct sas_task *task, const int num,
gfp_t gfp_flags)
