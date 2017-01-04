#define SOURCEFILE_NAME "hpimsgx.c"
static struct pci_device_id asihpi_pci_tbl[] = ;
static struct hpios_spinlock msgx_lock;
static hpi_handler_func *hpi_entry_points[HPI_MAX_ADAPTERS];
static hpi_handler_func *hpi_lookup_entry_point_function(const struct hpi_pci
*pci_info)
static inline void hw_entry_point(struct hpi_message *phm,
struct hpi_response *phr)
static void adapter_open(struct hpi_message *phm, struct hpi_response *phr);
static void adapter_close(struct hpi_message *phm, struct hpi_response *phr);
static void mixer_open(struct hpi_message *phm, struct hpi_response *phr);
static void mixer_close(struct hpi_message *phm, struct hpi_response *phr);
static void outstream_open(struct hpi_message *phm, struct hpi_response *phr,
void *h_owner);
static void outstream_close(struct hpi_message *phm, struct hpi_response *phr,
void *h_owner);
static void instream_open(struct hpi_message *phm, struct hpi_response *phr,
void *h_owner);
static void instream_close(struct hpi_message *phm, struct hpi_response *phr,
void *h_owner);
static void HPIMSGX__reset(u16 adapter_index);
static u16 HPIMSGX__init(struct hpi_message *phm, struct hpi_response *phr);
static void HPIMSGX__cleanup(u16 adapter_index, void *h_owner);
struct hpi_subsys_response ;
struct hpi_adapter_response ;
struct hpi_mixer_response ;
struct hpi_stream_response ;
struct adapter_info ;
struct asi_open_state ;
static struct hpi_adapter_response rESP_HPI_ADAPTER_OPEN[HPI_MAX_ADAPTERS];
static struct hpi_stream_response
rESP_HPI_OSTREAM_OPEN[HPI_MAX_ADAPTERS][HPI_MAX_STREAMS];
static struct hpi_stream_response
rESP_HPI_ISTREAM_OPEN[HPI_MAX_ADAPTERS][HPI_MAX_STREAMS];
static struct hpi_mixer_response rESP_HPI_MIXER_OPEN[HPI_MAX_ADAPTERS];
static struct adapter_info aDAPTER_INFO[HPI_MAX_ADAPTERS];
static struct asi_open_state
outstream_user_open[HPI_MAX_ADAPTERS][HPI_MAX_STREAMS];
static struct asi_open_state
instream_user_open[HPI_MAX_ADAPTERS][HPI_MAX_STREAMS];
static void subsys_message(struct hpi_message *phm, struct hpi_response *phr,
void *h_owner)
static void adapter_message(struct hpi_message *phm, struct hpi_response *phr,
void *h_owner)
static void mixer_message(struct hpi_message *phm, struct hpi_response *phr)
static void outstream_message(struct hpi_message *phm,
struct hpi_response *phr, void *h_owner)
static void instream_message(struct hpi_message *phm,
struct hpi_response *phr, void *h_owner)
void hpi_send_recv_ex(struct hpi_message *phm, struct hpi_response *phr,
void *h_owner)
static void adapter_open(struct hpi_message *phm, struct hpi_response *phr)
static void adapter_close(struct hpi_message *phm, struct hpi_response *phr)
static void mixer_open(struct hpi_message *phm, struct hpi_response *phr)
static void mixer_close(struct hpi_message *phm, struct hpi_response *phr)
static void instream_open(struct hpi_message *phm, struct hpi_response *phr,
void *h_owner)
static void instream_close(struct hpi_message *phm, struct hpi_response *phr,
void *h_owner)
static void outstream_open(struct hpi_message *phm, struct hpi_response *phr,
void *h_owner)
static void outstream_close(struct hpi_message *phm, struct hpi_response *phr,
void *h_owner)
static u16 adapter_prepare(u16 adapter)
static void HPIMSGX__reset(u16 adapter_index)
static u16 HPIMSGX__init(struct hpi_message *phm,
struct hpi_response *phr
)
static void HPIMSGX__cleanup(u16 adapter_index, void *h_owner)
