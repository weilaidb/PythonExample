static int __cvmx_helper_initialize_fpa_pool(int pool, uint64_t buffer_size,
uint64_t buffers, const char *name)
static int __cvmx_helper_initialize_fpa(int pip_pool, int pip_size,
int pip_buffers, int wqe_pool,
int wqe_size, int wqe_entries,
int pko_pool, int pko_size,
int pko_buffers, int tim_pool,
int tim_size, int tim_buffers,
int dfa_pool, int dfa_size,
int dfa_buffers)
int cvmx_helper_initialize_fpa(int packet_buffers, int work_queue_entries,
int pko_buffers, int tim_buffers,
int dfa_buffers)
