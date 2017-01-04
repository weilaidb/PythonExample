#define SOUND_FIREWIRE_ISO_RESOURCES_H_INCLUDED
struct fw_unit;
struct fw_iso_resources ;
int fw_iso_resources_init(struct fw_iso_resources *r,
struct fw_unit *unit);
void fw_iso_resources_destroy(struct fw_iso_resources *r);
int fw_iso_resources_allocate(struct fw_iso_resources *r,
unsigned int max_payload_bytes, int speed);
int fw_iso_resources_update(struct fw_iso_resources *r);
void fw_iso_resources_free(struct fw_iso_resources *r);
