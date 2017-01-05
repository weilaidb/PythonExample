package org.apache.hadoop.mapreduce;
import java.io.IOException;
import java.io.InputStream;
import java.nio.ByteBuffer;
import org.apache.commons.codec.binary.Base64;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.crypto.CryptoCodec;
import org.apache.hadoop.crypto.CryptoInputStream;
import org.apache.hadoop.fs.FSDataInputStream;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.fs.crypto.CryptoFSDataInputStream;
import org.apache.hadoop.fs.crypto.CryptoFSDataOutputStream;
import org.apache.hadoop.io.IOUtils;
import org.apache.hadoop.mapreduce.security.TokenCache;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.util.LimitInputStream;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class CryptoUtils
