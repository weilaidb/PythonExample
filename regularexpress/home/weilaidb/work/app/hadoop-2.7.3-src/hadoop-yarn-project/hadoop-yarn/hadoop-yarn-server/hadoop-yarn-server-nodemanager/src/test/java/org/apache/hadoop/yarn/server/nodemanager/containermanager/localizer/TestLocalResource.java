package org.apache.hadoop.yarn.server.nodemanager.containermanager.localizer;
import java.net.URISyntaxException;
import java.util.Random;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.yarn.api.records.LocalResourceType;
import org.apache.hadoop.yarn.api.records.LocalResourceVisibility;
import org.apache.hadoop.yarn.factory.providers.RecordFactoryProvider;
import org.apache.hadoop.yarn.server.nodemanager.containermanager.localizer.LocalResourceRequest;
import org.apache.hadoop.yarn.util.ConverterUtils;
import static org.apache.hadoop.yarn.api.records.LocalResourceType.*;
import static org.apache.hadoop.yarn.api.records.LocalResourceVisibility.*;
import org.junit.Test;
import static org.junit.Assert.*;
public class TestLocalResource
