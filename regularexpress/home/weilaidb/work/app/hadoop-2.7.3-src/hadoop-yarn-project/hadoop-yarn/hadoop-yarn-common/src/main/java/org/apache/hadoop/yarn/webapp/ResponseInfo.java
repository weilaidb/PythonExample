package org.apache.hadoop.yarn.webapp;
import com.google.common.collect.Lists;
import com.google.inject.servlet.RequestScoped;
import java.util.Iterator;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience;
@InterfaceAudience.LimitedPrivate()
@RequestScoped
public class ResponseInfo implements Iterable<ResponseInfo.Item>
