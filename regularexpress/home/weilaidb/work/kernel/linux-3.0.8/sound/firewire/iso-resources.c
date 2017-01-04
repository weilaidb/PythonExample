int fw_iso_resources_init(struct fw_iso_resources *r, struct fw_unit *unit)
EXPORT_SYMBOL(fw_iso_resources_init);
void fw_iso_resources_destroy(struct fw_iso_resources *r)
EXPORT_SYMBOL(fw_iso_resources_destroy);
static unsigned int packet_bandwidth(unsigned int max_payload_bytes, int speed)
static int current_bandwidth_overhead(struct fw_card *card)
static int wait_isoch_resource_delay_after_bus_reset(struct fw_card *card)
int fw_iso_resources_allocate(struct fw_iso_resources *r,
unsigned int max_payload_bytes, int speed)
EXPORT_SYMBOL(fw_iso_resources_allocate);
int fw_iso_resources_update(struct fw_iso_resources *r)
EXPORT_SYMBOL(fw_iso_resources_update);
void fw_iso_resources_free(struct fw_iso_resources *r)
EXPORT_SYMBOL(fw_iso_resources_free);
