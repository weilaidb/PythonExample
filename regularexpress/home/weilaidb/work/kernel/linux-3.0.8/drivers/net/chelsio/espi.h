#define _CXGB_ESPI_H_
struct espi_intr_counts ;
struct peespi;
struct peespi *t1_espi_create(adapter_t *adapter);
void t1_espi_destroy(struct peespi *espi);
int t1_espi_init(struct peespi *espi, int mac_type, int nports);
void t1_espi_intr_enable(struct peespi *);
void t1_espi_intr_clear(struct peespi *);
void t1_espi_intr_disable(struct peespi *);
int t1_espi_intr_handler(struct peespi *);
const struct espi_intr_counts *t1_espi_get_intr_counts(struct peespi *espi);
u32 t1_espi_get_mon(adapter_t *adapter, u32 addr, u8 wait);
int t1_espi_get_mon_t204(adapter_t *, u32 *, u8);
