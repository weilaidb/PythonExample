int hpi_debug_level = HPI_DEBUG_LEVEL_DEFAULT;
void hpi_debug_init(void)
int hpi_debug_level_set(int level)
int hpi_debug_level_get(void)
void hpi_debug_message(struct hpi_message *phm, char *sz_fileline)
void hpi_debug_data(u16 *pdata, u32 len)
