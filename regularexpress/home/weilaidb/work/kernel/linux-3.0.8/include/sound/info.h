#define __SOUND_INFO_H
struct snd_info_buffer ;
#define SNDRV_INFO_CONTENT_TEXT		0
#define SNDRV_INFO_CONTENT_DATA		1
struct snd_info_entry;
struct snd_info_entry_text ;
struct snd_info_entry_ops ;
struct snd_info_entry ;
#if defined(CONFIG_SND_OSSEMUL) && defined(CONFIG_PROC_FS)
int snd_info_minor_register(void);
int snd_info_minor_unregister(void);
#define snd_info_minor_register()
#define snd_info_minor_unregister()
extern struct snd_info_entry *snd_seq_root;
extern struct snd_info_entry *snd_oss_root;
void snd_card_info_read_oss(struct snd_info_buffer *buffer);
#define snd_oss_root NULL
static inline void snd_card_info_read_oss(struct snd_info_buffer *buffer)
int snd_iprintf(struct snd_info_buffer *buffer, const char *fmt, ...) \
__attribute__ ((format (printf, 2, 3)));
int snd_info_init(void);
int snd_info_done(void);
int snd_info_get_line(struct snd_info_buffer *buffer, char *line, int len);
const char *snd_info_get_str(char *dest, const char *src, int len);
struct snd_info_entry *snd_info_create_module_entry(struct module *module,
const char *name,
struct snd_info_entry *parent);
struct snd_info_entry *snd_info_create_card_entry(struct snd_card *card,
const char *name,
struct snd_info_entry *parent);
void snd_info_free_entry(struct snd_info_entry *entry);
int snd_info_store_text(struct snd_info_entry *entry);
int snd_info_restore_text(struct snd_info_entry *entry);
int snd_info_card_create(struct snd_card *card);
int snd_info_card_register(struct snd_card *card);
int snd_info_card_free(struct snd_card *card);
void snd_info_card_disconnect(struct snd_card *card);
void snd_info_card_id_change(struct snd_card *card);
int snd_info_register(struct snd_info_entry *entry);
int snd_card_proc_new(struct snd_card *card, const char *name,
struct snd_info_entry **entryp);
static inline void snd_info_set_text_ops(struct snd_info_entry *entry,
void *private_data,
void (*read)(struct snd_info_entry *, struct snd_info_buffer *))
int snd_info_check_reserved_words(const char *str);
#define snd_seq_root NULL
#define snd_oss_root NULL
static inline int snd_iprintf(struct snd_info_buffer *buffer, char *fmt, ...)
static inline int snd_info_init(void)
static inline int snd_info_done(void)
static inline int snd_info_get_line(struct snd_info_buffer *buffer, char *line, int len)
static inline char *snd_info_get_str(char *dest, char *src, int len)
static inline struct snd_info_entry *snd_info_create_module_entry(struct module *module, const char *name, struct snd_info_entry *parent)
static inline struct snd_info_entry *snd_info_create_card_entry(struct snd_card *card, const char *name, struct snd_info_entry *parent)
static inline void snd_info_free_entry(struct snd_info_entry *entry)
static inline int snd_info_card_create(struct snd_card *card)
static inline int snd_info_card_register(struct snd_card *card)
static inline int snd_info_card_free(struct snd_card *card)
static inline void snd_info_card_disconnect(struct snd_card *card)
static inline void snd_info_card_id_change(struct snd_card *card)
static inline int snd_info_register(struct snd_info_entry *entry)
static inline int snd_card_proc_new(struct snd_card *card, const char *name,
struct snd_info_entry **entryp)
static inline void snd_info_set_text_ops(struct snd_info_entry *entry __attribute__((unused)),
void *private_data,
void (*read)(struct snd_info_entry *, struct snd_info_buffer *))
static inline int snd_info_check_reserved_words(const char *str)
#if defined(CONFIG_SND_OSSEMUL) && defined(CONFIG_PROC_FS)
#define SNDRV_OSS_INFO_DEV_AUDIO	0
#define SNDRV_OSS_INFO_DEV_SYNTH	1
#define SNDRV_OSS_INFO_DEV_MIDI		2
#define SNDRV_OSS_INFO_DEV_TIMERS	4
#define SNDRV_OSS_INFO_DEV_MIXERS	5
#define SNDRV_OSS_INFO_DEV_COUNT	6
int snd_oss_info_register(int dev, int num, char *string);
#define snd_oss_info_unregister(dev, num) snd_oss_info_register(dev, num, NULL)
