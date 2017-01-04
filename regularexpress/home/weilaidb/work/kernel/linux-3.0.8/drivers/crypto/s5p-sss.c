#define _SBF(s, v)                      ((v) << (s))
#define _BIT(b)                         _SBF(b, 1)
#define SSS_REG_FCINTSTAT               0x0000
#define SSS_FCINTSTAT_BRDMAINT          _BIT(3)
#define SSS_FCINTSTAT_BTDMAINT          _BIT(2)
#define SSS_FCINTSTAT_HRDMAINT          _BIT(1)
#define SSS_FCINTSTAT_PKDMAINT          _BIT(0)
#define SSS_REG_FCINTENSET              0x0004
#define SSS_FCINTENSET_BRDMAINTENSET    _BIT(3)
#define SSS_FCINTENSET_BTDMAINTENSET    _BIT(2)
#define SSS_FCINTENSET_HRDMAINTENSET    _BIT(1)
#define SSS_FCINTENSET_PKDMAINTENSET    _BIT(0)
#define SSS_REG_FCINTENCLR              0x0008
#define SSS_FCINTENCLR_BRDMAINTENCLR    _BIT(3)
#define SSS_FCINTENCLR_BTDMAINTENCLR    _BIT(2)
#define SSS_FCINTENCLR_HRDMAINTENCLR    _BIT(1)
#define SSS_FCINTENCLR_PKDMAINTENCLR    _BIT(0)
#define SSS_REG_FCINTPEND               0x000C
#define SSS_FCINTPEND_BRDMAINTP         _BIT(3)
#define SSS_FCINTPEND_BTDMAINTP         _BIT(2)
#define SSS_FCINTPEND_HRDMAINTP         _BIT(1)
#define SSS_FCINTPEND_PKDMAINTP         _BIT(0)
#define SSS_REG_FCFIFOSTAT              0x0010
#define SSS_FCFIFOSTAT_BRFIFOFUL        _BIT(7)
#define SSS_FCFIFOSTAT_BRFIFOEMP        _BIT(6)
#define SSS_FCFIFOSTAT_BTFIFOFUL        _BIT(5)
#define SSS_FCFIFOSTAT_BTFIFOEMP        _BIT(4)
#define SSS_FCFIFOSTAT_HRFIFOFUL        _BIT(3)
#define SSS_FCFIFOSTAT_HRFIFOEMP        _BIT(2)
#define SSS_FCFIFOSTAT_PKFIFOFUL        _BIT(1)
#define SSS_FCFIFOSTAT_PKFIFOEMP        _BIT(0)
#define SSS_REG_FCFIFOCTRL              0x0014
#define SSS_FCFIFOCTRL_DESSEL           _BIT(2)
#define SSS_HASHIN_INDEPENDENT          _SBF(0, 0x00)
#define SSS_HASHIN_CIPHER_INPUT         _SBF(0, 0x01)
#define SSS_HASHIN_CIPHER_OUTPUT        _SBF(0, 0x02)
#define SSS_REG_FCBRDMAS                0x0020
#define SSS_REG_FCBRDMAL                0x0024
#define SSS_REG_FCBRDMAC                0x0028
#define SSS_FCBRDMAC_BYTESWAP           _BIT(1)
#define SSS_FCBRDMAC_FLUSH              _BIT(0)
#define SSS_REG_FCBTDMAS                0x0030
#define SSS_REG_FCBTDMAL                0x0034
#define SSS_REG_FCBTDMAC                0x0038
#define SSS_FCBTDMAC_BYTESWAP           _BIT(1)
#define SSS_FCBTDMAC_FLUSH              _BIT(0)
#define SSS_REG_FCHRDMAS                0x0040
#define SSS_REG_FCHRDMAL                0x0044
#define SSS_REG_FCHRDMAC                0x0048
#define SSS_FCHRDMAC_BYTESWAP           _BIT(1)
#define SSS_FCHRDMAC_FLUSH              _BIT(0)
#define SSS_REG_FCPKDMAS                0x0050
#define SSS_REG_FCPKDMAL                0x0054
#define SSS_REG_FCPKDMAC                0x0058
#define SSS_FCPKDMAC_BYTESWAP           _BIT(3)
#define SSS_FCPKDMAC_DESCEND            _BIT(2)
#define SSS_FCPKDMAC_TRANSMIT           _BIT(1)
#define SSS_FCPKDMAC_FLUSH              _BIT(0)
#define SSS_REG_FCPKDMAO                0x005C
#define SSS_REG_AES_CONTROL             0x4000
#define SSS_AES_BYTESWAP_DI             _BIT(11)
#define SSS_AES_BYTESWAP_DO             _BIT(10)
#define SSS_AES_BYTESWAP_IV             _BIT(9)
#define SSS_AES_BYTESWAP_CNT            _BIT(8)
#define SSS_AES_BYTESWAP_KEY            _BIT(7)
#define SSS_AES_KEY_CHANGE_MODE         _BIT(6)
#define SSS_AES_KEY_SIZE_128            _SBF(4, 0x00)
#define SSS_AES_KEY_SIZE_192            _SBF(4, 0x01)
#define SSS_AES_KEY_SIZE_256            _SBF(4, 0x02)
#define SSS_AES_FIFO_MODE               _BIT(3)
#define SSS_AES_CHAIN_MODE_ECB          _SBF(1, 0x00)
#define SSS_AES_CHAIN_MODE_CBC          _SBF(1, 0x01)
#define SSS_AES_CHAIN_MODE_CTR          _SBF(1, 0x02)
#define SSS_AES_MODE_DECRYPT            _BIT(0)
#define SSS_REG_AES_STATUS              0x4004
#define SSS_AES_BUSY                    _BIT(2)
#define SSS_AES_INPUT_READY             _BIT(1)
#define SSS_AES_OUTPUT_READY            _BIT(0)
#define SSS_REG_AES_IN_DATA(s)          (0x4010 + (s << 2))
#define SSS_REG_AES_OUT_DATA(s)         (0x4020 + (s << 2))
#define SSS_REG_AES_IV_DATA(s)          (0x4030 + (s << 2))
#define SSS_REG_AES_CNT_DATA(s)         (0x4040 + (s << 2))
#define SSS_REG_AES_KEY_DATA(s)         (0x4080 + (s << 2))
#define SSS_REG(dev, reg)               ((dev)->ioaddr + (SSS_REG_##reg))
#define SSS_READ(dev, reg)              __raw_readl(SSS_REG(dev, reg))
#define SSS_WRITE(dev, reg, val)        __raw_writel((val), SSS_REG(dev, reg))
#define FLAGS_AES_DECRYPT               _BIT(0)
#define FLAGS_AES_MODE_MASK             _SBF(1, 0x03)
#define FLAGS_AES_CBC                   _SBF(1, 0x01)
#define FLAGS_AES_CTR                   _SBF(1, 0x02)
#define AES_KEY_LEN         16
#define CRYPTO_QUEUE_LEN    1
struct s5p_aes_reqctx ;
struct s5p_aes_ctx ;
struct s5p_aes_dev ;
static struct s5p_aes_dev *s5p_dev;
static void s5p_set_dma_indata(struct s5p_aes_dev *dev, struct scatterlist *sg)
static void s5p_set_dma_outdata(struct s5p_aes_dev *dev, struct scatterlist *sg)
static void s5p_aes_complete(struct s5p_aes_dev *dev, int err)
static void s5p_unset_outdata(struct s5p_aes_dev *dev)
static void s5p_unset_indata(struct s5p_aes_dev *dev)
static int s5p_set_outdata(struct s5p_aes_dev *dev, struct scatterlist *sg)
static int s5p_set_indata(struct s5p_aes_dev *dev, struct scatterlist *sg)
static void s5p_aes_tx(struct s5p_aes_dev *dev)
static void s5p_aes_rx(struct s5p_aes_dev *dev)
static irqreturn_t s5p_aes_interrupt(int irq, void *dev_id)
static void s5p_set_aes(struct s5p_aes_dev *dev,
uint8_t *key, uint8_t *iv, unsigned int keylen)
static void s5p_aes_crypt_start(struct s5p_aes_dev *dev, unsigned long mode)
static void s5p_tasklet_cb(unsigned long data)
static int s5p_aes_handle_req(struct s5p_aes_dev *dev,
struct ablkcipher_request *req)
static int s5p_aes_crypt(struct ablkcipher_request *req, unsigned long mode)
static int s5p_aes_setkey(struct crypto_ablkcipher *cipher,
const uint8_t *key, unsigned int keylen)
static int s5p_aes_ecb_encrypt(struct ablkcipher_request *req)
static int s5p_aes_ecb_decrypt(struct ablkcipher_request *req)
static int s5p_aes_cbc_encrypt(struct ablkcipher_request *req)
static int s5p_aes_cbc_decrypt(struct ablkcipher_request *req)
static int s5p_aes_cra_init(struct crypto_tfm *tfm)
static struct crypto_alg algs[] = ;
static int s5p_aes_probe(struct platform_device *pdev)
static int s5p_aes_remove(struct platform_device *pdev)
static struct platform_driver s5p_aes_crypto = ;
static int __init s5p_aes_mod_init(void)
static void __exit s5p_aes_mod_exit(void)
module_init(s5p_aes_mod_init);
module_exit(s5p_aes_mod_exit);
MODULE_DESCRIPTION("S5PV210 AES hw acceleration support.");
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Vladimir Zapolskiy <vzapolskiy@gmail.com>");
