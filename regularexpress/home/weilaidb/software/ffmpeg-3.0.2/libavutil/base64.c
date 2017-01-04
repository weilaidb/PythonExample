static const uint8_t map2[256] =
;
#define BASE64_DEC_STEP(i) do  while(0)
int av_base64_decode(uint8_t *out, const char *in_str, int out_size)
char *av_base64_encode(char *out, int out_size, const uint8_t *in, int in_size)
#define MAX_DATA_SIZE    1024
#define MAX_ENCODED_SIZE 2048
static int test_encode_decode(const uint8_t *data, unsigned int data_size,
const char *encoded_ref)
int main(int argc, char ** argv)
