struct nvs_page ;
static LIST_HEAD(nvs_list);
int suspend_nvs_register(unsigned long start, unsigned long size)
void suspend_nvs_free(void)
int suspend_nvs_alloc(void)
int suspend_nvs_save(void)
void suspend_nvs_restore(void)
