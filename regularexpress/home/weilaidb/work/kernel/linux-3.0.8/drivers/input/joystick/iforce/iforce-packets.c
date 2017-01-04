static struct  iforce_hat_to_axis[16] = ;
void iforce_dump_packet(char *msg, u16 cmd, unsigned char *data)
int iforce_send_packet(struct iforce *iforce, u16 cmd, unsigned char* data)
int iforce_control_playback(struct iforce* iforce, u16 id, unsigned int value)
static int mark_core_as_ready(struct iforce *iforce, unsigned short addr)
void iforce_process_packet(struct iforce *iforce, u16 cmd, unsigned char *data)
int iforce_get_id_packet(struct iforce *iforce, char *packet)
