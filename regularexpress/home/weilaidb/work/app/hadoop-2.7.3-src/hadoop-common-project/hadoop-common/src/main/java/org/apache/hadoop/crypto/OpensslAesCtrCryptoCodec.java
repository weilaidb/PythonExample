package org.apache.hadoop.crypto;
import static org.apache.hadoop.fs.CommonConfigurationKeysPublic.HADOOP_SECURITY_SECURE_RANDOM_IMPL_KEY;
import java.io.Closeable;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.security.GeneralSecurityException;
import java.security.SecureRandom;
import java.util.Random;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import com.google.common.base.Preconditions;
import org.apache.hadoop.crypto.random.OsSecureRandom;
import org.apache.hadoop.util.ReflectionUtils;
@InterfaceAudience.Private
public class OpensslAesCtrCryptoCodec extends AesCtrCryptoCodec
