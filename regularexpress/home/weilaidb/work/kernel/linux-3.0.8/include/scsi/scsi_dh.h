enum ;
#if defined(CONFIG_SCSI_DH) || defined(CONFIG_SCSI_DH_MODULE)
extern int scsi_dh_activate(struct request_queue *, activate_complete, void *);
extern int scsi_dh_handler_exist(const char *);
extern int scsi_dh_attach(struct request_queue *, const char *);
extern void scsi_dh_detach(struct request_queue *);
extern int scsi_dh_set_params(struct request_queue *, const char *);
static inline int scsi_dh_activate(struct request_queue *req,
activate_complete fn, void *data)
static inline int scsi_dh_handler_exist(const char *name)
static inline int scsi_dh_attach(struct request_queue *req, const char *name)
static inline void scsi_dh_detach(struct request_queue *q)
static inline int scsi_dh_set_params(struct request_queue *req, const char *params)
