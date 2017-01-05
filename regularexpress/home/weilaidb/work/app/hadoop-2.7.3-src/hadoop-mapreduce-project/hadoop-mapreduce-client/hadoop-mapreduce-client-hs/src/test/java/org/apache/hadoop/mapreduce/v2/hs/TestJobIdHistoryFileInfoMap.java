package org.apache.hadoop.mapreduce.v2.hs;
import java.util.Collection;
import java.util.NavigableSet;
import org.apache.hadoop.mapreduce.v2.api.records.JobId;
import org.apache.hadoop.mapreduce.v2.hs.HistoryFileManager.HistoryFileInfo;
import org.apache.hadoop.mapreduce.v2.hs.HistoryFileManager.JobIdHistoryFileInfoMap;
import org.apache.hadoop.mapreduce.v2.util.MRBuilderUtils;
import org.junit.Test;
import org.mockito.Mockito;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;
public class TestJobIdHistoryFileInfoMap
