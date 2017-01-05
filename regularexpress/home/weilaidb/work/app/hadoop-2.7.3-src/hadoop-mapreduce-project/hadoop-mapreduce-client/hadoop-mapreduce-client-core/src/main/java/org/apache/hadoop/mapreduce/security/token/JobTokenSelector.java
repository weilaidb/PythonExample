package org.apache.hadoop.mapreduce.security.token;
import java.util.Collection;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.security.token.Token;
import org.apache.hadoop.security.token.TokenIdentifier;
import org.apache.hadoop.security.token.TokenSelector;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class JobTokenSelector implements TokenSelector<JobTokenIdentifier>
