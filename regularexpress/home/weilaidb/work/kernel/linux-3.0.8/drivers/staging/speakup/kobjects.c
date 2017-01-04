static ssize_t chars_chartab_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static void report_char_chartab_status(int reset, int received, int used,
int rejected, int do_characters)
static ssize_t chars_chartab_store(struct kobject *kobj,
struct kobj_attribute *attr, const char *buf, size_t count)
static ssize_t keymap_show(struct kobject *kobj, struct kobj_attribute *attr,
char *buf)
static ssize_t keymap_store(struct kobject *kobj, struct kobj_attribute *attr,
const char *buf, size_t count)
static ssize_t silent_store(struct kobject *kobj, struct kobj_attribute *attr,
const char *buf, size_t count)
static ssize_t synth_show(struct kobject *kobj, struct kobj_attribute *attr,
char *buf)
static ssize_t synth_store(struct kobject *kobj, struct kobj_attribute *attr,
const char *buf, size_t count)
static ssize_t synth_direct_store(struct kobject *kobj,
struct kobj_attribute *attr, const char *buf, size_t count)
static ssize_t version_show(struct kobject *kobj, struct kobj_attribute *attr,
char *buf)
static ssize_t punc_show(struct kobject *kobj, struct kobj_attribute *attr,
char *buf)
static ssize_t punc_store(struct kobject *kobj, struct kobj_attribute *attr,
const char *buf, size_t count)
ssize_t spk_var_show(struct kobject *kobj, struct kobj_attribute *attr,
char *buf)
EXPORT_SYMBOL_GPL(spk_var_show);
ssize_t spk_var_store(struct kobject *kobj, struct kobj_attribute *attr,
const char *buf, size_t count)
EXPORT_SYMBOL_GPL(spk_var_store);
static ssize_t message_show_helper(char *buf, enum msg_index_t first,
enum msg_index_t last)
static void report_msg_status(int reset, int received, int used,
int rejected, char *groupname)
static ssize_t message_store_helper(const char *buf, size_t count,
struct msg_group_t *group)
static ssize_t message_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t message_store(struct kobject *kobj, struct kobj_attribute *attr,
const char *buf, size_t count)
static struct kobj_attribute keymap_attribute =
__ATTR(keymap, ROOT_W, keymap_show, keymap_store);
static struct kobj_attribute silent_attribute =
__ATTR(silent, USER_W, NULL, silent_store);
static struct kobj_attribute synth_attribute =
__ATTR(synth, USER_RW, synth_show, synth_store);
static struct kobj_attribute synth_direct_attribute =
__ATTR(synth_direct, USER_W, NULL, synth_direct_store);
static struct kobj_attribute version_attribute =
__ATTR_RO(version);
static struct kobj_attribute delimiters_attribute =
__ATTR(delimiters, USER_RW, punc_show, punc_store);
static struct kobj_attribute ex_num_attribute =
__ATTR(ex_num, USER_RW, punc_show, punc_store);
static struct kobj_attribute punc_all_attribute =
__ATTR(punc_all, USER_RW, punc_show, punc_store);
static struct kobj_attribute punc_most_attribute =
__ATTR(punc_most, USER_RW, punc_show, punc_store);
static struct kobj_attribute punc_some_attribute =
__ATTR(punc_some, USER_RW, punc_show, punc_store);
static struct kobj_attribute repeats_attribute =
__ATTR(repeats, USER_RW, punc_show, punc_store);
static struct kobj_attribute attrib_bleep_attribute =
__ATTR(attrib_bleep, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute bell_pos_attribute =
__ATTR(bell_pos, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute bleep_time_attribute =
__ATTR(bleep_time, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute bleeps_attribute =
__ATTR(bleeps, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute cursor_time_attribute =
__ATTR(cursor_time, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute key_echo_attribute =
__ATTR(key_echo, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute no_interrupt_attribute =
__ATTR(no_interrupt, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute punc_level_attribute =
__ATTR(punc_level, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute reading_punc_attribute =
__ATTR(reading_punc, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute say_control_attribute =
__ATTR(say_control, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute say_word_ctl_attribute =
__ATTR(say_word_ctl, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute spell_delay_attribute =
__ATTR(spell_delay, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute announcements_attribute =
__ATTR(announcements, USER_RW, message_show, message_store);
static struct kobj_attribute characters_attribute =
__ATTR(characters, USER_RW, chars_chartab_show, chars_chartab_store);
static struct kobj_attribute chartab_attribute =
__ATTR(chartab, USER_RW, chars_chartab_show, chars_chartab_store);
static struct kobj_attribute ctl_keys_attribute =
__ATTR(ctl_keys, USER_RW, message_show, message_store);
static struct kobj_attribute colors_attribute =
__ATTR(colors, USER_RW, message_show, message_store);
static struct kobj_attribute formatted_attribute =
__ATTR(formatted, USER_RW, message_show, message_store);
static struct kobj_attribute function_names_attribute =
__ATTR(function_names, USER_RW, message_show, message_store);
static struct kobj_attribute key_names_attribute =
__ATTR(key_names, USER_RW, message_show, message_store);
static struct kobj_attribute states_attribute =
__ATTR(states, USER_RW, message_show, message_store);
static struct attribute *main_attrs[] = ;
static struct attribute *i18n_attrs[] = ;
static struct attribute_group main_attr_group = ;
static struct attribute_group i18n_attr_group = ;
static struct kobject *accessibility_kobj;
struct kobject *speakup_kobj;
int speakup_kobj_init(void)
void speakup_kobj_exit(void)
