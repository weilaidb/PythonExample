package org.apache.hadoop.io.file.tfile;
import java.io.ByteArrayInputStream;
import java.io.Closeable;
import java.io.DataInput;
import java.io.DataInputStream;
import java.io.DataOutput;
import java.io.DataOutputStream;
import java.io.EOFException;
import java.io.IOException;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.Comparator;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FSDataInputStream;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.io.BoundedByteArrayOutputStream;
import org.apache.hadoop.io.BytesWritable;
import org.apache.hadoop.io.DataInputBuffer;
import org.apache.hadoop.io.DataOutputBuffer;
import org.apache.hadoop.io.IOUtils;
import org.apache.hadoop.io.RawComparator;
import org.apache.hadoop.io.WritableComparator;
import org.apache.hadoop.io.file.tfile.BCFile.Reader.BlockReader;
import org.apache.hadoop.io.file.tfile.BCFile.Writer.BlockAppender;
import org.apache.hadoop.io.file.tfile.Chunk.ChunkDecoder;
import org.apache.hadoop.io.file.tfile.Chunk.ChunkEncoder;
import org.apache.hadoop.io.file.tfile.CompareUtils.BytesComparator;
import org.apache.hadoop.io.file.tfile.CompareUtils.MemcmpRawComparator;
import org.apache.hadoop.io.file.tfile.Utils.Version;
import org.apache.hadoop.io.serializer.JavaSerializationComparator;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class TFile
