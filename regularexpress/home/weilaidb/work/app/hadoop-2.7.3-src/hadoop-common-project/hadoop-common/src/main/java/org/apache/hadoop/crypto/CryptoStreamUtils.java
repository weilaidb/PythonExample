package org.apache.hadoop.crypto;
import static org.apache.hadoop.fs.CommonConfigurationKeysPublic.HADOOP_SECURITY_CRYPTO_BUFFER_SIZE_DEFAULT;
import static org.apache.hadoop.fs.CommonConfigurationKeysPublic.HADOOP_SECURITY_CRYPTO_BUFFER_SIZE_KEY;
import java.io.IOException;
import java.io.InputStream;
import java.nio.ByteBuffer;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Seekable;
import com.google.common.base.Preconditions;
@InterfaceAudience.Private
public class CryptoStreamUtils
