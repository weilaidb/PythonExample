package org.apache.hadoop.fs;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.Options.ChecksumOpt;
import org.apache.hadoop.io.MD5Hash;
import org.apache.hadoop.io.WritableUtils;
import org.apache.hadoop.util.DataChecksum;
import org.xml.sax.Attributes;
import org.xml.sax.SAXException;
import org.znerd.xmlenc.XMLOutputter;
import org.apache.hadoop.fs.MD5MD5CRC32CastagnoliFileChecksum;
import org.apache.hadoop.fs.MD5MD5CRC32GzipFileChecksum;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Unstable
public class MD5MD5CRC32FileChecksum extends FileChecksum
