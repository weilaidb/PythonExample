package org.apache.hadoop.hdfs.server.namenode;
import java.io.IOException;
import java.util.EnumSet;
import java.util.List;
import java.util.NavigableMap;
import java.util.TreeMap;
import com.google.common.annotations.VisibleForTesting;
import com.google.common.base.Preconditions;
import com.google.common.collect.Lists;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.crypto.CipherSuite;
import org.apache.hadoop.crypto.CryptoProtocolVersion;
import org.apache.hadoop.fs.UnresolvedLinkException;
import org.apache.hadoop.fs.XAttr;
import org.apache.hadoop.fs.XAttrSetFlag;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.XAttrHelper;
import org.apache.hadoop.hdfs.protocol.EncryptionZone;
import org.apache.hadoop.hdfs.protocol.SnapshotAccessControlException;
import org.apache.hadoop.hdfs.protocol.proto.HdfsProtos;
import org.apache.hadoop.hdfs.protocolPB.PBHelper;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import static org.apache.hadoop.fs.BatchedRemoteIterator.BatchedListEntries;
import static org.apache.hadoop.hdfs.server.common.HdfsServerConstants
.CRYPTO_XATTR_ENCRYPTION_ZONE;
public class EncryptionZoneManager
