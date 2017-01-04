#define SOUND_FIREWIRE_CMP_H_INCLUDED
struct fw_unit;
struct cmp_connection ;
int cmp_connection_init(struct cmp_connection *connection,
struct fw_unit *unit,
unsigned int ipcr_index);
void cmp_connection_destroy(struct cmp_connection *connection);
int cmp_connection_establish(struct cmp_connection *connection,
unsigned int max_payload);
int cmp_connection_update(struct cmp_connection *connection);
void cmp_connection_break(struct cmp_connection *connection);
