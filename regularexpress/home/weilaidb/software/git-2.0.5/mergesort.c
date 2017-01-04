struct mergesort_sublist ;
static void *get_nth_next(void *list, unsigned long n,
void *(*get_next_fn)(const void *))
static void *pop_item(struct mergesort_sublist *l,
void *(*get_next_fn)(const void *))
void *llist_mergesort(void *list,
void *(*get_next_fn)(const void *),
void (*set_next_fn)(void *, void *),
int (*compare_fn)(const void *, const void *))
