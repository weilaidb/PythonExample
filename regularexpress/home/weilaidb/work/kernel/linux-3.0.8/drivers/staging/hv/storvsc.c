static inline struct storvsc_device *alloc_stor_device(struct hv_device *device)
static inline void free_stor_device(struct storvsc_device *device)
static inline struct storvsc_device *must_get_stor_device(
struct hv_device *device)
static inline struct storvsc_device *release_stor_device(
struct hv_device *device)
static inline struct storvsc_device *final_release_stor_device(
struct hv_device *device)
static int storvsc_channel_init(struct hv_device *device)
static void storvsc_on_io_completion(struct hv_device *device,
struct vstor_packet *vstor_packet,
struct hv_storvsc_request *request)
static void storvsc_on_receive(struct hv_device *device,
struct vstor_packet *vstor_packet,
struct hv_storvsc_request *request)
static void storvsc_on_channel_callback(void *context)
static int storvsc_connect_to_vsp(struct hv_device *device, u32 ring_size)
int storvsc_dev_add(struct hv_device *device,
void *additional_info)
int storvsc_dev_remove(struct hv_device *device)
int storvsc_do_io(struct hv_device *device,
struct hv_storvsc_request *request)
int storvsc_get_major_info(struct storvsc_device_info *device_info,
struct storvsc_major_info *major_info)
