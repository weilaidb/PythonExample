typedef enum  getline_status;
static int input_field_count(const char *, size_t, u_int32_t *);
static getline_status
input_getline(char **, size_t *, size_t *);
static int input_put_alloc(u_int32_t **, size_t *, size_t, u_int32_t);
static int input_set_offset(u_int32_t *, char *, size_t, u_int32_t);
static input_fmt ifmt;
static u_long	 record_count = 0;
static u_long	 version;
int
input_load(input_fmt ifmt_arg, u_long version_arg)
static getline_status
input_getline(char **input_linep, size_t *input_lenp, size_t *lenp)
static int
input_field_count(const char *line, size_t len, u_int32_t *field_countp)
static int
input_put_alloc(u_int32_t **put_linep,
size_t *put_lenp, size_t len, u_int32_t field_count)
static int
input_set_offset(u_int32_t *put_line,
char *input_line, size_t len, u_int32_t field_count)
