package org.apache.hadoop.hdfs.tools;
import java.io.IOException;
import java.util.LinkedList;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.conf.Configured;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.RemoteIterator;
import org.apache.hadoop.hdfs.DistributedFileSystem;
import org.apache.hadoop.hdfs.protocol.EncryptionZone;
import org.apache.hadoop.tools.TableListing;
import org.apache.hadoop.util.StringUtils;
import org.apache.hadoop.util.Tool;
@InterfaceAudience.Private
public class CryptoAdmin extends Configured implements Tool
