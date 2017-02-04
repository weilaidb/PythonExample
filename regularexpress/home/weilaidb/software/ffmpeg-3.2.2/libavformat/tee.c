typedef enum  SlaveFailurePolicy;
#define DEFAULT_SLAVE_FAILURE_POLICY ON_SLAVE_FAILURE_ABORT
typedef struct  TeeSlave;
typedef struct TeeContext  TeeContext;
static const char *const slave_delim     = ;
static const char *const slave_bsfs_spec_sep = ;
static const char *const slave_select_sep = ;
static const AVClass tee_muxer_class = ;
parse_slave_failure_policy_option
close_slave
close_slaves
open_slave
log_slave
tee_process_slave_failure
tee_write_header
tee_write_trailer
tee_write_packet
AVOutputFormat ff_tee_muxer = ;
