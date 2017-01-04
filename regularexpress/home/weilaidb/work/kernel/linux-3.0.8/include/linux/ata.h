#define __LINUX_ATA_H__
#define ATA_DMA_BOUNDARY	0xffffUL
#define ATA_DMA_MASK		0xffffffffULL
enum ;
enum ata_tf_protocols ;
enum ata_ioctls ;
struct ata_bmdma_prd ;
struct ata_taskfile ;
static inline unsigned int ata_prot_flags(u8 prot)
static inline int ata_is_atapi(u8 prot)
static inline int ata_is_nodata(u8 prot)
static inline int ata_is_pio(u8 prot)
static inline int ata_is_dma(u8 prot)
static inline int ata_is_ncq(u8 prot)
static inline int ata_is_data(u8 prot)
#define ata_id_is_ata(id)	(((id)[ATA_ID_CONFIG] & (1 << 15)) == 0)
#define ata_id_has_lba(id)	((id)[ATA_ID_CAPABILITY] & (1 << 9))
#define ata_id_has_dma(id)	((id)[ATA_ID_CAPABILITY] & (1 << 8))
#define ata_id_has_ncq(id)	((id)[76] & (1 << 8))
#define ata_id_queue_depth(id)	(((id)[ATA_ID_QUEUE_DEPTH] & 0x1f) + 1)
#define ata_id_removeable(id)	((id)[ATA_ID_CONFIG] & (1 << 7))
#define ata_id_has_atapi_AN(id)	\
( (((id)[76] != 0x0000) && ((id)[76] != 0xffff)) && \
((id)[78] & (1 << 5)) )
#define ata_id_has_fpdma_aa(id)	\
( (((id)[76] != 0x0000) && ((id)[76] != 0xffff)) && \
((id)[78] & (1 << 2)) )
#define ata_id_iordy_disable(id) ((id)[ATA_ID_CAPABILITY] & (1 << 10))
#define ata_id_has_iordy(id) ((id)[ATA_ID_CAPABILITY] & (1 << 11))
#define ata_id_u32(id,n)	\
(((u32) (id)[(n) + 1] << 16) | ((u32) (id)[(n)]))
#define ata_id_u64(id,n)	\
( ((u64) (id)[(n) + 3] << 48) |	\
((u64) (id)[(n) + 2] << 32) |	\
((u64) (id)[(n) + 1] << 16) |	\
((u64) (id)[(n) + 0]) )
#define ata_id_cdb_intr(id)	(((id)[ATA_ID_CONFIG] & 0x60) == 0x20)
static inline bool ata_id_has_hipm(const u16 *id)
static inline bool ata_id_has_dipm(const u16 *id)
static inline bool ata_id_has_fua(const u16 *id)
static inline bool ata_id_has_flush(const u16 *id)
static inline bool ata_id_flush_enabled(const u16 *id)
static inline bool ata_id_has_flush_ext(const u16 *id)
static inline bool ata_id_flush_ext_enabled(const u16 *id)
static inline u32 ata_id_logical_sector_size(const u16 *id)
static inline u8 ata_id_log2_per_physical_sector(const u16 *id)
static inline u16 ata_id_logical_sector_offset(const u16 *id,
u8 log2_per_phys)
static inline bool ata_id_has_lba48(const u16 *id)
static inline bool ata_id_lba48_enabled(const u16 *id)
static inline bool ata_id_hpa_enabled(const u16 *id)
static inline bool ata_id_has_wcache(const u16 *id)
static inline bool ata_id_has_pm(const u16 *id)
static inline bool ata_id_rahead_enabled(const u16 *id)
static inline bool ata_id_wcache_enabled(const u16 *id)
static inline unsigned int ata_id_major_version(const u16 *id)
static inline bool ata_id_is_sata(const u16 *id)
static inline bool ata_id_has_tpm(const u16 *id)
static inline bool ata_id_has_dword_io(const u16 *id)
static inline bool ata_id_has_unload(const u16 *id)
static inline bool ata_id_has_wwn(const u16 *id)
static inline int ata_id_form_factor(const u16 *id)
static inline int ata_id_rotation_rate(const u16 *id)
static inline bool ata_id_has_trim(const u16 *id)
static inline bool ata_id_has_zero_after_trim(const u16 *id)
static inline bool ata_id_current_chs_valid(const u16 *id)
static inline bool ata_id_is_cfa(const u16 *id)
static inline bool ata_id_is_ssd(const u16 *id)
static inline bool ata_id_pio_need_iordy(const u16 *id, const u8 pio)
static inline bool ata_drive_40wire(const u16 *dev_id)
static inline bool ata_drive_40wire_relaxed(const u16 *dev_id)
static inline int atapi_cdb_len(const u16 *dev_id)
static inline bool atapi_command_packet_set(const u16 *dev_id)
static inline bool atapi_id_dmadir(const u16 *dev_id)
static inline bool ata_id_is_lba_capacity_ok(u16 *id)
static inline void ata_id_to_hd_driveid(u16 *id)
static inline unsigned ata_set_lba_range_entries(void *_buffer,
unsigned buf_size, u64 sector, unsigned long count)
static inline int is_multi_taskfile(struct ata_taskfile *tf)
static inline bool ata_ok(u8 status)
static inline bool lba_28_ok(u64 block, u32 n_block)
static inline bool lba_48_ok(u64 block, u32 n_block)
#define sata_pmp_gscr_vendor(gscr)	((gscr)[SATA_PMP_GSCR_PROD_ID] & 0xffff)
#define sata_pmp_gscr_devid(gscr)	((gscr)[SATA_PMP_GSCR_PROD_ID] >> 16)
#define sata_pmp_gscr_rev(gscr)		(((gscr)[SATA_PMP_GSCR_REV] >> 8) & 0xff)
#define sata_pmp_gscr_ports(gscr)	((gscr)[SATA_PMP_GSCR_PORT_INFO] & 0xf)
