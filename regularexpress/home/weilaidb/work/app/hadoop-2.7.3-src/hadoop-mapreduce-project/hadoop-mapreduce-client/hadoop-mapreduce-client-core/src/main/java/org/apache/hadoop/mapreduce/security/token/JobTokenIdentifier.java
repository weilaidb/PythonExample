package org.apache.hadoop.mapreduce.security.token;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.security.token.Token;
import org.apache.hadoop.security.token.TokenIdentifier;
import org.apache.hadoop.security.UserGroupInformation;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class JobTokenIdentifier extends TokenIdentifier
