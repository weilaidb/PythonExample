package org.apache.hadoop.hdfs.web;
import java.io.IOException;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.security.authentication.client.Authenticator;
import org.apache.hadoop.security.authentication.client.KerberosAuthenticator;
import org.apache.hadoop.security.authentication.client.PseudoAuthenticator;
public class KerberosUgiAuthenticator extends KerberosAuthenticator
