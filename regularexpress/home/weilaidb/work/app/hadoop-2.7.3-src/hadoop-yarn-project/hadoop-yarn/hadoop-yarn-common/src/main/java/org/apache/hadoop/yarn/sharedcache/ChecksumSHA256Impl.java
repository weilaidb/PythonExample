package org.apache.hadoop.yarn.sharedcache;
import java.io.IOException;
import java.io.InputStream;
import org.apache.commons.codec.digest.DigestUtils;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Evolving;
@Private
@Evolving
public class ChecksumSHA256Impl implements SharedCacheChecksum
