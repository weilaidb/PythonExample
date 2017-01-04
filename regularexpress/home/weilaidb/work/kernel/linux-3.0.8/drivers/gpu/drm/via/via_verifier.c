typedef enum  verifier_state_t;
typedef enum  hazard_t;
static drm_via_sequence_t seqs[] = ;
typedef struct  hz_init_t;
static hz_init_t init_table1[] = ;
static hz_init_t init_table2[] = ;
static hz_init_t init_table3[] = ;
static hazard_t table1[256];
static hazard_t table2[256];
static hazard_t table3[256];
static __inline__ int
eat_words(const uint32_t **buf, const uint32_t *buf_end, unsigned num_words)
static __inline__ drm_local_map_t *via_drm_lookup_agp_map(drm_via_state_t *seq,
unsigned long offset,
unsigned long size,
struct drm_device *dev)
static __inline__ int finish_current_sequence(drm_via_state_t * cur_seq)
static __inline__ int
investigate_hazard(uint32_t cmd, hazard_t hz, drm_via_state_t *cur_seq)
static __inline__ int
via_check_prim_list(uint32_t const **buffer, const uint32_t * buf_end,
drm_via_state_t *cur_seq)
static __inline__ verifier_state_t
via_check_header2(uint32_t const **buffer, const uint32_t *buf_end,
drm_via_state_t *hc_state)
static __inline__ verifier_state_t
via_parse_header2(drm_via_private_t *dev_priv, uint32_t const **buffer,
const uint32_t *buf_end, int *fire_count)
static __inline__ int verify_mmio_address(uint32_t address)
static __inline__ int
verify_video_tail(uint32_t const **buffer, const uint32_t * buf_end,
uint32_t dwords)
static __inline__ verifier_state_t
via_check_header1(uint32_t const **buffer, const uint32_t * buf_end)
static __inline__ verifier_state_t
via_parse_header1(drm_via_private_t *dev_priv, uint32_t const **buffer,
const uint32_t *buf_end)
static __inline__ verifier_state_t
via_check_vheader5(uint32_t const **buffer, const uint32_t *buf_end)
static __inline__ verifier_state_t
via_parse_vheader5(drm_via_private_t *dev_priv, uint32_t const **buffer,
const uint32_t *buf_end)
static __inline__ verifier_state_t
via_check_vheader6(uint32_t const **buffer, const uint32_t * buf_end)
static __inline__ verifier_state_t
via_parse_vheader6(drm_via_private_t *dev_priv, uint32_t const **buffer,
const uint32_t *buf_end)
int
via_verify_command_stream(const uint32_t * buf, unsigned int size,
struct drm_device * dev, int agp)
int
via_parse_command_stream(struct drm_device *dev, const uint32_t *buf,
unsigned int size)
static void
setup_hazard_table(hz_init_t init_table[], hazard_t table[], int size)
void via_init_command_verifier(void)
