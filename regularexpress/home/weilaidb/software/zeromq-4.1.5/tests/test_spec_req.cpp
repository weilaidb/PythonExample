const char *bind_address = 0;
const char *connect_address = 0;
void test_round_robin_out (void *ctx)
void test_req_only_listens_to_current_peer (void *ctx)
void test_req_message_format (void *ctx)
void test_block_on_send_no_peers (void *ctx)
int main (void)
{
setup_test_environment();
void *ctx = zmq_ctx_new ();
assert (ctx);
const char *binds [] = { "inproc:
const char *connects [] =
