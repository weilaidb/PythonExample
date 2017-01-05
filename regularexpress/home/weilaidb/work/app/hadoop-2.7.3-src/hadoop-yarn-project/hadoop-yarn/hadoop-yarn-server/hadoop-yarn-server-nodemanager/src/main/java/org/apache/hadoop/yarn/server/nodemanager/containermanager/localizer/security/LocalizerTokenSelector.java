package org.apache.hadoop.yarn.server.nodemanager.containermanager.localizer.security;
import java.util.Collection;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.security.token.Token;
import org.apache.hadoop.security.token.TokenIdentifier;
import org.apache.hadoop.security.token.TokenSelector;
public class LocalizerTokenSelector implements
TokenSelector<LocalizerTokenIdentifier>
