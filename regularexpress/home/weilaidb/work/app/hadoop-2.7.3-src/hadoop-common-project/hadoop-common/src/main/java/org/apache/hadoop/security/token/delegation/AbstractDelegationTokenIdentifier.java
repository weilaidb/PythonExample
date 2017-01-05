package org.apache.hadoop.security.token.delegation;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.io.WritableUtils;
import org.apache.hadoop.security.HadoopKerberosName;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.security.UserGroupInformation.AuthenticationMethod;
import org.apache.hadoop.security.token.TokenIdentifier;
import com.google.common.annotations.VisibleForTesting;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Evolving
public abstract class AbstractDelegationTokenIdentifier
extends TokenIdentifier
