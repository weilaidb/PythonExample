package org.apache.hadoop.yarn.server.nodemanager.containermanager.localizer;
import java.net.URISyntaxException;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.yarn.api.records.LocalResource;
import org.apache.hadoop.yarn.api.records.LocalResourceType;
import org.apache.hadoop.yarn.api.records.LocalResourceVisibility;
import org.apache.hadoop.yarn.api.records.URL;
import org.apache.hadoop.yarn.util.ConverterUtils;
public class LocalResourceRequest
extends LocalResource implements Comparable<LocalResourceRequest>
