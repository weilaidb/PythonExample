package org.apache.hadoop.io.nativeio;
import java.io.File;
import java.io.FileDescriptor;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.lang.reflect.Field;
import java.nio.ByteBuffer;
import java.nio.MappedByteBuffer;
import java.nio.channels.FileChannel;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.fs.HardLink;
import org.apache.hadoop.io.IOUtils;
import org.apache.hadoop.io.SecureIOUtils.AlreadyExistsException;
import org.apache.hadoop.util.NativeCodeLoader;
import org.apache.hadoop.util.Shell;
import org.apache.hadoop.util.PerformanceAdvisory;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import sun.misc.Unsafe;
import com.google.common.annotations.VisibleForTesting;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class NativeIO
