#define HWSAMPLER_H_
struct hws_qsi_info_block
;
struct hws_ssctl_request_block
;
struct hws_cpu_buffer ;
struct hws_data_entry ;
struct hws_trailer_entry ;
int hwsampler_setup(void);
int hwsampler_shutdown(void);
int hwsampler_allocate(unsigned long sdbt, unsigned long sdb);
int hwsampler_deallocate(void);
unsigned long hwsampler_query_min_interval(void);
unsigned long hwsampler_query_max_interval(void);
int hwsampler_start_all(unsigned long interval);
int hwsampler_stop_all(void);
int hwsampler_deactivate(unsigned int cpu);
int hwsampler_activate(unsigned int cpu);
unsigned long hwsampler_get_sample_overflow_count(unsigned int cpu);
