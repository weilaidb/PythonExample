package org.apache.hadoop.hdfs.protocol;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.UnresolvedLinkException;
import org.apache.hadoop.fs.Path;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public final class UnresolvedPathException extends UnresolvedLinkException
