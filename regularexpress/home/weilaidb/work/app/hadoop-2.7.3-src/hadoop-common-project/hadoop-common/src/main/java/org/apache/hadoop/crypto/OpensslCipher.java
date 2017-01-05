package org.apache.hadoop.crypto;
import java.nio.ByteBuffer;
import java.security.NoSuchAlgorithmException;
import java.util.StringTokenizer;
import javax.crypto.BadPaddingException;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.NoSuchPaddingException;
import javax.crypto.ShortBufferException;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.util.NativeCodeLoader;
import com.google.common.base.Preconditions;
@InterfaceAudience.Private
public final class OpensslCipher
