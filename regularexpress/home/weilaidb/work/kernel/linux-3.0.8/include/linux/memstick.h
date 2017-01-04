#define _MEMSTICK_H
struct ms_status_register  __attribute__((packed));
struct ms_id_register  __attribute__((packed));
struct ms_param_register  __attribute__((packed));
struct ms_extra_data_register  __attribute__((packed));
struct ms_register  __attribute__((packed));
struct mspro_param_register  __attribute__((packed));
struct mspro_io_info_register  __attribute__((packed));
struct mspro_io_func_register  __attribute__((packed));
struct mspro_io_cmd_register  __attribute__((packed));
struct mspro_register  __attribute__((packed));
struct ms_register_addr  __attribute__((packed));
enum memstick_tpc ;
enum memstick_command ;
enum memstick_param ;
#define MEMSTICK_POWER_OFF 0
#define MEMSTICK_POWER_ON  1
#define MEMSTICK_SERIAL   0
#define MEMSTICK_PAR4     1
#define MEMSTICK_PAR8     2
struct memstick_host;
struct memstick_driver;
struct memstick_device_id ;
struct memstick_request ;
struct memstick_dev ;
struct memstick_host ;
struct memstick_driver ;
int memstick_register_driver(struct memstick_driver *drv);
void memstick_unregister_driver(struct memstick_driver *drv);
struct memstick_host *memstick_alloc_host(unsigned int extra,
struct device *dev);
int memstick_add_host(struct memstick_host *host);
void memstick_remove_host(struct memstick_host *host);
void memstick_free_host(struct memstick_host *host);
void memstick_detect_change(struct memstick_host *host);
void memstick_suspend_host(struct memstick_host *host);
void memstick_resume_host(struct memstick_host *host);
void memstick_init_req_sg(struct memstick_request *mrq, unsigned char tpc,
const struct scatterlist *sg);
void memstick_init_req(struct memstick_request *mrq, unsigned char tpc,
const void *buf, size_t length);
int memstick_next_req(struct memstick_host *host,
struct memstick_request **mrq);
void memstick_new_req(struct memstick_host *host);
int memstick_set_rw_addr(struct memstick_dev *card);
static inline void *memstick_priv(struct memstick_host *host)
static inline void *memstick_get_drvdata(struct memstick_dev *card)
static inline void memstick_set_drvdata(struct memstick_dev *card, void *data)
