package org.apache.hadoop.yarn.webapp.view;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.C_TH;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI._EVEN;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI._INFO;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI._INFO_WRAP;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI._ODD;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.yarn.webapp.ResponseInfo;
import org.apache.hadoop.yarn.webapp.hamlet.Hamlet;
import org.apache.hadoop.yarn.webapp.hamlet.Hamlet.DIV;
import org.apache.hadoop.yarn.webapp.hamlet.Hamlet.TABLE;
import org.apache.hadoop.yarn.webapp.hamlet.Hamlet.TD;
import org.apache.hadoop.yarn.webapp.hamlet.Hamlet.TR;
import com.google.inject.Inject;
@InterfaceAudience.LimitedPrivate()
public class InfoBlock extends HtmlBlock
