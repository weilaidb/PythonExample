package org.apache.hadoop.mapred;
import static org.apache.hadoop.mapred.MapTask.MAP_OUTPUT_INDEX_RECORD_LENGTH;
import java.io.File;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.nio.LongBuffer;
import java.util.zip.CheckedInputStream;
import java.util.zip.CheckedOutputStream;
import java.util.zip.Checksum;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.ChecksumException;
import org.apache.hadoop.fs.FSDataInputStream;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.IOUtils;
import org.apache.hadoop.io.SecureIOUtils;
import org.apache.hadoop.util.PureJavaCrc32;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Unstable
public class SpillRecord
