struct fc_lport *libfc_vport_create(struct fc_vport *vport, int privsize)
EXPORT_SYMBOL(libfc_vport_create);
struct fc_lport *fc_vport_id_lookup(struct fc_lport *n_port, u32 port_id)
EXPORT_SYMBOL(fc_vport_id_lookup);
enum libfc_lport_mutex_class ;
static void __fc_vport_setlink(struct fc_lport *n_port,
struct fc_lport *vn_port)
void fc_vport_setlink(struct fc_lport *vn_port)
EXPORT_SYMBOL(fc_vport_setlink);
void fc_vports_linkchange(struct fc_lport *n_port)
