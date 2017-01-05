package org.apache.hadoop.yarn.webapp.view;
import static org.apache.commons.lang.StringEscapeUtils.escapeJavaScript;
import static org.apache.hadoop.yarn.util.StringHelper.djoin;
import static org.apache.hadoop.yarn.util.StringHelper.join;
import static org.apache.hadoop.yarn.util.StringHelper.split;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.yarn.webapp.hamlet.HamletSpec.HTML;
import com.google.common.collect.Lists;
@InterfaceAudience.LimitedPrivate()
public class JQueryUI extends HtmlBlock {
public static final String ACCORDION = "ui.accordion";
public static final String ACCORDION_ID = ACCORDION +".id";
public static final String DATATABLES = "ui.dataTables";
public static final String DATATABLES_ID = DATATABLES +".id";
public static final String DATATABLES_SELECTOR = DATATABLES +".selector";
public static final String DIALOG = "ui.dialog";
public static final String DIALOG_ID = DIALOG +".id";
public static final String DIALOG_SELECTOR = DIALOG +".selector";
public static final String PROGRESSBAR = "ui.progressbar";
public static final String PROGRESSBAR_ID = PROGRESSBAR +".id";
public static final String _PROGRESSBAR =
".ui-progressbar.ui-widget.ui-widget-content.ui-corner-all";
public static final String C_PROGRESSBAR =
_PROGRESSBAR.replace('.', ' ').trim();
public static final String _PROGRESSBAR_VALUE =
".ui-progressbar-value.ui-widget-header.ui-corner-left";
public static final String C_PROGRESSBAR_VALUE =
_PROGRESSBAR_VALUE.replace('.', ' ').trim();
public static final String _INFO_WRAP =
".info-wrap.ui-widget-content.ui-corner-bottom";
public static final String _TH = ".ui-state-default";
public static final String C_TH = _TH.replace('.', ' ').trim();
public static final String C_TABLE = "table";
public static final String _INFO = ".info";
public static final String _ODD = ".odd";
public static final String _EVEN = ".even";
@Override
protected void render(Block html)
public static void jsnotice(HTML html)
protected void initAccordions(List<String> list)
protected void initDataTables(List<String> list) {
String defaultInit = "";
String stateSaveInit = "bStateSave : true, " +
"\"fnStateSave\": function (oSettings, oData) , " +
"\"fnStateLoad\": function (oSettings) , ";
for (String id : split($(DATATABLES_ID))) {
if (Html.isValidId(id))
String selector = $(DATATABLES_SELECTOR);
if (!selector.isEmpty())
protected void initDialogs(List<String> list)
protected void initProgressBars(List<String> list)
public static String initID(String name, String id)
public static String postInitID(String name, String id)
public static String initSelector(String name)
public static StringBuilder tableInit()
