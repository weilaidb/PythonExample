package org.apache.hadoop.hdfs.security.token.block;
import java.util.Collection;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.security.token.Token;
import org.apache.hadoop.security.token.TokenIdentifier;
import org.apache.hadoop.security.token.TokenSelector;
@InterfaceAudience.Private
public class BlockTokenSelector implements TokenSelector<BlockTokenIdentifier>
