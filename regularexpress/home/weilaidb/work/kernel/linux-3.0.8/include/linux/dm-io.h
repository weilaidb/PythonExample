#define _LINUX_DM_IO_H
struct dm_io_region ;
struct page_list ;
typedef void (*io_notify_fn)(unsigned long error, void *context);
enum dm_io_mem_type ;
struct dm_io_memory ;
struct dm_io_notify ;
struct dm_io_client;
struct dm_io_request ;
struct dm_io_client *dm_io_client_create(void);
void dm_io_client_destroy(struct dm_io_client *client);
int dm_io(struct dm_io_request *io_req, unsigned num_regions,
struct dm_io_region *region, unsigned long *sync_error_bits);
