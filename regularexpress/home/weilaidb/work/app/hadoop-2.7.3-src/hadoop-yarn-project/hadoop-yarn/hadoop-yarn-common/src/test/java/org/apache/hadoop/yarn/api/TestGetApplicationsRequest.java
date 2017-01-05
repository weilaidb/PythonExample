package org.apache.hadoop.yarn.api;
import java.util.EnumSet;
import java.util.HashSet;
import java.util.Set;
import org.apache.commons.lang.math.LongRange;
import org.apache.hadoop.yarn.api.protocolrecords.ApplicationsRequestScope;
import org.apache.hadoop.yarn.api.protocolrecords.GetApplicationsRequest;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.GetApplicationsRequestPBImpl;
import org.apache.hadoop.yarn.api.records.YarnApplicationState;
import org.junit.Assert;
import org.junit.Test;
public class TestGetApplicationsRequest
