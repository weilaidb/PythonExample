package org.apache.hadoop.metrics2.filter;
import java.util.Arrays;
import java.util.List;
import org.apache.commons.configuration.SubsetConfiguration;
import org.junit.Test;
import static org.junit.Assert.*;
import static org.mockito.Mockito.*;
import org.apache.hadoop.metrics2.MetricsFilter;
import org.apache.hadoop.metrics2.MetricsRecord;
import org.apache.hadoop.metrics2.MetricsTag;
import org.apache.hadoop.metrics2.impl.ConfigBuilder;
import static org.apache.hadoop.metrics2.lib.Interns.*;
public class TestPatternFilter
