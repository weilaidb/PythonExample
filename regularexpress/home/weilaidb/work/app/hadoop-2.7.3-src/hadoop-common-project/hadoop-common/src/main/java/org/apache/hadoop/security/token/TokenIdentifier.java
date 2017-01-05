package org.apache.hadoop.security.token;
import java.io.IOException;
import java.util.Arrays;
import org.apache.commons.codec.digest.DigestUtils;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.DataOutputBuffer;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.security.UserGroupInformation;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Evolving
public abstract class TokenIdentifier implements Writable
