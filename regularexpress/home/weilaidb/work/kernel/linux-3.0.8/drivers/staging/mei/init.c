const uuid_le mei_amthi_guid  = UUID_LE(0x12f80028, 0xb4b7, 0x4b2d, 0xac,
0xa8, 0x46, 0xe0, 0xff, 0x65,
0x81, 0x4c);
void mei_initialize_list(struct mei_io_list *list, struct mei_device *dev)
void mei_flush_queues(struct mei_device *dev, struct mei_cl *cl)
void mei_flush_list(struct mei_io_list *list, struct mei_cl *cl)
static void mei_reset_iamthif_params(struct mei_device *dev)
struct mei_device *init_mei_device(struct pci_dev *pdev)
int mei_hw_init(struct mei_device *dev)
static void mei_hw_reset(struct mei_device *dev, int interrupts_enabled)
void mei_reset(struct mei_device *dev, int interrupts_enabled)
void host_start_message(struct mei_device *dev)
void host_enum_clients_message(struct mei_device *dev)
void allocate_me_clients_storage(struct mei_device *dev)
void host_client_properties(struct mei_device *dev)
void mei_init_file_private(struct mei_cl *priv, struct mei_device *dev)
int mei_find_me_client_index(const struct mei_device *dev, uuid_le cuuid)
u8 mei_find_me_client_update_filext(struct mei_device *dev, struct mei_cl *priv,
const uuid_le *cguid, u8 client_id)
void host_init_iamthif(struct mei_device *dev)
struct mei_cl *mei_alloc_file_private(struct mei_device *dev)
int mei_disconnect_host_client(struct mei_device *dev, struct mei_cl *cl)
void mei_remove_client_from_file_list(struct mei_device *dev,
u8 host_client_id)
