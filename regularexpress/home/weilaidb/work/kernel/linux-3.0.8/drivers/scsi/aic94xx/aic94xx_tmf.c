static int asd_enqueue_internal(struct asd_ascb *ascb,
void (*tasklet_complete)(struct asd_ascb *,
struct done_list_struct *),
void (*timed_out)(unsigned long))
struct tasklet_completion_status ;
#define DECLARE_TCS(tcs) \
struct tasklet_completion_status tcs =
static void asd_clear_nexus_tasklet_complete(struct asd_ascb *ascb,
struct done_list_struct *dl)
static void asd_clear_nexus_timedout(unsigned long data)
#define CLEAR_NEXUS_PRE         \
struct asd_ascb *ascb; \
struct scb *scb; \
int res; \
DECLARE_COMPLETION_ONSTACK(completion); \
DECLARE_TCS(tcs); \
\
ASD_DPRINTK("%s: PRE\n", __func__); \
res = 1;                \
ascb = asd_ascb_alloc_list(asd_ha, &res, GFP_KERNEL); \
if (!ascb)              \
return -ENOMEM; \
\
ascb->completion = &completion; \
ascb->uldd_task = &tcs; \
scb = ascb->scb;        \
scb->header.opcode = CLEAR_NEXUS
#define CLEAR_NEXUS_POST        \
ASD_DPRINTK("%s: POST\n", __func__); \
res = asd_enqueue_internal(ascb, asd_clear_nexus_tasklet_complete, \
asd_clear_nexus_timedout);              \
if (res)                \
goto out_err;   \
ASD_DPRINTK("%s: clear nexus posted, waiting...\n", __func__); \
wait_for_completion(&completion); \
res = tcs.dl_opcode; \
if (res == TC_NO_ERROR) \
res = TMF_RESP_FUNC_COMPLETE;   \
return res; \
out_err:                        \
asd_ascb_free(ascb);    \
return res
int asd_clear_nexus_ha(struct sas_ha_struct *sas_ha)
int asd_clear_nexus_port(struct asd_sas_port *port)
enum clear_nexus_phase ;
static int asd_clear_nexus_I_T(struct domain_device *dev,
enum clear_nexus_phase phase)
int asd_I_T_nexus_reset(struct domain_device *dev)
static int asd_clear_nexus_I_T_L(struct domain_device *dev, u8 *lun)
static int asd_clear_nexus_tag(struct sas_task *task)
static int asd_clear_nexus_index(struct sas_task *task)
static void asd_tmf_timedout(unsigned long data)
static int asd_get_tmf_resp_tasklet(struct asd_ascb *ascb,
struct done_list_struct *dl)
static void asd_tmf_tasklet_complete(struct asd_ascb *ascb,
struct done_list_struct *dl)
static int asd_clear_nexus(struct sas_task *task)
int asd_abort_task(struct sas_task *task)
static int asd_initiate_ssp_tmf(struct domain_device *dev, u8 *lun,
int tmf, int index)
int asd_abort_task_set(struct domain_device *dev, u8 *lun)
int asd_clear_aca(struct domain_device *dev, u8 *lun)
int asd_clear_task_set(struct domain_device *dev, u8 *lun)
int asd_lu_reset(struct domain_device *dev, u8 *lun)
int asd_query_task(struct sas_task *task)
