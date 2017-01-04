#define CRYPTOCOP_H
#define CRYPTOCOP_SESSION_ID_NONE (0)
typedef unsigned long long int cryptocop_session_id;
#define ETRAXCRYPTOCOP_IOCTYPE         (250)
#define CRYPTOCOP_IO_CREATE_SESSION    _IOWR(ETRAXCRYPTOCOP_IOCTYPE, 1, struct strcop_session_op)
#define CRYPTOCOP_IO_CLOSE_SESSION     _IOW(ETRAXCRYPTOCOP_IOCTYPE, 2, struct strcop_session_op)
#define CRYPTOCOP_IO_PROCESS_OP        _IOWR(ETRAXCRYPTOCOP_IOCTYPE, 3, struct strcop_crypto_op)
#define CRYPTOCOP_IO_MAXNR             (3)
typedef enum  cryptocop_cipher_type;
typedef enum  cryptocop_digest_type;
typedef enum  cryptocop_csum_type;
typedef enum  cryptocop_cipher_mode;
typedef enum  cryptocop_3des_mode;
struct strcop_session_op;
#define CRYPTOCOP_CSUM_LENGTH         (2)
#define CRYPTOCOP_MAX_DIGEST_LENGTH   (20)
#define CRYPTOCOP_MAX_IV_LENGTH       (16)
#define CRYPTOCOP_MAX_KEY_LENGTH      (32)
struct strcop_crypto_op;
typedef enum  cryptocop_algorithm;
typedef u8 cryptocop_tfrm_id;
struct cryptocop_operation;
typedef void (cryptocop_callback)(struct cryptocop_operation*, void*);
struct cryptocop_transform_init ;
typedef enum  cryptocop_source;
struct cryptocop_desc_cfg ;
struct cryptocop_desc ;
#define CRYPTOCOP_NO_FLAG     (0x00)
#define CRYPTOCOP_ENCRYPT     (0x01)
#define CRYPTOCOP_DECRYPT     (0x02)
#define CRYPTOCOP_EXPLICIT_IV (0x04)
struct cryptocop_tfrm_cfg ;
struct cryptocop_dma_list_operation;
struct cryptocop_tfrm_operation;
struct cryptocop_operation ;
int cryptocop_new_session(cryptocop_session_id *sid, struct cryptocop_transform_init *tinit, int alloc_flag);
int cryptocop_free_session(cryptocop_session_id sid);
int cryptocop_job_queue_insert_csum(struct cryptocop_operation *operation);
int cryptocop_job_queue_insert_crypto(struct cryptocop_operation *operation);
int cryptocop_job_queue_insert_user_job(struct cryptocop_operation *operation);
