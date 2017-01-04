#define EVENT_BUFFER_H
int alloc_event_buffer(void);
void free_event_buffer(void);
void add_event_entry(unsigned long data);
void wake_up_buffer_waiter(void);
#define INVALID_COOKIE ~0UL
#define NO_COOKIE 0UL
extern const struct file_operations event_buffer_fops;
extern struct mutex buffer_mutex;
