package org.apache.hadoop.security.authorize;
import java.io.PrintStream;
import java.io.PrintWriter;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.security.AccessControlException;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Evolving
public class AuthorizationException extends AccessControlException
