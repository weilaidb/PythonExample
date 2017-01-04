#define _H_LPFC_VPORT
#define VPORT_API_VERSION_1	0x01
struct vport_info ;
struct vport_data ;
#define VPORT_OK	0
#define VPORT_ERROR	-1
#define VPORT_INVAL	-2
#define VPORT_NOMEM	-3
#define VPORT_NORESOURCES	-4
int lpfc_vport_create(struct fc_vport *, bool);
int lpfc_vport_delete(struct fc_vport *);
int lpfc_vport_getinfo(struct Scsi_Host *, struct vport_info *);
int lpfc_vport_tgt_remove(struct Scsi_Host *, uint, uint);
struct lpfc_vport **lpfc_create_vport_work_array(struct lpfc_hba *);
void lpfc_destroy_vport_work_array(struct lpfc_hba *, struct lpfc_vport **);
#define  DID_VPORT_ERROR	0x0f
#define VPORT_INFO	0x1
#define VPORT_CREATE	0x2
#define VPORT_DELETE	0x4
struct vport_cmd_tag ;
void lpfc_vport_set_state(struct lpfc_vport *vport,
enum fc_vport_state new_state);
void lpfc_vport_reset_stat_data(struct lpfc_vport *);
void lpfc_alloc_bucket(struct lpfc_vport *);
void lpfc_free_bucket(struct lpfc_vport *);
