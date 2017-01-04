#define pr_fmt(fmt) KBUILD_MODNAME ":" fmt
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("CAIF Shared Memory protocol driver");
#define MAX_SHM_INSTANCES	1
enum ;
static struct shmdev_layer shmdev_lyr[MAX_SHM_INSTANCES];
static unsigned int shm_start;
static unsigned int shm_size;
module_param(shm_size, uint  , 0440);
MODULE_PARM_DESC(shm_total_size, "Start of SHM shared memory");
module_param(shm_start, uint  , 0440);
MODULE_PARM_DESC(shm_total_start, "Total Size of SHM shared memory");
static int shmdev_send_msg(u32 dev_id, u32 mbx_msg)
static int shmdev_mbx_setup(void *pshmdrv_cb, struct shmdev_layer *pshm_dev,
void *pshm_drv)
static int __init caif_shmdev_init(void)
static void __exit caif_shmdev_exit(void)
module_init(caif_shmdev_init);
module_exit(caif_shmdev_exit);
