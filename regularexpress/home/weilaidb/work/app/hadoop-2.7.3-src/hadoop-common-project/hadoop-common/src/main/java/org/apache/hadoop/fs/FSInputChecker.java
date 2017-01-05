package org.apache.hadoop.fs;
import java.io.EOFException;
import java.io.IOException;
import java.io.InputStream;
import java.util.zip.Checksum;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.util.StringUtils;
import java.nio.ByteBuffer;
import java.nio.IntBuffer;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Unstable
abstract public class FSInputChecker extends FSInputStream
