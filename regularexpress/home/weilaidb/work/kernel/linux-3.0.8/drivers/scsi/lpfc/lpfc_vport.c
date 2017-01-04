inline void lpfc_vport_set_state(struct lpfc_vport *vport,
enum fc_vport_state new_state)
static int
lpfc_alloc_vpi(struct lpfc_hba *phba)
static void
lpfc_free_vpi(struct lpfc_hba *phba, int vpi)
static int
lpfc_vport_sparm(struct lpfc_hba *phba, struct lpfc_vport *vport)
static int
lpfc_valid_wwn_format(struct lpfc_hba *phba, struct lpfc_name *wwn,
const char *name_type)
static int
lpfc_unique_wwpn(struct lpfc_hba *phba, struct lpfc_vport *new_vport)
static void lpfc_discovery_wait(struct lpfc_vport *vport)
int
lpfc_vport_create(struct fc_vport *fc_vport, bool disable)
static int
disable_vport(struct fc_vport *fc_vport)
static int
enable_vport(struct fc_vport *fc_vport)
int
lpfc_vport_disable(struct fc_vport *fc_vport, bool disable)
int
lpfc_vport_delete(struct fc_vport *fc_vport)
struct lpfc_vport **
lpfc_create_vport_work_array(struct lpfc_hba *phba)
void
lpfc_destroy_vport_work_array(struct lpfc_hba *phba, struct lpfc_vport **vports)
void
lpfc_vport_reset_stat_data(struct lpfc_vport *vport)
void
lpfc_alloc_bucket(struct lpfc_vport *vport)
void
lpfc_free_bucket(struct lpfc_vport *vport)
