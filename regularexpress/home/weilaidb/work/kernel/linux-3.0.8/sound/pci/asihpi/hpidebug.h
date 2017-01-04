#define _HPIDEBUG_H
enum ;
#define HPI_DEBUG_LEVEL_DEFAULT HPI_DEBUG_LEVEL_NOTICE
#define FILE_LINE  SOURCEFILE_NAME ":" __stringify(__LINE__) " "
#define FILE_LINE  __FILE__ ":" __stringify(__LINE__) " "
#define HPI_DEBUG_ASSERT(expression) \
do  while (0)
#define HPI_DEBUG_LOG(level, ...) \
do  while (0)
void hpi_debug_init(void);
int hpi_debug_level_set(int level);
int hpi_debug_level_get(void);
extern int hpi_debug_level;
void hpi_debug_message(struct hpi_message *phm, char *sz_fileline);
void hpi_debug_data(u16 *pdata, u32 len);
#define HPI_DEBUG_DATA(pdata, len) \
do  while (0)
#define HPI_DEBUG_MESSAGE(level, phm) \
do  while (0)
#define HPI_DEBUG_RESPONSE(phr) \
do  while (0)
#define compile_time_assert(cond, msg) \
typedef char msg[(cond) ? 1 : -1]
