int add_range(struct range *range, int az, int nr_range, u64 start, u64 end)
int add_range_with_merge(struct range *range, int az, int nr_range,
u64 start, u64 end)
void subtract_range(struct range *range, int az, u64 start, u64 end)
static int cmp_range(const void *x1, const void *x2)
int clean_sort_range(struct range *range, int az)
void sort_range(struct range *range, int nr_range)
