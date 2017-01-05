package org.apache.hadoop.security.token.delegation;
import java.util.Collection;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.security.token.Token;
import org.apache.hadoop.security.token.TokenIdentifier;
import org.apache.hadoop.security.token.TokenSelector;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Evolving
public
class AbstractDelegationTokenSelector<TokenIdent
extends AbstractDelegationTokenIdentifier>
implements TokenSelector<TokenIdent>
