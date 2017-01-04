#define __DMI_H__
enum dmi_device_type ;
enum dmi_entry_type ;
struct dmi_header ;
struct dmi_device ;
struct dmi_dev_onboard ;
extern int dmi_check_system(const struct dmi_system_id *list);
const struct dmi_system_id *dmi_first_match(const struct dmi_system_id *list);
extern const char * dmi_get_system_info(int field);
extern const struct dmi_device * dmi_find_device(int type, const char *name,
const struct dmi_device *from);
extern void dmi_scan_machine(void);
extern bool dmi_get_date(int field, int *yearp, int *monthp, int *dayp);
extern int dmi_name_in_vendors(const char *str);
extern int dmi_name_in_serial(const char *str);
extern int dmi_available;
extern int dmi_walk(void (*decode)(const struct dmi_header *, void *),
void *private_data);
extern bool dmi_match(enum dmi_field f, const char *str);
static inline int dmi_check_system(const struct dmi_system_id *list)
static inline const char * dmi_get_system_info(int field)
static inline const struct dmi_device * dmi_find_device(int type, const char *name,
const struct dmi_device *from)
static inline void dmi_scan_machine(void)
static inline bool dmi_get_date(int field, int *yearp, int *monthp, int *dayp)
static inline int dmi_name_in_vendors(const char *s)
static inline int dmi_name_in_serial(const char *s)
#define dmi_available 0
static inline int dmi_walk(void (*decode)(const struct dmi_header *, void *),
void *private_data)
static inline bool dmi_match(enum dmi_field f, const char *str)
static inline const struct dmi_system_id *
dmi_first_match(const struct dmi_system_id *list)
