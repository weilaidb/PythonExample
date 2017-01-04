#define EFX_SPI_VERIFY_BUF_LEN 16
struct efx_mtd_partition ;
struct efx_mtd_ops ;
struct efx_mtd ;
#define efx_for_each_partition(part, efx_mtd)			\
for ((part) = &(efx_mtd)->part[0];			\
(part) != &(efx_mtd)->part[(efx_mtd)->n_parts];	\
(part)++)
#define to_efx_mtd_partition(mtd)				\
container_of(mtd, struct efx_mtd_partition, mtd)
static int falcon_mtd_probe(struct efx_nic *efx);
static int siena_mtd_probe(struct efx_nic *efx);
static int
efx_spi_slow_wait(struct efx_mtd_partition *part, bool uninterruptible)
static int
efx_spi_unlock(struct efx_nic *efx, const struct efx_spi_device *spi)
static int
efx_spi_erase(struct efx_mtd_partition *part, loff_t start, size_t len)
static int efx_mtd_erase(struct mtd_info *mtd, struct erase_info *erase)
static void efx_mtd_sync(struct mtd_info *mtd)
static void efx_mtd_remove_partition(struct efx_mtd_partition *part)
static void efx_mtd_remove_device(struct efx_mtd *efx_mtd)
static void efx_mtd_rename_device(struct efx_mtd *efx_mtd)
static int efx_mtd_probe_device(struct efx_nic *efx, struct efx_mtd *efx_mtd)
void efx_mtd_remove(struct efx_nic *efx)
void efx_mtd_rename(struct efx_nic *efx)
int efx_mtd_probe(struct efx_nic *efx)
static int falcon_mtd_read(struct mtd_info *mtd, loff_t start,
size_t len, size_t *retlen, u8 *buffer)
static int falcon_mtd_erase(struct mtd_info *mtd, loff_t start, size_t len)
static int falcon_mtd_write(struct mtd_info *mtd, loff_t start,
size_t len, size_t *retlen, const u8 *buffer)
static int falcon_mtd_sync(struct mtd_info *mtd)
static struct efx_mtd_ops falcon_mtd_ops = ;
static int falcon_mtd_probe(struct efx_nic *efx)
static int siena_mtd_read(struct mtd_info *mtd, loff_t start,
size_t len, size_t *retlen, u8 *buffer)
static int siena_mtd_erase(struct mtd_info *mtd, loff_t start, size_t len)
static int siena_mtd_write(struct mtd_info *mtd, loff_t start,
size_t len, size_t *retlen, const u8 *buffer)
static int siena_mtd_sync(struct mtd_info *mtd)
static struct efx_mtd_ops siena_mtd_ops = ;
struct siena_nvram_type_info ;
static struct siena_nvram_type_info siena_nvram_types[] = ;
static int siena_mtd_probe_partition(struct efx_nic *efx,
struct efx_mtd *efx_mtd,
unsigned int part_id,
unsigned int type)
static int siena_mtd_get_fw_subtypes(struct efx_nic *efx,
struct efx_mtd *efx_mtd)
static int siena_mtd_probe(struct efx_nic *efx)
