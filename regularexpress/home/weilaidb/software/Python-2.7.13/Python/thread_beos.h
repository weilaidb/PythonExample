typedef struct benaphore  benaphore_t;
static status_t benaphore_create( const char *name, benaphore_t *ben );
static status_t benaphore_destroy( benaphore_t *ben );
static status_t benaphore_lock( benaphore_t *ben );
static status_t benaphore_timedlock( benaphore_t *ben, bigtime_t micros );
static status_t benaphore_unlock( benaphore_t *ben );
static status_t benaphore_create( const char *name, benaphore_t *ben )
static status_t benaphore_destroy( benaphore_t *ben )
static status_t benaphore_lock( benaphore_t *ben )
static status_t benaphore_timedlock( benaphore_t *ben, bigtime_t micros )
static status_t benaphore_unlock( benaphore_t *ben )
static void PyThread__init_thread( void )
static int32 thread_count = 0;
long PyThread_start_new_thread( void (*func)(void *), void *arg )
long PyThread_get_thread_ident( void )
void PyThread_exit_thread( void )
static int32 lock_count = 0;
PyThread_type_lock PyThread_allocate_lock( void )
void PyThread_free_lock( PyThread_type_lock lock )
int PyThread_acquire_lock( PyThread_type_lock lock, int waitflag )
void PyThread_release_lock( PyThread_type_lock lock )
