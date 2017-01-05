package org.apache.hadoop.yarn.server.nodemanager.containermanager.localizer.security;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.security.token.TokenIdentifier;
public class LocalizerTokenIdentifier extends TokenIdentifier
