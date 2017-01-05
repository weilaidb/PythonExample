package org.apache.hadoop.security;
import java.io.IOException;
import java.security.Principal;
import javax.security.auth.login.LoginContext;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.security.UserGroupInformation.AuthenticationMethod;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Evolving
class User implements Principal
