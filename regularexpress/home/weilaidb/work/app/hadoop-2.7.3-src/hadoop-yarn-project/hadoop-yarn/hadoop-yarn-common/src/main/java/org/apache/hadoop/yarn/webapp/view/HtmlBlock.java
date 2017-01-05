package org.apache.hadoop.yarn.webapp.view;
import java.io.PrintWriter;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.yarn.webapp.MimeType;
import org.apache.hadoop.yarn.webapp.SubView;
import org.apache.hadoop.yarn.webapp.WebAppException;
import org.apache.hadoop.yarn.webapp.hamlet.Hamlet;
@InterfaceAudience.LimitedPrivate()
public abstract class HtmlBlock extends TextView implements SubView
